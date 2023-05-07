#ifndef USERBUY_H
#define USERBUY_H

#include <QDialog>
#include"mvs.h"
#include"mvs2.h"
#include"buyfinish.h"
namespace Ui {
class userbuy;
}

class userbuy : public QDialog
{
    Q_OBJECT

public:
    explicit userbuy(int c_id,int u_id,QWidget *parent = nullptr);
    ~userbuy();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::userbuy *ui;
    int c_id;
    int u_id;
    mvs user_data;
    mvs2 item_data;
};

#endif // USERBUY_H
