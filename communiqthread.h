#ifndef COMMUNIQTHREAD_H
#define COMMUNIQTHREAD_H

#include <QThread>
#include <QDebug>

#include <QtAddOnSerialPort/serialport.h>
#include <QtAddOnSerialPort/serialport-global.h>

//#include "mainwindow.h"

class CommuniqThread : public QThread
{
    Q_OBJECT
private:

    //MainWindow * mw;

    QString rs232_portname;



public:

    CommuniqThread(const QString & in_portname, QObject *parent);
    void run();

};

#endif // COMMUNIQTHREAD_H
