#ifndef COMPLETE_H
#define COMPLETE_H
#include"mvs3.h"
#include <QDialog>

namespace Ui {
class complete;
}

class complete : public QDialog
{
    Q_OBJECT

public:
    explicit complete(order order_data,QWidget *parent = nullptr);
    ~complete();

private slots:
    void on_pushButton_clicked();

private:
    Ui::complete *ui;
};

#endif // COMPLETE_H
