#include "usercase.h"
#include "ui_usercase.h"
#include"salecase.h"
#include"datacheck.h"
#include<QPalette>
#include<QTableWidget>
#include<QToolTip>
#include<QMessageBox>
#include"userbuy.h"
#include"moneycase.h"
#include"addmoney.h"
usercase::usercase(user data,QWidget *parent) :
   QDialog(parent),
    ui(new Ui::usercase)
{
    buy_data=readdata4_1(data.userID);
    ui->setupUi(this);
    order_data=readdata3_2(data.userID);
    this->upcase3();
    item_data=readdata2();
    item_data_show=readdata2_2();
    this->upcase2();
    this->upcase4();
    setFixedSize(800,600);
    ui->label->setFixedSize(800,200);
    QPixmap pix(QString::fromStdString(getCurrentPath())+"/resource/user.png");
    pix=pix.scaled(ui->label->size());
    ui->label->setPixmap(pix);
    ui->label_name->setText("用户："+data.username);
    QPalette pe;
    pe.setColor(QPalette::WindowText,Qt::white);
    ui->label_name->setPalette(pe);
    id=data.userID.mid(1,3).toInt();
//    if(type)
//    {
//        userchoice uc;
//        uc.exec();
//        state=uc.getstate();
//    }
//    else
//    {
//        state=0;
//    }
    this->data=data;
}

usercase::~usercase()
{
    delete ui;
}

void usercase::on_pushButton_clicked()
{
    this->close();
}


void usercase::on_pushButton_3_clicked()
{
    int num=data.userID.mid(1,3).toInt();
    datacheck a(num);
    a.exec();
    data=updatedata(id);
    ui->label_name->setText("用户："+data.username);
}


void usercase::on_pushButton_2_clicked()
{
    this->close();
    state2=1;
}

