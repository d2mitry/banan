#ifndef COMMUNIQTHREAD_H
#define COMMUNIQTHREAD_H

#include <QThread>

class CommuniqThread : public QThread
{
    Q_OBJECT
private:
    QString rs232_portname;
public:
    CommuniqThread(const QString & in_portname);
    void run();

};

#endif // COMMUNIQTHREAD_H
