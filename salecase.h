#ifndef SALECASE_H
#define SALECASE_H

#include <QDialog>
#include<QDebug>
#include"mvs.h"
#include"mvs2.h"
#include"mvs3.h"
#include"locale.h"
namespace Ui {
class salecase;
}

class salecase : public QDialog
{
    Q_OBJECT

public:
    explicit salecase(user data,QWidget *parent = nullptr);
    ~salecase();
    int getstate2();
        user data;
public slots:
        void completeshow(mvs3);
    void sellf(item sum);
//   void selc();
private slots:
    void report2();
    void slotCellEnter2(int r, int c);
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();
    void slotCellEnter3(int r, int c);
    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::salecase *ui;

    int id,state2=0;
    mvs2 item_data;
    mvs3 order_data;
    void upcase3();
    void upcase2();
};

#endif // SALECASE_H
