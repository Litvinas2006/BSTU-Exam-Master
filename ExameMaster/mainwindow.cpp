#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QWidget>
#include <QMainWindow>
#include "choise.h"

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

void MainWindow::on_pushButton_clicked()
{

}

