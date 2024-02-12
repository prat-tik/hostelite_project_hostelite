#include "stddet.h"
#include "ui_stddet.h"

stddet::stddet(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::stddet)
{
    ui->setupUi(this);
}

stddet::~stddet()
{
    delete ui;
}
