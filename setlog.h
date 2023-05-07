#ifndef SETLOG_H
#define SETLOG_H

#include <QDialog>
#include "mvs.h"
#include<QMessageBox>
namespace Ui {
class setlog;
}

class setlog : public QDialog
{
    Q_OBJECT

public:
    explicit setlog(mvs t,QWidget *parent = nullptr);
    mvs userdata_get();
    ~setlog();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::setlog *ui;
    mvs userdata;
    bool checkname(QString s);
};

#endif // SETLOG_H
