#ifndef ADMINCASE_H
#define ADMINCASE_H

#include <QDialog>
#include"mvs.h"
#include"mvs2.h"
#include"mvs3.h"
#include"mvs4.h"
#include<QDebug>
#include<QTableWidget>
namespace Ui {
class admincase;
}

class admincase : public QDialog
{
    Q_OBJECT

public:
    explicit admincase(QWidget *parent = nullptr);
    ~admincase();
public slots:
        void completeshow(mvs3);
private slots:
    void on_pushButton_clicked();
    void report();
     void report2();
     void report4();
    void slotCellEnter(int r, int c);
    void slotCellEnter2(int r, int c);
    void slotCellEnter3(int r, int c);
     void slotCellEnter4(int r, int c);
    void on_pushButton_2_clicked();
    void on_radioButton_cid_toggled(bool checked);

    void on_radioButton_cname_toggled(bool checked);

    void on_radioButton_price_toggled(bool checked);

    void on_radioButton_sid_toggled(bool checked);

    void on_radioButton_date_toggled(bool checked);

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::admincase *ui;
    mvs user_data;
    mvs2 item_data;
    mvs3 order_data;
    mvs4 buy_data;
    void upcase();
    void upcase2(int i=1);
    void upcase3();
     void upcase4();

    int state=1;
};

#endif // ADMINCASE_H
