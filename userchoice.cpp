#include "userchoice.h"
#include "ui_userchoice.h"

userchoice::userchoice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::userchoice)
{
    ui->setupUi(this);
    setFixedSize(190,80);
}

userchoice::~userchoice()
{
    delete ui;
}
int userchoice::getstate()
{
    return state;
}

void userchoice::on_pushButton_clicked()
{
    state=0;
    this->close();
}


void userchoice::on_pushButton_2_clicked()
{
    state=1;
     this->close();
}


