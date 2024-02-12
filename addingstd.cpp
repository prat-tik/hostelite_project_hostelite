#include "addingstd.h"
#include "ui_addingstd.h"

addingstd::addingstd(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addingstd)
{
    ui->setupUi(this);
}

addingstd::~addingstd()
{
    delete ui;
}
