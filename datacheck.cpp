#include "datacheck.h"
#include "ui_datacheck.h"
#include "moneycase.h"
#include"mvs.h"
#include<QMessageBox>
datacheck::datacheck(int id,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::datacheck)
{
    ui->setupUi(this);
    setFixedSize(400,400);
    ui->label_money->setFixedSize(110,66);
    QPixmap pix(QString::fromStdString(getCurrentPath())+"/resource/money.png");
    pix=pix.scaled(ui->label_money->size(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
    ui->label_money->setPixmap(pix);
    user_data=readdata();
    this->id=id;
    ui->lineEdit_balence->setText(user_data[id].balance);
    ui->lineEdit_phone->setText(user_data[id].phoneNumber);
    ui->lineEdit_username->setText(user_data[id].username);
     ui->plainTextEdit->setPlainText(user_data[id].address);
}

datacheck::~datacheck()
{
    delete ui;
}

void datacheck::on_pushButton_2_clicked()
{
        savedata(user_data);
    this->close();
}


void datacheck::on_pushButton_clicked()
{
    moneycase a;
    a.exec();
    double num=a.getmoney();
   double temp=user_data[id].balance.toDouble();
    double sum=temp+num;
    user_data[id].balance=QString::number(sum);
    ui->lineEdit_balence->setText(user_data[id].balance);
}


void datacheck::on_pushButton_3_clicked()
{
    if(ui->lineEdit_username->text()!=user_data[id].username&&checkname(ui->lineEdit_username->text()))
    {
       ui->lineEdit_username->setText("");
        QMessageBox::warning(this,"错误","用户名已存在");
        return;
    }
    if(ui->lineEdit_username->text().size()<1||ui->lineEdit_username->text().size()>10||check1(ui->lineEdit_username->text()))
    {
       ui->lineEdit_username->setText("");
        QMessageBox::warning(this,"错误","用户名不能超过10个字符，且只能包含英文字母");
        return;
    }
    if(ui->lineEdit_password->text().size()>0&&(ui->lineEdit_password->text().size()<8||ui->lineEdit_password->text().size()>20||check2(ui->lineEdit_password->text())))
    {
        ui->lineEdit_password->setText("");
        QMessageBox::warning(this,"错误","密码不能超过20个字符，不短于8个字符，且只能包含小写英文字母和数字");
        return;
    }
    if(ui->lineEdit_phone->text().size()<1||ui->lineEdit_phone->text().size()>20||check4(ui->lineEdit_phone->text()))
    {
       ui->lineEdit_phone->setText("");
        QMessageBox::warning(this,"错误","电话号码不能超过20个字符，仅由数字组成");
        return;
    }
    if(ui->plainTextEdit->toPlainText().size()<1||ui->plainTextEdit->toPlainText().size()>40||check5(ui->plainTextEdit->toPlainText()))
    {
       ui->plainTextEdit->setPlainText("");
        QMessageBox::warning(this,"错误","地址不能超过40个字符，仅可包含字母和空格");
        return;
    }
    user_data[id].address=ui->plainTextEdit->toPlainText();
    if(ui->lineEdit_password->text().size()>0)
    user_data[id].password=turn(ui->lineEdit_password->text());
     user_data[id].phoneNumber=ui->lineEdit_phone->text();
     user_data[id].username=ui->lineEdit_username->text();
         savedata(user_data);
    this->close();
        QMessageBox::information(this,"成功","修改成功");
}
bool datacheck::checkname(QString s)
{
    for(int i=1;i<user_data.size();i++)
    {
        if(s==user_data[i].username)
            return true;
    }
    return false;
}
