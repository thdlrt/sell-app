#include "setlog.h"
#include "ui_setlog.h"

setlog::setlog(mvs t,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setlog)
{
    userdata=t;
    setFixedSize(330,210);
    ui->setupUi(this);
    ui->set_password2->setEchoMode(QLineEdit::Password);
    ui->set_password3->setEchoMode(QLineEdit::Password);
    this->exec();
}

setlog::~setlog()
{
    delete ui;
}

void setlog::on_pushButton_2_clicked()
{
    this->close();
}


void setlog::on_pushButton_clicked()
{
    QString set_name,set_password,set_password2;
    set_name=ui->set_name->text();
    set_password=ui->set_password2->text();
    set_password2=ui->set_password3->text();
    if(set_password!=set_password2)
    {
        ui->set_password2->setText("");
        ui->set_password3->setText("");
        QMessageBox::warning(this,"错误","两次输入密码不一致");
        return;
    }
    if(checkname(set_name))
    {
        ui->set_name->setText("");
        ui->set_password2->setText("");
        ui->set_password3->setText("");
        QMessageBox::warning(this,"错误","用户名已存在");
        return;
    }
    if(set_name.size()<1||set_name.size()>10||check1(set_name))
    {
        ui->set_name->setText("");
        ui->set_password2->setText("");
        ui->set_password3->setText("");
        QMessageBox::warning(this,"错误","用户名不能超过10个字符，且只能包含英文字母");
        return;
    }
    if(set_password.size()<8||set_password.size()>20||check2(set_password))
    {
        ui->set_name->setText("");
        ui->set_password2->setText("");
        ui->set_password3->setText("");
        QMessageBox::warning(this,"错误","密码不能超过20个字符，不短于8个字符，且只能包含小写英文字母和数字");
        return;
    }
    QMessageBox::information(this,"成功","注册成功，请返回登录");

    int id_num=userdata.size()-1;
    id_num++;
    QString sum=QString("%1").arg(id_num,3,10,QLatin1Char('0'));
    sum='U'+sum;
    userdata.add(sum,set_name,turn(set_password),"","","","1");
    savedata(userdata);
        //qDebug()<<userdata.size()<<userdata[userdata.size()-1].userID;
    this->close();
}
 bool setlog::checkname(QString s)
 {
     for(int i=1;i<userdata.size();i++)
     {
         if(s==userdata[i].username)
             return true;
     }
     return false;
 }
 mvs setlog::userdata_get()
 {
     return userdata;
 }
