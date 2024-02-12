#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<menu_ui.h>
#include<QPixmap>
#include <QApplication>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QMessageBox>
#include <QVBoxLayout>
#include <QWidget>
#include <QCryptographicHash>
#include <QDebug>
#include <QString>
#include <rstus.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->resize(800, 600); // Set the window size to 800x600 pixels

    QPixmap pixmap(":/resource/img/hostelite.jpg");
    pixmap = pixmap.scaled(400, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);

    ui->label_3->setPixmap(pixmap);
    ui->label_3->setFixedSize(400, 400);
}

MainWindow::~MainWindow()
{
    delete ui;
}








void MainWindow::on_login_clicked()
{
    QString enteredUsername = ui->username->text(); // The username entered by the user
    QString enteredPassword = ui->password->text(); // The password entered by the user

    // The stored username and password hash of the correct user
    QString storedUsername = "admin";
    QString storedPasswordHash = "5e884898da28047151d0e56f8dc6292773603d0d6aabbdd62a11ef721d1542d8";

    // Hash the entered password
    QCryptographicHash hash(QCryptographicHash::Sha256);
    hash.addData(enteredPassword.toUtf8());
    QString enteredPasswordHash = QString(hash.result().toHex());

    // Compare the entered username and password hash to the stored ones
    if (enteredUsername == storedUsername && enteredPasswordHash == storedPasswordHash) {
        // The username and password are correct
        menu_ui menu_ui;
        menu_ui.setModal(true);
        menu_ui.exec();



    } else {
        // The username or password is incorrect
        QMessageBox::warning(this, "Login", "Warning: Username or password incorrect.");
    }
}


void MainWindow::on_cancel_clicked()
{
    auto reply = QMessageBox::question(this, "Confirmation", "Are you sure you want to exit the app?",
                                       QMessageBox::Yes|QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        // Exit the app
        QApplication::quit();
    }
}

