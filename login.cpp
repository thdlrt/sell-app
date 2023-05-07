#include "login.h"
#include "ui_login.h"
#include <QFile>
#include<QDir>
#include<QMessageBox>
#include<QDateTime>
login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    setFixedSize(600,510);
    ui->setupUi(this);
    ui->admin_password->setEchoMode(QLineEdit::Password);
    ui->user_password->setEchoMode(QLineEdit::Password);
    this->setWindowFlags(Qt::SplashScreen);
    this->setWindowFlags(Qt::FramelessWindowHint);
    ui->label->setFixedSize(600,350);
    QPixmap pix(QString::fromStdString(getCurrentPath())+"/resource/start.png");
    pix=pix.scaled(ui->label->size());
    ui->label->setPixmap(pix);
    userdata=readdata();
    t=new QTimer(this);
    t->setInterval(3000);
    t->start();
    connect(t,SIGNAL(timeout()),this,SLOT(core()));
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_clicked()
{
    QString admin_name,admin_password;
    admin_name=ui->admin_name->text();
    admin_password=ui->admin_password->text();
    if(admin_name==userdata[0].username&&turn(admin_password)==userdata[0].password)
    {
        error_num=0;
        state=2;
        this->close();
    }
    else
    {
        QMessageBox::warning(this,"错误","用户名或密码错误\n三次错误将自动关闭程序");
        error_num++;
        ui->admin_name->setText("");
        ui->admin_password->setText("");
    }
    if(error_num==3)
    {
        QMessageBox::critical(this,"警告","已经错误三次，将自动关闭程序");
        exit(0);
    }
}


void login::on_pushButton_5_clicked()
{
    exit(0);
}

bool login::right(QString user_name,QString user_password)
{
    for(int i=1;i<userdata.size();i++)
    {
        if(user_name==userdata[i].username&&turn(user_password)==userdata[i].password)
        {
            id=userdata[i].userID;
            return true;
        }

    }
    return false;
}
void login::on_pushButton_3_clicked()
{
    QString user_name,user_password;
    user_name=ui->user_name->text();
    user_password=ui->user_password->text();
    if(right(user_name,user_password))
    {
        for(int i=1;i<userdata.size();i++)
        {
            if(user_name==userdata[i].username&&turn(user_password)==userdata[i].password&&userdata[i].userState=='0')
            {
                QMessageBox::warning(this,"错误","该账号已被封禁");
                return;
            }

        }
        error_num=0;
        state=1;
        this->close();
    }
    else
    {
        QMessageBox::warning(this,"错误","用户名或密码错误\n三次错误将自动关闭程序");
        error_num++;
        ui->user_name->setText("");
        ui->user_password->setText("");
    }
    if(error_num==3)
    {
        QMessageBox::critical(this,"警告","已经错误三次，将自动关闭程序");
        exit(0);
    }
}
int login::getstate()
{
    return state;
}
int login::getid()
{
    QString s=id.mid(1,3);
    int num=s.toInt();
    return num;
}

void login::on_pushButton_4_clicked()
{
    setlog userset(userdata);
    userdata=userset.userdata_get();
}
void login::core()
{
    QString t=QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm");
    mvs user_data=readdata();
    mvs2 item_data=readdata2();
    mvs3 order_data=readdata3(),sum3;
    mvs4 buy_data=readdata4();
        //emit admin_complete(sum3);
    for(int i=0;i<item_data.size();i++)
    {
        //emit sell_false(item_data[i]);
        if(item_data[i].state=="0")
        {
            continue;
        }
        if(check8(item_data[i].time,t))
        {
            mvs4 buyers;
            for(int j=0;j<buy_data.size();j++)
            {
                if(item_data[i].commodityID==buy_data[j].commodityID)
                {
                    buyers.add(buy_data[j].buyID,buy_data[j].commodityID,buy_data[j].unitPrice,buy_data[j].buyerID,buy_data[j].time);
                }
            }
            buyers=turn6(buyers);

//            for(int k=0;k<buyers.size();k++)
//            {
//                qDebug()<<buyers[k].buyerID;
//            }

            item_data[i].state="0";
            if(buyers.size()!=0)
            {
                for(int q=0;q<buyers.size();q++)
                {
                user_data[item_data[i].sellerID.mid(1,3).toInt()].balance=QString::number(user_data[item_data[i].sellerID.mid(1,3).toInt()].balance.toDouble()+buyers[q].unitPrice.toDouble());
                }
                }
            else
            {
                savedata2(item_data);
                savedata(user_data);
                //qDebug()<<"a";
                emit sell_false(item_data[i]);
                continue;
            }
            for(int j=0;j<item_data[i].number.toInt()&&j<buyers.size();j++)
            {
                  //emit buy_complete(buyers[j].buyerID,buyers[j].commodityID);
                  QString sum2="T"+QString("%1").arg(order_data.size()+1,3,10,QLatin1Char('0'));
                order_data.add(sum2,item_data[i].commodityID,buyers[j].unitPrice,"1",buyers[j].time,item_data[i].sellerID,buyers[j].buyerID);
                sum3.add(sum2,item_data[i].commodityID,buyers[j].unitPrice,"1",buyers[j].time,item_data[i].sellerID,buyers[j].buyerID);
            }
            for(int j=item_data[i].number.toInt();j<buyers.size();j++)
            {
                 emit buy_false(buyers[j].buyerID,buyers[j].commodityID);
            }
            mvs4 temp;int n=0;bool c=1;
            for(int k=0;k<buy_data.size();k++)
           {
                c=1;
                for(int j=0;j<buyers.size();j++)
                {
                    if(buy_data[k].buyID==buyers[j].buyID)
                    {
                        n++;
                        c=0;
                        break;
                    }

                }
                if(c)
                 temp.add(buy_data[k-n].buyID,buy_data[k].commodityID,buy_data[k].unitPrice,buy_data[k].buyerID,buy_data[k].time);
            }
            for(int j=item_data[i].number.toInt();j<buyers.size();j++)
            {
                user_data[buyers[j].buyerID.mid(1,3).toInt()].balance=QString::number(user_data[buyers[j].buyerID.mid(1,3).toInt()].balance.toDouble()+buyers[j].unitPrice.toDouble());
            }
            savedata3(order_data);
            savedata2(item_data);
            savedata4(temp);
            savedata(user_data);
            emit admin_complete(sum3);
            emit sell_complete(sum3);
             emit buy_complete(sum3);
        }
    }
}
