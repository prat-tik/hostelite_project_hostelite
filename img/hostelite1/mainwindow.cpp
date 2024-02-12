#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include <QLineEdit>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   // QPixmap pix(C:/Users/ASUS/Desktop/hostel.jpg);
    //ui->label->setPixmap(pix);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_back1_clicked()
{
    //MainWindow di;
    //di .setmodal(true);
    //di .exec();

}


void MainWindow::on_pushButton_2_clicked()
{

   QString inputValue = ui->rmno->text();
    if (!inputValue.isEmpty())
    {

    Dialog di;
    di.setModal(true);
    di.exec();
}
}



