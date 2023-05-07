#include "newitem.h"
#include "ui_newitem.h"
#include"mvs.h"
#include<QPalette>
#include<QMessageBox>
#include<QDateTime>
#include<QDebug>
newitem::newitem(QString id,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newitem)
{
    ui->setupUi(this);
    this->id=id;
    ui->label->setFixedSize(600,375);
    ui->label_7->setFixedSize(500,230);
    QPalette label_palette;
    label_palette.setColor(QPalette::WindowText,QColor(0,0,0));
    ui->label_7->setAutoFillBackground(true);
    ui->label_7->setPalette(label_palette);
    QPixmap pix(QString::fromStdString(getCurrentPath())+"/resource/additem.png");
    pix=pix.scaled(ui->label->size(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
    ui->label->setPixmap(pix);
    setFixedSize(600,375);
    QFont font ( "Microsoft YaHei", 10, 500);
    ui->label_2->setFont(font);
    ui->label_3->setFont(font);
    ui->label_4->setFont(font);
    ui->label_5->setFont(font);
    ui->label_6->setFont(font);
         ui->label_timenum->setText(QString::number(ui->spinBox_num->value()));
}

newitem::~newitem()
{
    delete ui;
}

void newitem::on_pushButton_2_clicked()
{
    this->close();
}


void newitem::on_pushButton_clicked()
{
    time=ui->horizontalSlider_time->value();
    name=ui->lineEdit_name->text();
    price=ui->lineEdit_price->text();
    num=ui->spinBox_num->text().toInt();
    data=ui->plainTextEdit_data->toPlainText();
    if(num==0)
    {
        QMessageBox::warning(this,"错误","商品数目不能为0");
        return;
    }
    if(time==0)
    {
        QMessageBox::warning(this,"错误","时间不能为0");
        return;
    }
    if(check6(name)||name.size()<0||name.size()>20)
    {
        QMessageBox::warning(this,"错误","商品名称应由字母及数字组成，且不超过20个字符");
        ui->lineEdit_name->setText("");
        return;
    }
    int t=price.indexOf(".");
    if(check3(price)||price.toDouble()<0||(t!=-1&&t<price.size()-2))
    {
        QMessageBox::warning(this,"错误","价格应大于零，且最多为一位小数");
        ui->lineEdit_price->setText("");
        return;
    }
    if(check5(data)||data.size()<1||data.size()>200)
    {
        QMessageBox::warning(this,"错误","商品的描述信息，应不超过200个英文字符");
        ui->plainTextEdit_data->setPlainText("");
        return;
    }
    mvs2 item_data=readdata2();
    int n=item_data.size()+1;
    QString sum=QString("%1").arg(n,3,10,QLatin1Char('0'));
    sum='M'+sum;
    QString t2=QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm");
    int h=t2.mid(11,2).toInt(),m=t2.mid(14,2).toInt();
    m+=time;
    if(m>=60)
    {
        m-=60;
        h++;
    }
    QString sum2=t2.mid(0,11)+QString("%1").arg(h,2,10,QLatin1Char('0'))+":"+QString("%1").arg(m,2,10,QLatin1Char('0'));
    item_data.add(sum,name,price,QString::number(num),data,id,t2,"1",sum2);
    savedata2(item_data);
        QMessageBox::information(this,"完成","发布成功");
    this->close();
}



void newitem::on_horizontalSlider_time_valueChanged(int value)
{
    time=value;
    ui->label_timenum->setText(QString::number(value));
}

