#include "menu_ui.h"
#include "ui_menu_ui.h"
#include <QProcess>
#include<addingstd.h>
#include<stddet.h>
#include<rstus.h>
#include<db.h>
#include<myacc.h>

menu_ui::menu_ui(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::menu_ui)
{
    ui->setupUi(this);
}

menu_ui::~menu_ui()
{
    delete ui;
}

void menu_ui::on_pushButton_clicked()
{
    QProcess::startDetached(QApplication::applicationFilePath());
    QApplication::quit();
}


void menu_ui::on_ANS_clicked()
{
    addingstd addwin;
    addwin.setModal(true);
    addwin.exec();
}


void menu_ui::on_SD_clicked()
{
    stddet s;
    s.setModal(true);
    s.exec();
}


void menu_ui::on_RS_clicked()
{
    rstus r;
    r.setModal(true);
    r.exec();
}



void menu_ui::on_DB_clicked()
{
    db d;
    d.setModal(true);
    d.exec();

}


void menu_ui::on_MYA_clicked()
{
    myacc ac;
    ac.setModal(true);
    ac.exec();
}

