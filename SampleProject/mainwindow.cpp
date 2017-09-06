#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_connect_clicked()
{
    quint16 port = ui->port->text().toUInt();
    subscriber_ = new Subscriber(QHostAddress(ui->ip->text()),port,ui->topic->text());
    publisher_ = new Publisher(QHostAddress(ui->ip->text()),port,ui->topic->text());

    subscriber_->connectToHost();
    publisher_->connectToHost();

    connect(subscriber_,SIGNAL(messageReceived(QString)),this,SLOT(messageReceived(QString)));
}

void MainWindow::messageReceived(QString msg){

    ui->received->addItem(msg);

}

void MainWindow::on_send_clicked()
{
    publisher_->publishOne(ui->message->text());
}
