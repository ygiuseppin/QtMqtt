#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "publisher.h"
#include "subscriber.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_connect_clicked();

    void on_send_clicked();

private:
    Ui::MainWindow *ui;

    Subscriber* subscriber_;
    Publisher* publisher_;

public slots:
    void messageReceived(QString msg);
};

#endif // MAINWINDOW_H
