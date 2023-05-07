#include "moneyfinish.h"
#include "ui_moneyfinish.h"
#include<QMovie>
#include"getpath.h"
moneyfinish::moneyfinish(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::moneyfinish)
{
    ui->setupUi(this);
    setFixedSize(200,150);
    ui->label->setFixedSize(200,120);
    QMovie* movie=new QMovie(QString::fromStdString(getCurrentPath())+"/resource/setmoney.gif");
   movie->setScaledSize(ui->label->size());
    ui->label->setMovie(movie);
    movie->start();

}

moneyfinish::~moneyfinish()
{
    delete ui;
}

void moneyfinish::on_pushButton_clicked()
{
    this->close();
}