void usercase::slotCellEnter3(int r, int c) {
    QTableWidgetItem *item = ui->tableWidget_3->item(r, c);
    if (item == nullptr) {
        return;
    }
    QToolTip::showText(QCursor::pos(), item->text());
}
void usercase::upcase3()
{
    ui->tableWidget_3->setAlternatingRowColors(1);
    ui->tableWidget_3->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_3->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_3->clearContents();
    ui->tableWidget_3->setRowCount(order_data.size());
    ui->tableWidget_3->resizeRowsToContents();
    ui->tableWidget_3->setMouseTracking(true);
     connect(ui->tableWidget_3, SIGNAL(cellEntered(int, int)), this, SLOT(slotCellEnter3(int , int )));
    for(int i=0;i<order_data.size();i++)
    {
        QTableWidgetItem*item;
        item=new QTableWidgetItem(order_data[i].orderID);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_3->setItem(i,0,item);
        item=new QTableWidgetItem(order_data[i].commodityID);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_3->setItem(i,1,item);
        item=new QTableWidgetItem(order_data[i].unitPrice);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_3->setItem(i,2,item);
        item=new QTableWidgetItem(order_data[i].number);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_3->setItem(i,3,item);
        item=new QTableWidgetItem(order_data[i].date);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_3->setItem(i,4,item);
        item=new QTableWidgetItem(order_data[i].sellerID);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_3->setItem(i,5,item);
        item=new QTableWidgetItem(order_data[i].buyerID);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_3->setItem(i,6,item);
    }
}
void usercase::upcase4()
{
    ui->tableWidget_4->setAlternatingRowColors(1);
    ui->tableWidget_4->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_4->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_4->clearContents();
    ui->tableWidget_4->setRowCount(buy_data.size());
    ui->tableWidget_4->resizeRowsToContents();
    ui->tableWidget_4->setColumnWidth(6,40);
    ui->tableWidget_4->setMouseTracking(true);
     connect(ui->tableWidget_4, SIGNAL(cellEntered(int, int)), this, SLOT(slotCellEnter4(int , int )));
    for(int i=0;i<buy_data.size();i++)
    {
        QPushButton*button=new QPushButton(this);
        button->setText("编辑");
        connect(button,SIGNAL(clicked()),this,SLOT(report4()));
        ui->tableWidget_4->setCellWidget(i,6,button);
        QTableWidgetItem*item;
        item=new QTableWidgetItem(buy_data[i].buyID);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_4->setItem(i,0,item);
        item=new QTableWidgetItem(buy_data[i].commodityID);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_4->setItem(i,1,item);
        //qDebug()<<item_data[buy_data[i].commodityID.mid(1,3).toInt()-1].commodityName;
        item=new QTableWidgetItem(item_data[buy_data[i].commodityID.mid(1,3).toInt()-1].commodityName);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_4->setItem(i,2,item);
        item=new QTableWidgetItem(buy_data[i].unitPrice);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_4->setItem(i,3,item);
        item=new QTableWidgetItem(item_data[buy_data[i].commodityID.mid(1,3).toInt()-1].time);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_4->setItem(i,4,item);
        item=new QTableWidgetItem(buy_data[i].time);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_4->setItem(i,5,item);
    }
}
void usercase::upcase2(int i)
{
    switch(i)
    {
    case 1:
        item_data_show=turn1(item_data_show);
        break;
    case 2:
        item_data_show=turn2(item_data_show);
        break;
    case 3:
        item_data_show=turn3(item_data_show);
        break;
    case 4:
        item_data_show=turn4(item_data_show);
        break;
    case 5:
        item_data_show=turn5(item_data_show);
        break;
    }
    ui->tableWidget_2->setAlternatingRowColors(1);
    ui->tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_2->clearContents();
    ui->tableWidget_2->setRowCount(item_data_show.size());
    ui->tableWidget_2->setColumnWidth(9,40);
    ui->tableWidget_2->resizeRowsToContents();
    ui->tableWidget_2->setMouseTracking(true);
     connect(ui->tableWidget_2, SIGNAL(cellEntered(int, int)), this, SLOT(slotCellEnter2(int , int )));
    for(int i=0;i<item_data_show.size();i++)
    {
        QPushButton*button=new QPushButton(this);
        button->setText("竞拍");
        connect(button,SIGNAL(clicked()),this,SLOT(report2()));
        ui->tableWidget_2->setCellWidget(i,9,button);
        QTableWidgetItem*item;
        item=new QTableWidgetItem(item_data_show[i].commodityID);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_2->setItem(i,0,item);
        item=new QTableWidgetItem(item_data_show[i].commodityName);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_2->setItem(i,1,item);
        item=new QTableWidgetItem(item_data_show[i].price);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_2->setItem(i,2,item);
        item=new QTableWidgetItem(item_data_show[i].number);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_2->setItem(i,3,item);
        item=new QTableWidgetItem(item_data_show[i].description);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_2->setItem(i,4,item);
        item=new QTableWidgetItem(item_data_show[i].sellerID);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_2->setItem(i,5,item);
        item=new QTableWidgetItem(item_data_show[i].addedDate);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_2->setItem(i,6,item);
        item=new QTableWidgetItem(item_data_show[i].time);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_2->setItem(i,7,item);
        if(item_data_show[i].state=='1')
            item=new QTableWidgetItem("正常");
        else
            item=new QTableWidgetItem("下架");
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_2->setItem(i,8,item);
    }
}
void usercase::report2()
{
    QPushButton*a=qobject_cast<QPushButton*>(sender());
    if(a==NULL)
        return;
    QModelIndex q=ui->tableWidget_2->indexAt(QPoint(a->frameGeometry().x(),a->frameGeometry().y()));
    int i=q.row();
    if(data.phoneNumber==""||data.address=="")
    {
        QMessageBox::warning(this,"错误","请先完善个人信息再进行购买");
        int num=data.userID.mid(1,3).toInt();
        datacheck a(num);
        a.exec();
        data=updatedata(id);
        ui->label_name->setText("用户："+data.username);
        return;
    }
    if(check7(item_data_show[i].commodityID.mid(1,3).toInt(),id))
    {
        QMessageBox::warning(this,"错误","已经参与竞拍，请不要重复参与");
        return;
    }
    if(item_data_show[i].sellerID==data.userID)
    {
        QMessageBox::warning(this,"错误","不能购买自己发布的商品");
        return;
    }
    if(item_data_show[i].state=="0")
    {
        QMessageBox::warning(this,"错误","该商品已下架");
    }
    else
    {
        //qDebug()<<item_data[i].commodityID.mid(1,3).toInt()<<id;
        userbuy a(item_data_show[i].commodityID.mid(1,3).toInt(),id);
        a.exec();
    }
    item_data_show=readdata2_2();
    item_data=readdata2();
    this->upcase2(state);
    buy_data=readdata4_1(data.userID);
    this->upcase4();
    ui->lineEdit->setText("");
}
void usercase::report4()
{
    QPushButton*a=qobject_cast<QPushButton*>(sender());
    if(a==NULL)
        return;
    QModelIndex q=ui->tableWidget_4->indexAt(QPoint(a->frameGeometry().x(),a->frameGeometry().y()));
    int i=q.row();
     addmoney b(i,buy_data);
     b.exec();
     buy_data=readdata4_1(data.userID);

    this->upcase4();
}
void usercase::slotCellEnter2(int r, int c) {
    QTableWidgetItem *item = ui->tableWidget_2->item(r, c);
    if (item == nullptr) {
        return;
    }
    QToolTip::showText(QCursor::pos(), item->text());
}
void usercase::slotCellEnter4(int r, int c) {
    QTableWidgetItem *item = ui->tableWidget_4->item(r, c);
    if (item == nullptr) {
        return;
    }
    QToolTip::showText(QCursor::pos(), item->text());
}
void usercase::on_pushButton_4_clicked()
{
    item_data_show=readdata2_2();
    QString s=ui->lineEdit->text();
    if(s=="")
    {
        upcase2();
        return;
    }
        mvs2 sum;
    for(int i=0;i<item_data_show.size();i++)
    {
        if(item_data_show[i].commodityName.indexOf(s)!=-1||item_data_show[i].commodityID.indexOf(s)!=-1||item_data_show[i].description.indexOf(s)!=-1)
            sum.add(item_data_show[i].commodityID,item_data_show[i].commodityName,item_data_show[i].price,item_data_show[i].number,item_data_show[i].description,item_data_show[i].sellerID,item_data_show[i].addedDate,item_data_show[i].state,item_data_show[i].time);
    }
    item_data_show=sum;
    upcase2();
}
void usercase::on_pushButton_5_clicked()
{
    item_data_show=readdata2_2();
    QString s=ui->lineEdit->text();
    if(s=="")
    {
        upcase2();
        return;
    }
    mvs2 sum;
for(int i=0;i<item_data_show.size();i++)
{
    if(item_data_show[i].sellerID.indexOf(s)!=-1)
        sum.add(item_data_show[i].commodityID,item_data_show[i].commodityName,item_data_show[i].price,item_data_show[i].number,item_data_show[i].description,item_data_show[i].sellerID,item_data_show[i].addedDate,item_data_show[i].state,item_data_show[i].time);
}
item_data_show=sum;
upcase2();
}

