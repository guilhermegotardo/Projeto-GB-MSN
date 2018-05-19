/*************************************************************************\
  * KClient - A Toy Client in Qt
  *
  * Author : Manohar Kuse (mpkuse@ust.hk)
  * Date   : 26th Mar, 2014
  * Webpage : http://kusemanohar.wordpress.com/2014/03/26/qt-network-programming/
\*************************************************************************/




#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // connectionInit() to be called whenever the connection is estabished
    connect(&tcpSocket,SIGNAL(connected()), this, SLOT(connectionInit()));

    // handleError( ); is called if an error occurs when connecting to the server
    connect(&tcpSocket,SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(handleError(QAbstractSocket::SocketError)));

    // dataArrived(); is called when the data has arrived from the server
    connect(&tcpSocket,SIGNAL(readyRead()),this, SLOT(dataArrived()));

}

MainWindow::~MainWindow()
{
    delete ui;
}


// This function is called when you click the "connect" button in the ui (user-interface)
void MainWindow::on_connectButton_clicked()
{
    // Read the IP address from the text field in the UI (user-interface)
    QHostAddress addr( ui->ip->text() );

    // Attempt to connect to server
    // Note : For simplicity we are not doing a DNS lookup of the IP address. But in real application you need
    //        to do a DNS lookup before attempting to connect. Please search on google "Qt DNS lookup" to
    //        understand how to do a DNS lookup
    tcpSocket.connectToHost(addr, ui->port->text().toUShort()  );

}


// This function is called when the connection has been established successfully with the server stated.
void MainWindow::connectionInit()
{
    // Pop-up to notify you the success
    QMessageBox::information(this,"Connected", "Connection Successful");
}


// This function is called if there is an error (or disruption) in the connection
void MainWindow::handleError(QAbstractSocket::SocketError err)
{
    // Pop-up to notify an error. tcpSocket.errorString() automatically gets an error message (in english).
    QMessageBox::critical(this,"Error", tcpSocket.errorString());

    // Formally close the connection
    tcpSocket.close();
}


// This function is called when the data is fully arrived from the server to the client
void MainWindow::dataArrived()
{
    // Read the data that we receive
    QByteArray buf = tcpSocket.read(100); //maximum read 100 bytes

    // Show this data in the textBrowser in the UI (user-interface)
    ui->textBrowser->append(QString("Server >> ") +buf); //put this data into the text browser

}


// This function is called whenever, we click the send button in the UI
void MainWindow::on_sendButton_clicked()
{
    // check if the connection is open. ie, if we are connected to a server
    if( !tcpSocket.isOpen() )
    {
        QMessageBox::critical(this, "No Server Connected", "No Server Connected");
        return;
    }

    // Retrive the text that is written in the UI. The input area where we are supposed to write our message
    QString str = ui->messageToSend->text();

    // Send this data to the server. str.ToUtf8() is done to convert QStrint to QByteArray.
    // Never mind if you don't understand this clearly. Just remember this conversion is required if you want to send
    // the data
    tcpSocket.write(str.toUtf8());

    // Set this same data into the textBrower.
    // Note : 2 strings can be concatenated with a "+"
    ui->textBrowser->append(QString("ME >> ")+str);

    // Clear the sending input box
    ui->messageToSend->clear();
}
