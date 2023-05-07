#ifndef USERCHOICE_H
#define USERCHOICE_H

#include <QDialog>

namespace Ui {
class userchoice;
}

class userchoice : public QDialog
{
    Q_OBJECT

public:
    explicit userchoice(QWidget *parent = nullptr);
    ~userchoice();
    int getstate();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::userchoice *ui;
        int state;
};

#endif // USERCHOICE_H
