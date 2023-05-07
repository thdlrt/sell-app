#include "fale.h"
#include "ui_fale.h"
#include"getpath.h"
fale::fale(QString s,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fale)
{
    ui->setupUi(this);
    ui->label->setFixedSize(300,170);
    QPixmap pix(QString::fromStdString(getCurrentPath())+"/resource/false.png");
    pix=pix.scaled(ui->label->size());
    ui->label->setPixmap(pix);
    setFixedSize(300,190);
    ui->lineEdit->setReadOnly(1);
    ui->lineEdit->setText(s);
}

fale::~fale()
{
    delete ui;
}

void fale::on_pushButton_clicked()
{
    this->close();
}

