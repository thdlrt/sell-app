#ifndef MONEYCASE_H
#define MONEYCASE_H

#include <QDialog>

namespace Ui {
class moneycase;
}

class moneycase : public QDialog
{
    Q_OBJECT

public:
    explicit moneycase(QWidget *parent = nullptr);
    ~moneycase();
    double getmoney();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::moneycase *ui;
    double money=0;
};

#endif // MONEYCASE_H
