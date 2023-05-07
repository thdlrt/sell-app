#ifndef MONEYFINISH_H
#define MONEYFINISH_H

#include <QDialog>

namespace Ui {
class moneyfinish;
}

class moneyfinish : public QDialog
{
    Q_OBJECT

public:
    explicit moneyfinish(QWidget *parent = nullptr);
    ~moneyfinish();

private slots:
    void on_pushButton_clicked();

private:
    Ui::moneyfinish *ui;
};

#endif // MONEYFINISH_H
