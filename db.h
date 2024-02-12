#ifndef DB_H
#define DB_H

#include <QDialog>

namespace Ui {
class db;
}

class db : public QDialog
{
    Q_OBJECT

public:
    explicit db(QWidget *parent = nullptr);
    ~db();

private:
    Ui::db *ui;
};

#endif // DB_H
