#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtAddOnSerialPort/serialport.h>
#include <QtAddOnSerialPort/serialport-global.h>
#include <communiqthread.h>
#include <QLabel>
#include <QProgressBar>

namespace Ui {
class MainWindow;
}


QT_USE_NAMESPACE_SERIALPORT

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setprogress();
    
private:
    Ui::MainWindow *ui;
    CommuniqThread * comm_thread;
    QLabel* status_label;
    QProgressBar * status_progress;



private slots:
    void slot_startcomm();
};

#endif // MAINWINDOW_H
