#include "communiqthread.h"

CommuniqThread::CommuniqThread(const QString & in_portname, QObject *parent)
    :QThread(parent),
     rs232_portname(in_portname)
{

}

void CommuniqThread::run()
{
      qDebug()<< "inthread " << rs232_portname << this;
}