void usercase::on_radioButton_cid_toggled(bool checked)
{
    state=1;
    if(!checked)
        return;
    item_data_show=turn1(item_data_show);
    upcase2(1);
}


void usercase::on_radioButton_cname_toggled(bool checked)
{
    state=2;
    if(!checked)
        return;
    item_data_show=turn2(item_data_show);
    upcase2(2);
}


void usercase::on_radioButton_price_toggled(bool checked)
{
    state=3;
    if(!checked)
        return;
    item_data_show=turn3(item_data_show);
    upcase2(3);
}


void usercase::on_radioButton_sid_toggled(bool checked)
{
    state=4;
    if(!checked)
        return;
    item_data_show=turn4(item_data_show);
    upcase2(4);
}


void usercase::on_radioButton_date_toggled(bool checked)
{
    state=5;
    if(!checked)
        return;
    item_data_show=turn5(item_data_show);
    upcase2(5);
}

void usercase::on_pushButton_6_clicked()
{
    buy_data=readdata4_1(data.userID);
    order_data=readdata3_2(data.userID);
    item_data=readdata2();
    item_data_show=readdata2_2();
    data=readdata()[id];
    this->upcase2();
    this->upcase3();
    this->upcase4();
}

int usercase::getstate2()
{
    return state2;
}
void usercase::buyf(QString a,QString b)
{
    buy_data=readdata4_1(data.userID);
    order_data=readdata3_2(data.userID);
    item_data=readdata2();
    item_data_show=readdata2_2();
    data=readdata()[id];
    this->upcase2();
    this->upcase3();
    this->upcase4();
    if(a!=data.userID)
        return;
    QString s="很遗憾您参与竞拍商品:"+b+" 失败了";
    fale c(s);
    c.exec();
}
void usercase::completeshow(mvs3 sum)
{
    buy_data=readdata4_1(data.userID);
    order_data=readdata3_2(data.userID);
    item_data=readdata2();
    item_data_show=readdata2_2();
    data=readdata()[id];
    this->upcase2();
    this->upcase3();
    this->upcase4();
    for(int i=0;i<sum.size();i++)
    {
        if(sum[i].buyerID==data.userID)
        {
            //qDebug()<<sum[i].buyerID<<data.userID;
            complete a(sum[i]);
            a.exec();
        }

    }
}
