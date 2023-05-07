#ifndef EDITITEM_H
#define EDITITEM_H

#include <QDialog>
#include"mvs2.h"
namespace Ui {
class edititem;
}

class edititem : public QDialog
{
    Q_OBJECT

public:
    explicit edititem(int i,mvs2 item_data,QWidget *parent = nullptr);
    ~edititem();

private slots:
    void on_pushButton_2_clicked();
    void on_horizontalSlider_time_valueChanged(int value);
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    int i;
    int time;
    mvs2 item_data;
    Ui::edititem *ui;
};

#endif // EDITITEM_H
