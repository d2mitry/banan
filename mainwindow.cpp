#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtAddOnSerialPort/serialport.h>
#include <QtAddOnSerialPort/serialport-global.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    showFullScreen();
    serial = new SerialPort(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
