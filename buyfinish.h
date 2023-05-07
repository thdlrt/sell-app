#ifndef BUYFINISH_H
#define BUYFINISH_H

#include <QDialog>

namespace Ui {
class buyfinish;
}

class buyfinish : public QDialog
{
    Q_OBJECT

public:
    explicit buyfinish(QWidget *parent = nullptr);
    ~buyfinish();

private slots:
    void on_pushButton_clicked();

private:
    Ui::buyfinish *ui;
};

#endif // BUYFINISH_H
