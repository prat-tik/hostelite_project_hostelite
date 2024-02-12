#include "rstus.h"
#include "ui_rstus.h"

rstus::rstus(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::rstus)
{
    ui->setupUi(this);
}

rstus::~rstus()
{
    delete ui;
}
