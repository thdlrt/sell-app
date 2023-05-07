#ifndef DATACHECK_H
#define DATACHECK_H

#include <QDialog>
#include"mvs.h"
namespace Ui {
class datacheck;
}

class datacheck : public QDialog
{
    Q_OBJECT

public:
    explicit datacheck(int id,QWidget *parent = nullptr);
    bool checkname(QString s);
    ~datacheck();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::datacheck *ui;
    mvs user_data;
    int id=0;
};

#endif // DATACHECK_H
