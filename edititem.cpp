#include "edititem.h"
#include "ui_edititem.h"
#include"mvs.h"
#include<QPalette>
#include<QDateTime>
#include<QMessageBox>
edititem::edititem(int i,mvs2 item_data,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edititem)
{
    this->i=i;
    this->item_data=item_data;
    ui->setupUi(this);
    ui->label->setFixedSize(600,375);
    ui->label_7->setFixedSize(300,375);
    QPalette label_palette;
    label_palette.setColor(QPalette::WindowText,QColor(0,0,0));
    ui->label_7->setAutoFillBackground(true);
    ui->label_7->setPalette(label_palette);
    QPixmap pix(QString::fromStdString(getCurrentPath())+"/resource/edit.png");
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
    int h1=item_data[i].addedDate.mid(11,2).toInt(),m1=item_data[i].addedDate.mid(14,2).toInt(),
         h2=item_data[i].time.mid(11,2).toInt(),m2=item_data[i].time.mid(14,2).toInt();
    time=(h2-h1)*60+m2-m1;
    ui->horizontalSlider_time->setValue(time);
    ui->lineEdit_name->setText(item_data[i].commodityName);
    ui->lineEdit_price->setText(item_data[i].price);
    ui->plainTextEdit_data->setPlainText(item_data[i].description);
    ui->spinBox_num->setValue(item_data[i].number.toInt());
}

edititem::~edititem()
{
    delete ui;
}

void edititem::on_pushButton_2_clicked()
{
    this->close();
}

void edititem::on_horizontalSlider_time_valueChanged(int value)
{
    time=value;
    ui->label_timenum->setText(QString::number(value));
}

void edititem::on_pushButton_3_clicked()
{
    this->close();
    item_data[i].state="0";
    savedata2(item_data);
}


void edititem::on_pushButton_clicked()
{
    time=ui->horizontalSlider_time->value();
    item_data[i].commodityName=ui->lineEdit_name->text();
    item_data[i].price=ui->lineEdit_price->text();
    item_data[i].number=ui->spinBox_num->text();
    item_data[i].description=ui->plainTextEdit_data->toPlainText();
    if( item_data[i].number.toInt()==0)
    {
        QMessageBox::warning(this,"错误","商品数目不能为0");
        return;
    }
    if(time==0)
    {
        QMessageBox::warning(this,"错误","时间不能为0");
        return;
    }
    if(check6(item_data[i].commodityName)||item_data[i].commodityName.size()<0||item_data[i].commodityName.size()>20)
    {
        QMessageBox::warning(this,"错误","商品名称应由字母及数字组成，且不超过20个字符");
        ui->lineEdit_name->setText("");
        return;
    }
    int t=item_data[i].price.indexOf(".");
    if(check3(item_data[i].price)||item_data[i].price.toDouble()<0||(t!=-1&&t<item_data[i].price.size()-2))
    {
        QMessageBox::warning(this,"错误","价格应大于零，且最多为一位小数");
        ui->lineEdit_price->setText("");
        return;
    }
    if(check5(item_data[i].description)||item_data[i].description.size()<1||item_data[i].description.size()>200)
    {
        QMessageBox::warning(this,"错误","商品的描述信息，应不超过200个英文字符");
        ui->plainTextEdit_data->setPlainText("");
        return;
    }
        auto result=QMessageBox::question(this,"注意","修改后商品将重新上架，重新进行拍卖(原有的竞拍订单不会因此取消)！",QMessageBox::Yes|QMessageBox::Cancel);
        if(result==QMessageBox::Yes)
            ;
        else
            return;
    item_data[i].addedDate=QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm");
    int h=item_data[i].addedDate.mid(11,2).toInt(),m=item_data[i].addedDate.mid(14,2).toInt();
    m+=time;
    if(m>=60)
    {
        m-=60;
        h++;
    }
   item_data[i].time=item_data[i].addedDate.mid(0,11)+QString("%1").arg(h,2,10,QLatin1Char('0'))+":"+QString("%1").arg(m,2,10,QLatin1Char('0'));
    savedata2(item_data);
    this->close();
}

