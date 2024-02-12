#ifndef MYACC_H
#define MYACC_H

#include <QDialog>

namespace Ui {
class myacc;
}

class myacc : public QDialog
{
    Q_OBJECT

public:
    explicit myacc(QWidget *parent = nullptr);
    ~myacc();

private:
    Ui::myacc *ui;
};

#endif // MYACC_H
