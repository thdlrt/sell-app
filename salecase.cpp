#include "salecase.h"
#include "ui_salecase.h"
#include"datacheck.h"
#include"usercase.h"
#include<QPalette>
#include<QTableWidget>
#include<QToolTip>
#include"newitem.h"
#include<QMessageBox>
#include"edititem.h"
#include"fale.h"
#include"complete.h"
salecase::salecase(user data,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::salecase)
{
        ui->setupUi(this);
        item_data=readdata2_1(data.userID);
        order_data=readdata3_1(data.userID);      
        this->upcase3();
        this->upcase2();
    setFixedSize(800,600);
    this->data=data;
    ui->label->setFixedSize(800,200);
    QPixmap pix(QString::fromStdString(getCurrentPath())+"/resource/user2.png");
    pix=pix.scaled(ui->label->size());
    ui->label->setPixmap(pix);
    ui->label_name->setText("用户："+data.username);
    QPalette pe;
    pe.setColor(QPalette::WindowText,Qt::white);
    ui->label_name->setPalette(pe);
    id=data.userID.mid(1,3).toInt();
}

salecase::~salecase()
{
    delete ui;
}

void salecase::on_pushButton_clicked()
{
    this->close();
}


void salecase::on_pushButton_3_clicked()
{
    int num=data.userID.mid(1,3).toInt();
    datacheck a(num);
    a.exec();
    data=updatedata(id);
    ui->label_name->setText("用户："+data.username);
}


void salecase::on_pushButton_2_clicked()
{
    this->close();
    state2=1;
}

void salecase::slotCellEnter3(int r, int c) {
    QTableWidgetItem *item = ui->tableWidget_3->item(r, c);
    if (item == nullptr) {
        return;
    }
    QToolTip::showText(QCursor::pos(), item->text());
}
void salecase::upcase3()
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

void salecase::on_pushButton_4_clicked()
{
    newitem a(data.userID);
    a.exec();
    item_data=readdata2_1(data.userID);

    this->upcase2();
}

void salecase::slotCellEnter2(int r, int c) {
    QTableWidgetItem *item = ui->tableWidget_2->item(r, c);
    if (item == nullptr) {
        return;
    }
    QToolTip::showText(QCursor::pos(), item->text());
}
void salecase::report2()
{
    QPushButton*a=qobject_cast<QPushButton*>(sender());
    if(a==NULL)
        return;
    QModelIndex q=ui->tableWidget_2->indexAt(QPoint(a->frameGeometry().x(),a->frameGeometry().y()));
    int i=q.row();
    if(item_data[i].state=="0")
    {
        QMessageBox::warning(this,"错误","该商品已下架");
    }
    else
    {
        edititem a(i,item_data);
        a.exec();
    }
    this->upcase2();
}
void salecase::upcase2()
{
    ui->tableWidget_2->setAlternatingRowColors(1);
    ui->tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_2->clearContents();
    ui->tableWidget_2->setRowCount(item_data.size());
    ui->tableWidget_2->setColumnWidth(9,40);
    ui->tableWidget_2->resizeRowsToContents();
    ui->tableWidget_2->setMouseTracking(true);
     connect(ui->tableWidget_2, SIGNAL(cellEntered(int, int)), this, SLOT(slotCellEnter2(int , int )));
    for(int i=0;i<item_data.size();i++)
    {
        QPushButton*button=new QPushButton(this);
        button->setText("修改");
        connect(button,SIGNAL(clicked()),this,SLOT(report2()));
        ui->tableWidget_2->setCellWidget(i,9,button);
        QTableWidgetItem*item;
        item=new QTableWidgetItem(item_data[i].commodityID);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_2->setItem(i,0,item);
        item=new QTableWidgetItem(item_data[i].commodityName);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_2->setItem(i,1,item);
        item=new QTableWidgetItem(item_data[i].price);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_2->setItem(i,2,item);
        item=new QTableWidgetItem(item_data[i].number);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_2->setItem(i,3,item);
        item=new QTableWidgetItem(item_data[i].description);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_2->setItem(i,4,item);
        item=new QTableWidgetItem(item_data[i].sellerID);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_2->setItem(i,5,item);
        item=new QTableWidgetItem(item_data[i].addedDate);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_2->setItem(i,6,item);
        item=new QTableWidgetItem(item_data[i].time);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_2->setItem(i,7,item);
        if(item_data[i].state=='1')
            item=new QTableWidgetItem("正常");
        else
            item=new QTableWidgetItem("下架");
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_2->setItem(i,8,item);
    }
}

void salecase::on_pushButton_5_clicked()
{
    item_data=readdata2_1(data.userID);
    order_data=readdata3_1(data.userID);
    data=readdata()[id];
    this->upcase2();
    this->upcase3();
}

int salecase::getstate2()
{
    return state2;
}
void salecase::sellf(item sum)
{
    item_data=readdata2_1(data.userID);
    order_data=readdata3_1(data.userID);
    data=readdata()[id];
    this->upcase2();
    this->upcase3();
    if(sum.sellerID!=data.userID)
        return;
    QString s="很遗憾您的商品:"+sum.commodityID+" 流拍了";
    fale a(s);
    a.exec();
    //qDebug()<<"aa";
}
void salecase::completeshow(mvs3 sum)
{
    item_data=readdata2_1(data.userID);
    order_data=readdata3_1(data.userID);
    data=readdata()[id];
    this->upcase2();
    this->upcase3();
    for(int i=0;i<sum.size();i++)
    {
        if(sum[i].sellerID==data.userID)
        {
            //qDebug()<<sum[i].sellerID<<data.userID;
            complete a(sum[i]);
            a.exec();
        }

    }
}
