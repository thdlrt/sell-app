#include "addmoney.h"
#include "ui_addmoney.h"
#include<QMessageBox>
#include"moneycase.h"
#include"buyfinish.h"
addmoney::addmoney(int id,mvs4 buy_data2,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addmoney)
{
    this->id=id;
    ui->setupUi(this);
    setFixedSize(300,200);
   user_data=readdata();
   buy_data=readdata4();
   this->buy_data2=buy_data2;
   //qDebug()<<id<<buy_data2.size();
   ui->lineEdit_from->setText(buy_data2[id].unitPrice);
   ui->lineEdit_from->setReadOnly(true);
   ui->lineEdit_leftmoney->setText(user_data[buy_data2[id].buyerID.mid(1,3).toInt()].balance);
    ui->lineEdit_leftmoney->setReadOnly(true);
}

addmoney::~addmoney()
{
    delete ui;
}

void addmoney::on_pushButton_2_clicked()
{
    this->close();
}


void addmoney::on_pushButton_clicked()
{
    int u_id=buy_data2[id].buyerID.mid(1,3).toInt();
    QString num=ui->lineEdit_after->text();
    if(check3(num)||num.size()>12)
    {
        QMessageBox::warning(this,"错误","请输入正确的金额，应仅包含数字,且最多为一位小数");
        ui->lineEdit_after->setText("");
        return;
    }
    int t=num.indexOf(".");
    double money=num.toDouble();
    if(money<=0||(t!=-1&&t<num.size()-2))
    {
        QMessageBox::warning(this,"错误","请输入正确的金额，应仅包含数字,且最多为一位小数");
        ui->lineEdit_after->setText("");
        return;
    }
    double temp=buy_data2[id].unitPrice.toDouble();
    if(money>user_data[u_id].balance.toDouble()+temp)
    {
        QMessageBox::warning(this,"错误","余额不足，请先充值");
        moneycase a;
        a.exec();
        double num=a.getmoney();
        user_data[u_id].balance=QString::number(num+user_data[u_id].balance.toDouble());
        savedata(user_data);
        ui->lineEdit_leftmoney->setText(user_data[u_id].balance);
        return;
    }
    if(money<=buy_data2[id].unitPrice.toDouble())
    {
         QMessageBox::warning(this,"错误","出价应高于原价钱！");
        ui->lineEdit_after->setText("");
        return;
    }
    //qDebug()<<id<<buy_data2[id].buyID.mid(1,3).toInt()-1;
    buy_data[buy_data2[id].buyID.mid(1,3).toInt()-1].unitPrice=QString::number(money);
    savedata4(buy_data);
    user_data[u_id].balance=QString::number(user_data[u_id].balance.toDouble()-money+temp);
    savedata(user_data);
    buyfinish a;
    a.exec();
    this->close();
}


void addmoney::on_pushButton_3_clicked()
{
    int u_id=buy_data2[id].buyerID.mid(1,3).toInt();
    moneycase a;
    a.exec();
    double num=a.getmoney();
    user_data[u_id].balance=QString::number(num+user_data[u_id].balance.toDouble());
    savedata(user_data);
    ui->lineEdit_leftmoney->setText(user_data[u_id].balance);
}


void addmoney::on_pushButton_4_clicked()
{
    mvs4 temp;
    user_data[buy_data2[id].buyerID.mid(1,3).toInt()].balance=QString::number(user_data[buy_data2[id].buyerID.mid(1,3).toInt()].balance.toDouble()+buy_data2[id].unitPrice.toDouble());
    savedata(user_data);
    for(int i=0;i<buy_data.size();i++)
    {
        if(buy_data2[id].buyID!=buy_data[i].buyID)
            temp.add(buy_data[i].buyID,buy_data[i].commodityID,buy_data[i].unitPrice,buy_data[i].buyerID,buy_data[i].time);
    }
    savedata4(temp);
    this->close();
}

