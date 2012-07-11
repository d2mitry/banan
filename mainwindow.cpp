#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtAddOnSerialPort/serialport.h>
#include <QtAddOnSerialPort/serialport-global.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
  //  showFullScreen();
    ui->TextLabel->setText("+++");

    status_label = new QLabel(this);
    status_progress = new QProgressBar(this);
    status_progress->setRange(1,100);

    statusBar()->addWidget(status_progress);
    statusBar()->addWidget(status_label);


    QObject::connect(ui->startBtn, SIGNAL(clicked()), this, SLOT(slot_startcomm()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setprogress()
{
    status_progress->setValue(50);
}

void MainWindow::slot_startcomm()
{
    comm_thread = new CommuniqThread(ui->port_selector->currentText(), this);
    comm_thread->start();
    qDebug()<< "inmain" << this;

}

