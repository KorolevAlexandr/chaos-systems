#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <math.h>
#include <QString>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    setWindowTitle("");
    ui->tableWidget_orbitsTable->setColumnCount(3);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButton_clicked()
{
    ui->tableWidget_orbitsTable->setRowCount(50);

    for (auto i = 0; i < 50; i++) {
        ui->tableWidget_orbitsTable->setItem(i-1,0,new QTableWidgetItem(QString("i")));
        ui->tableWidget_orbitsTable->setItem(i-1,1,new QTableWidgetItem(QString::number(i*i)));
        ui->tableWidget_orbitsTable->setItem(i-1,2,new QTableWidgetItem(QString::number(sqrt(i))));
    }
}
