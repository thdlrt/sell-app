#ifndef USERCASE_H
#define USERCASE_H

#include <QDialog>
#include<QDebug>
#include"userchoice.h"
#include"mvs.h"
#include"mvs2.h"
#include"mvs3.h"
#include"mvs4.h"
#include"login.h"
#include"fale.h"
#include"complete.h"
namespace Ui {
class usercase;
}

class usercase : public QDialog
{
    Q_OBJECT

public:
    explicit usercase(user data,QWidget *parent = nullptr);
    ~usercase();
    int getstate2();
        user data;
public slots:
        void buyf(QString,QString);
        void completeshow(mvs3);
private slots:
    void on_pushButton_clicked();
    void report2();
    void report4();
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();
    void slotCellEnter2(int r, int c);
    void slotCellEnter3(int r, int c);
    void slotCellEnter4(int r, int c);
    void on_pushButton_4_clicked();
    void on_radioButton_cid_toggled(bool checked);

    void on_radioButton_cname_toggled(bool checked);

    void on_radioButton_price_toggled(bool checked);

    void on_radioButton_sid_toggled(bool checked);

    void on_radioButton_date_toggled(bool checked);

    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();

private:
    Ui::usercase *ui;
    int state,state2=0;

    int id;
    mvs3 order_data;
    mvs2 item_data,item_data_show;
    void upcase2(int i=1);
    void upcase3();
    mvs4 buy_data;
    void upcase4();
};

#endif // USERCASE_H
