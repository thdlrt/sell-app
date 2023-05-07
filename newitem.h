#ifndef NEWITEM_H
#define NEWITEM_H

#include <QDialog>
#include<mvs2.h>
namespace Ui {
class newitem;
}

class newitem : public QDialog
{
    Q_OBJECT

public:
    explicit newitem(QString id,QWidget *parent = nullptr);
    ~newitem();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();


    void on_horizontalSlider_time_valueChanged(int value);

private:
    Ui::newitem *ui;
    QString name;
    QString price;
    int num;
    int time;
    QString id;
    QString data;
};

#endif // NEWITEM_H
