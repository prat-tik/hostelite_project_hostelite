#include "myacc.h"
#include "ui_myacc.h"

myacc::myacc(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::myacc)
{
    ui->setupUi(this);
}

myacc::~myacc()
{
    delete ui;
}
