#ifndef STDDET_H
#define STDDET_H

#include <QDialog>

namespace Ui {
class stddet;
}

class stddet : public QDialog
{
    Q_OBJECT

public:
    explicit stddet(QWidget *parent = nullptr);
    ~stddet();

private:
    Ui::stddet *ui;
};

#endif // STDDET_H
