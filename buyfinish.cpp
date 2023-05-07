#include "buyfinish.h"
#include "ui_buyfinish.h"
#include<QMovie>
#include"getpath.h"
buyfinish::buyfinish(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::buyfinish)
{
    ui->setupUi(this);
    setFixedSize(200,150);
    ui->label->setFixedSize(200,112);
    QMovie* movie=new QMovie(QString::fromStdString(getCurrentPath())+"/resource/buyfinish.gif");
   movie->setScaledSize(ui->label->size());
    ui->label->setMovie(movie);
    movie->start();
}

buyfinish::~buyfinish()
{
    delete ui;
}

void buyfinish::on_pushButton_clicked()
{
    this->close();
}

