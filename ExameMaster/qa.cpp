#include "qa.h"
#include "ui_qa.h"

QA::QA(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::QA)
{
    ui->setupUi(this);
}

QA::~QA()
{
    delete ui;
}
