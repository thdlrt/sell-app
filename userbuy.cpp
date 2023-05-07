#include "userbuy.h"
#include"mvs4.h"
#include "ui_userbuy.h"
#include"moneycase.h"
#include<QPalette>
#include<QDateTime>
#include<QMessageBox>
#include<QDateTime>
userbuy::userbuy(int c_id,int u_id,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::userbuy)
{
    this->c_id=c_id;
    this->u_id=u_id;
    user_data=readdata();
    item_data=readdata2();
    ui->setupUi(this);
    ui->label->setFixedSize(600,375);
    ui->label_7->setFixedSize(400,375);
    QPalette label_palette;
    label_palette.setColor(QPalette::WindowText,QColor(0,0,0));
    ui->label_7->setAutoFillBackground(true);
    ui->label_7->setPalette(label_palette);
    QPixmap pix(QString::fromStdString(getCurrentPath())+"/resource/buy.png");
    pix=pix.scaled(ui->label->size(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
    ui->label->setPixmap(pix);
    setFixedSize(600,375);
    ui->lineEdit_statr->setText(item_data[c_id-1].addedDate);
    ui->lineEdit_statr->setReadOnly(true);
    ui->lineEdit_end->setText(item_data[c_id-1].time);
    ui->lineEdit_end->setReadOnly(true);
    ui->lineEdit_name->setText(item_data[c_id-1].commodityName);
    ui->lineEdit_name->setReadOnly(true);
    ui->lineEdit_price->setText(item_data[c_id-1].price);
    ui->lineEdit_price->setReadOnly(true);
    ui->lineEdit_seller->setText(item_data[c_id-1].sellerID);
    ui->lineEdit_seller->setReadOnly(true);
    ui->lineEdit_leftmoney->setText(user_data[u_id].balance);
    ui->lineEdit_leftmoney->setReadOnly(true);
    ui->plainTextEdit_data->setPlainText(item_data[c_id-1].description);
    ui->plainTextEdit_data->setReadOnly(true);

}

userbuy::~userbuy()
{
    delete ui;
}

void userbuy::on_pushButton_3_clicked()
{
    this->close();
}


void userbuy::on_pushButton_clicked()
{
    moneycase a;
    a.exec();
    double num=a.getmoney();
    user_data[u_id].balance=QString::number(num+user_data[u_id].balance.toDouble());
    savedata(user_data);
    ui->lineEdit_leftmoney->setText(user_data[u_id].balance);
}


void userbuy::on_pushButton_2_clicked()
{
    QString num=ui->lineEdit_buy->text();
    if(check3(num)||num.size()>12)
    {
        QMessageBox::warning(this,"错误","请输入正确的金额，应仅包含数字,且最多为一位小数");
        ui->lineEdit_buy->setText("");
        return;
    }
     QString t2=QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm");
    if(check8(item_data[c_id-1].time,t2))
    {
        QMessageBox::warning(this,"错误","拍卖已经截止");
        this->close();
        return;
    }
    int t=num.indexOf(".");
    double money=num.toDouble();
    if(money<=0||(t!=-1&&t<num.size()-2))
    {
        QMessageBox::warning(this,"错误","请输入正确的金额，应仅包含数字,且最多为一位小数");
        ui->lineEdit_buy->setText("");
        return;
    }
    if(money>user_data[u_id].balance.toDouble())
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
    if(money<item_data[c_id-1].price.toDouble())
    {
         QMessageBox::warning(this,"错误","出价不能低于起拍价！");
        ui->lineEdit_buy->setText("");
        return;
    }

    auto result=QMessageBox::question(this,"拍卖须知","将在拍卖结束时根据出价排名决定是否购买成功，若竞拍失败将自动退款！",QMessageBox::Yes|QMessageBox::Cancel);
    if(result==QMessageBox::Yes)
        ;
    else
        return;
    mvs4 buy_data=readdata4();
    int id_num=buy_data.size();
    id_num++;
    QString sum=QString("%1").arg(id_num,3,10,QLatin1Char('0'));
    sum='B'+sum;
    buy_data.add(sum,item_data[c_id-1].commodityID,QString::number(money),user_data[u_id].userID,QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm"));
    savedata4(buy_data);
    user_data[u_id].balance=QString::number(user_data[u_id].balance.toDouble()-money);
    savedata(user_data);
    buyfinish a;
    a.exec();
    this->close();
}

