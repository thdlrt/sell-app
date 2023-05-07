#ifndef FALE_H
#define FALE_H

#include <QDialog>

namespace Ui {
class fale;
}

class fale : public QDialog
{
    Q_OBJECT

public:
    explicit fale(QString s,QWidget *parent = nullptr);
    ~fale();

private slots:
    void on_pushButton_clicked();

private:
    Ui::fale *ui;
};

#endif // FALE_H
