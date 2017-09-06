#include "mainwindow.h"
#include <QApplication>
#include <QThread>
#include <iostream>
#include <QHostAddress>
#include <QTimer>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    MainWindow w;
    w.show();

    return app.exec();
}
