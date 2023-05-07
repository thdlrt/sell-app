#include "complete.h"
#include "ui_complete.h"
#include<QPalette>
complete::complete(order order_data,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::complete)
{
    ui->setupUi(this);
    ui->label_7->setFixedSize(340,350);
    QPalette label_palette;
    label_palette.setColor(QPalette::WindowText,QColor(0,0,0));
    ui->label_7->setAutoFillBackground(true);
    ui->label_7->setPalette(label_palette);
    ui->label_8->setFixedSize(550,350);
    QPixmap pix(QString::fromStdString(getCurrentPath())+"/resource/complete.png");
    pix=pix.scaled(ui->label_8->size());
    ui->label_8->setPixmap(pix);
    setFixedSize(550,350);
    ui->lineEdit_bid->setText(order_data.buyerID);
    ui->lineEdit_cid->setText(order_data.commodityID);
    ui->lineEdit_num->setText(order_data.number);
    ui->lineEdit_oid->setText(order_data.orderID);
    ui->lineEdit_price->setText(order_data.unitPrice);
    ui->lineEdit_sid->setText(order_data.sellerID);
    ui->lineEdit_time->setText(order_data.date);
    ui->lineEdit_bid->setReadOnly(1);
    ui->lineEdit_cid->setReadOnly(1);
    ui->lineEdit_num->setReadOnly(1);
    ui->lineEdit_oid->setReadOnly(1);
    ui->lineEdit_price->setReadOnly(1);
    ui->lineEdit_sid->setReadOnly(1);
    ui->lineEdit_time->setReadOnly(1);
}

complete::~complete()
{
    delete ui;
}

void complete::on_pushButton_clicked()
{
    this->close();
}

