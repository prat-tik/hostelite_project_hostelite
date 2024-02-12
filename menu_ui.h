#ifndef MENU_UI_H
#define MENU_UI_H

#include <QDialog>

namespace Ui {
class menu_ui;
}

class menu_ui : public QDialog
{
    Q_OBJECT

public:
    explicit menu_ui(QWidget *parent = nullptr);
    ~menu_ui();

private slots:
    void on_pushButton_clicked();

    void on_ANS_clicked();

    void on_SD_clicked();

    void on_RS_clicked();

    void on_DB_clicked();

    void on_MYA_clicked();

private:
    Ui::menu_ui *ui;
};

#endif // MENU_UI_H
