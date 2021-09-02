#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_9_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"9");

}

void MainWindow::settext()
{
    ui->lineEdit->setText(ui->lineEdit->text()+qobject_cast<QPushButton*>(sender())->text());
}
