#include "admincase.h"
#include "ui_admincase.h"
#include<QTableWidget>
#include<QMessageBox>
#include<QToolTip>
#include"mvs3.h"
#include"complete.h"
admincase::admincase(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::admincase)
{
    buy_data=readdata4();
    user_data=readdata();
    item_data=readdata2();
    order_data=readdata3();
    ui->setupUi(this);
    ui->label->setFixedSize(800,200);
    QPixmap pix(QString::fromStdString(getCurrentPath())+"/resource/admin2.png");
    pix=pix.scaled(ui->label->size());
    ui->label->setPixmap(pix);
    setFixedSize(800,620);
    this->upcase();
    this->upcase2();
    this->upcase3();
    this->upcase4();
}

admincase::~admincase()
{
    delete ui;
}

void admincase::on_pushButton_clicked()
{
    this->close();
}
void admincase::upcase()
{
    ui->tableWidget->setAlternatingRowColors(1);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(user_data.size()-1);
    ui->tableWidget->setColumnWidth(6,40);
    ui->tableWidget->resizeRowsToContents();
    ui->tableWidget->setMouseTracking(true);
     connect(ui->tableWidget, SIGNAL(cellEntered(int, int)), this, SLOT(slotCellEnter(int , int )));
    for(int i=1;i<user_data.size();i++)
    {
        QPushButton*button=new QPushButton(this);
        button->setText("封禁");
        connect(button,SIGNAL(clicked()),this,SLOT(report()));
        ui->tableWidget->setCellWidget(i-1,6,button);
        QTableWidgetItem*item;
        item=new QTableWidgetItem(user_data[i].userID);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget->setItem(i-1,0,item);
        item=new QTableWidgetItem(user_data[i].username);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget->setItem(i-1,1,item);
        item=new QTableWidgetItem(user_data[i].phoneNumber);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget->setItem(i-1,2,item);
        item=new QTableWidgetItem(user_data[i].address);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget->setItem(i-1,3,item);
        item=new QTableWidgetItem(user_data[i].balance);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget->setItem(i-1,4,item);
        if(user_data[i].userState=='1')
            item=new QTableWidgetItem("正常");
        else
            item=new QTableWidgetItem("封禁");
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget->setItem(i-1,5,item);
    }
}
void admincase::upcase2(int i)
{
    switch(i)
    {
    case 1:
        item_data=turn1(item_data);
        break;
    case 2:
        item_data=turn2(item_data);
        break;
    case 3:
        item_data=turn3(item_data);
        break;
    case 4:
        item_data=turn4(item_data);
        break;
    case 5:
        item_data=turn5(item_data);
        break;
    }
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
        button->setText("下架");
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
void admincase::upcase3()
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
void admincase::upcase4()
{
    ui->tableWidget_4->setAlternatingRowColors(1);
    ui->tableWidget_4->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_4->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_4->clearContents();
    ui->tableWidget_4->setRowCount(buy_data.size());
    ui->tableWidget_4->resizeRowsToContents();
    ui->tableWidget_4->setColumnWidth(7,40);
    ui->tableWidget_4->setMouseTracking(true);
     connect(ui->tableWidget_4, SIGNAL(cellEntered(int, int)), this, SLOT(slotCellEnter4(int , int )));
    for(int i=0;i<buy_data.size();i++)
    {
        QPushButton*button=new QPushButton(this);
        button->setText("删除");
        connect(button,SIGNAL(clicked()),this,SLOT(report4()));
        ui->tableWidget_4->setCellWidget(i,7,button);
        QTableWidgetItem*item;
        item=new QTableWidgetItem(buy_data[i].buyID);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_4->setItem(i,0,item);
        item=new QTableWidgetItem(buy_data[i].commodityID);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_4->setItem(i,1,item);
        item=new QTableWidgetItem(buy_data[i].buyerID);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_4->setItem(i,2,item);
        item=new QTableWidgetItem(item_data[buy_data[i].commodityID.mid(1,3).toInt()-1].commodityName);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_4->setItem(i,3,item);
        item=new QTableWidgetItem(buy_data[i].unitPrice);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_4->setItem(i,4,item);
        item=new QTableWidgetItem(item_data[buy_data[i].commodityID.mid(1,3).toInt()-1].time);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_4->setItem(i,5,item);
        item=new QTableWidgetItem(buy_data[i].time);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        ui->tableWidget_4->setItem(i,6,item);
    }
}
void admincase::report()
{
    QPushButton*a=qobject_cast<QPushButton*>(sender());
    if(a==NULL)
        return;
    QModelIndex q=ui->tableWidget->indexAt(QPoint(a->frameGeometry().x(),a->frameGeometry().y()));
    int i=q.row()+1;
    if(user_data[i].userState=='0')
    {
        QMessageBox::warning(this,"错误","该用户已经被封禁");
    }
    else
    {
        QMessageBox::information(this,"成功","用户封禁成功");
        user_data[i].userState='0';
    }
    savedata(user_data);
    this->upcase();
}
void admincase::report2()
{
    QPushButton*a=qobject_cast<QPushButton*>(sender());
    if(a==NULL)
        return;
    QModelIndex q=ui->tableWidget_2->indexAt(QPoint(a->frameGeometry().x(),a->frameGeometry().y()));
    int i=q.row();
    for(int j=0;j<buy_data.size();j++)
    {
        if(buy_data[j].commodityID==item_data[i].commodityID)
        {
            QMessageBox::warning(this,"错误","该商品已被用户拍下，请先删除全部竞拍后再下架商品");
            return;
        }
    }
    if(item_data[i].state=='0')
    {
        QMessageBox::warning(this,"错误","该商品已下架");
    }
    else
    {
        QMessageBox::information(this,"成功","下架成功");
        item_data[i].state='0';
    }
    savedata2(item_data);
    this->upcase2(state);
}
void admincase::report4()
{
    QPushButton*a=qobject_cast<QPushButton*>(sender());
    if(a==NULL)
        return;
    QModelIndex q=ui->tableWidget_4->indexAt(QPoint(a->frameGeometry().x(),a->frameGeometry().y()));
    int i=q.row();
    auto result=QMessageBox::question(this,"注意","删除后将删除记录，并退还买家定金！",QMessageBox::Yes|QMessageBox::Cancel);
    if(result==QMessageBox::Yes)
        ;
    else
        return;
    mvs4 temp;
    int t=0;
    for(int j=0;j<buy_data.size();j++)
    {
        if(j==i)
            t++;
        else
        {
            //qDebug()<<j<<buy_data[j-t].buyID<<buy_data[j].commodityID<<buy_data[j].unitPrice<<buy_data[j].buyerID;
        temp.add(buy_data[j-t].buyID,buy_data[j].commodityID,buy_data[j].unitPrice,buy_data[j].buyerID,buy_data[j].time);
            //qDebug()<<"--"<<temp[j-t].buyerID<<temp[j-t].buyID<<temp[j-t].commodityID<<temp[j-t].unitPrice;
        }
    }
    savedata4(temp);
    user_data[buy_data[i].buyerID.mid(1,3).toInt()].balance=QString::number(user_data[buy_data[i].buyerID.mid(1,3).toInt()].balance.toDouble()+buy_data[i].unitPrice.toDouble());
    savedata(user_data);
    buy_data=readdata4();
    user_data=readdata();
    this->upcase();
    this->upcase4();
}
void admincase::slotCellEnter(int r, int c) {
    QTableWidgetItem *item = ui->tableWidget->item(r, c);
    if (item == nullptr) {
        return;
    }
    QToolTip::showText(QCursor::pos(), item->text());
}
void admincase::slotCellEnter2(int r, int c) {
    QTableWidgetItem *item = ui->tableWidget_2->item(r, c);
    if (item == nullptr) {
        return;
    }
    QToolTip::showText(QCursor::pos(), item->text());
}
void admincase::slotCellEnter3(int r, int c) {
    QTableWidgetItem *item = ui->tableWidget_3->item(r, c);
    if (item == nullptr) {
        return;
    }
    QToolTip::showText(QCursor::pos(), item->text());
}
void admincase::slotCellEnter4(int r, int c) {
    QTableWidgetItem *item = ui->tableWidget_4->item(r, c);
    if (item == nullptr) {
        return;
    }
    QToolTip::showText(QCursor::pos(), item->text());
}
void admincase::on_pushButton_2_clicked()
{
    item_data=readdata2();
    QString s=ui->lineEdit->text();
    if(s=="")
    {
        upcase2();
        return;
    }
        mvs2 sum;
    for(int i=0;i<item_data.size();i++)
    {
        if(item_data[i].commodityName.indexOf(s)!=-1||item_data[i].commodityID.indexOf(s)!=-1||item_data[i].description.indexOf(s)!=-1)
            sum.add(item_data[i].commodityID,item_data[i].commodityName,item_data[i].price,item_data[i].number,item_data[i].description,item_data[i].sellerID,item_data[i].addedDate,item_data[i].state,item_data[i].time);
    }
    item_data=sum;
    upcase2();
}
void admincase::on_pushButton_3_clicked()
{
    item_data=readdata2();
    QString s=ui->lineEdit->text();
    if(s=="")
    {
        upcase2();
        return;
    }
    mvs2 sum;
for(int i=0;i<item_data.size();i++)
{
    if(item_data[i].sellerID.indexOf(s)!=-1)
        sum.add(item_data[i].commodityID,item_data[i].commodityName,item_data[i].price,item_data[i].number,item_data[i].description,item_data[i].sellerID,item_data[i].addedDate,item_data[i].state,item_data[i].time);
}
item_data=sum;
upcase2();
}

void admincase::on_radioButton_cid_toggled(bool checked)
{
    state=1;
    if(!checked)
        return;
    item_data=turn1(item_data);
    upcase2(1);
}


void admincase::on_radioButton_cname_toggled(bool checked)
{
    state=2;
    if(!checked)
        return;
    item_data=turn2(item_data);
    upcase2(2);
}


void admincase::on_radioButton_price_toggled(bool checked)
{
    state=3;
    if(!checked)
        return;
    item_data=turn3(item_data);
    upcase2(3);
}


void admincase::on_radioButton_sid_toggled(bool checked)
{
    state=4;
    if(!checked)
        return;
    item_data=turn4(item_data);
    upcase2(4);
}


void admincase::on_radioButton_date_toggled(bool checked)
{
    state=5;
    if(!checked)
        return;
    item_data=turn5(item_data);
    upcase2(5);
}




void admincase::on_pushButton_4_clicked()
{
    user_data=readdata();
    item_data=readdata2();
    order_data=readdata3();
    buy_data=readdata4();
    this->upcase();
    this->upcase2();
    this->upcase3();
    this->upcase4();
}
void admincase::completeshow(mvs3 sum)
{
    user_data=readdata();
    item_data=readdata2();
    order_data=readdata3();
    buy_data=readdata4();
    this->upcase();
    this->upcase2();
    this->upcase3();
    this->upcase4();
    for(int i=0;i<sum.size();i++)
    {
        complete a(sum[i]);
        a.exec();
    }
}
