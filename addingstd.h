#ifndef ADDINGSTD_H
#define ADDINGSTD_H

#include <QDialog>

namespace Ui {
class addingstd;
}

class addingstd : public QDialog
{
    Q_OBJECT

public:
    explicit addingstd(QWidget *parent = nullptr);
    ~addingstd();

private:
    Ui::addingstd *ui;
};

#endif // ADDINGSTD_H
