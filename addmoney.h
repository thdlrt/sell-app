#ifndef ADDMONEY_H
#define ADDMONEY_H
#include "mvs.h"
#include "mvs4.h"
#include <QDialog>

namespace Ui {
class addmoney;
}

class addmoney : public QDialog
{
    Q_OBJECT

public:
    explicit addmoney(int id,mvs4 buy_data2,QWidget *parent = nullptr);
    ~addmoney();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::addmoney *ui;
    int id;
    mvs user_data;
    mvs4 buy_data, buy_data2;
};

#endif // ADDMONEY_H
