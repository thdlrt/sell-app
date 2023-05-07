#include "moneycase.h"
#include "ui_moneycase.h"
#include"mvs.h"
#include<QMessageBox>
#include"moneyfinish.h"
moneycase::moneycase(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::moneycase)
{
    ui->setupUi(this);
    setFixedSize(179,80);
}
double moneycase::getmoney()
{
    return money;
}
moneycase::~moneycase()
{
    delete ui;
}

void moneycase::on_pushButton_clicked()
{
    this->close();
}


void moneycase::on_pushButton_2_clicked()
{
    QString num=ui->lineEdit->text();
    if(check3(num)||num.size()>12)
    {
        QMessageBox::warning(this,"错误","请输入正确的充值金额，应仅包含数字,且最多为一位小数");
        ui->lineEdit->setText("");
        return;
    }
    int t=num.indexOf(".");
    double sum=num.toDouble();
    if(sum<=0||(t!=-1&&t<num.size()-2))
    {
        QMessageBox::warning(this,"错误","请输入正确的充值金额，应仅包含数字,且最多为一位小数");
        ui->lineEdit->setText("");
        return;
    }
    else
    {
        moneyfinish a;
        a.exec();
        money=sum;
        this->close();
    }
}

