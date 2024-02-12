#ifndef RSTUS_H
#define RSTUS_H

#include <QDialog>

namespace Ui {
class rstus;
}

class rstus : public QDialog
{
    Q_OBJECT

public:
    explicit rstus(QWidget *parent = nullptr);
    ~rstus();

private:
    Ui::rstus *ui;
};

#endif // RSTUS_H
