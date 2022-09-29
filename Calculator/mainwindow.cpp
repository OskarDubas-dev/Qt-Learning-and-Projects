#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->radioButton->setChecked(1);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onButtonClicked()
{

}
void MainWindow::on_pushButton_2_clicked()
{
    ui->pushButton_2->setText("Hi!");
}

