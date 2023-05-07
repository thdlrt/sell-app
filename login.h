#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include"mvs.h"
#include"setlog.h"
#include<QDebug>
#include<QTimer>
#include"mvs.h"
#include"mvs2.h"
#include"mvs3.h"
#include"mvs4.h"
namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT
public:
    bool right(QString user_name,QString user_password);
    explicit login(QWidget *parent = nullptr);
    ~login();
    int getstate();
    int getid();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void core();
signals:

    void buy_complete(mvs3 sum);

    void buy_false(QString a,QString b);

    void sell_complete(mvs3 sum);

    void sell_false(item sum);

    void admin_complete(mvs3 sum);
private:
    Ui::login *ui;
    mvs userdata;
    int error_num=0;
    int state;
    QString id;
    QTimer*t;
};

#endif // LOGIN_H
