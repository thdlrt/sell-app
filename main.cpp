#include"login.h"
#include <QApplication>
#include"usercase.h"
#include"salecase.h"
#include"admincase.h"
#include"mvs.h"
#include"getpath.h"
int main(int argc, char *argv[])
{
    //qDebug()<<QString::fromStdString(getCurrentPath());
    QApplication a(argc, argv);
    while(1)
    {
        login* log=new login;
        log->exec(); 
        switch(log->getstate())
        {
        case 1:
        {
            while(1)
            {
                int i=log->getid();
                mvs userdata=readdata();
                user a;
                a.userID=userdata[i].userID;
                a.address=userdata[i].address;
                a.balance=userdata[i].balance;
                a.password=userdata[i].password;
                a.phoneNumber=userdata[i].phoneNumber;
                a.username=userdata[i].username;
                a.userState=userdata[i].userState;
                usercase* u=new usercase(a);
                QObject::connect(log,SIGNAL(buy_false(QString,QString)),u,SLOT(buyf(QString,QString)));
                QObject::connect(log,SIGNAL(buy_complete(mvs3)),u,SLOT(completeshow(mvs3)));
                u->exec();
                if(u->getstate2()==0)
                {
                    delete u;
                    break;

                }
                else
                {
                     userdata=readdata();
                    a.userID=userdata[i].userID;
                    a.address=userdata[i].address;
                    a.balance=userdata[i].balance;
                    a.password=userdata[i].password;
                    a.phoneNumber=userdata[i].phoneNumber;
                    a.username=userdata[i].username;
                    a.userState=userdata[i].userState;
                    salecase *s=new salecase(a);
                    QObject::connect(log,SIGNAL(sell_false(item)),s,SLOT(sellf(item)));
                    QObject::connect(log,SIGNAL(admin_complete(mvs3)),s,SLOT(completeshow(mvs3)));
                   // QObject::connect(log,SIGNAL(sell_complete()),a,SLOT(sellc()));
                    s->exec();
                    if(s->getstate2()==0)
                    {
                        delete s;
                        break;

                    }
                }
            }

            break;
        }
        case 2:
        {
            admincase* a=new admincase;
             QObject::connect(log,SIGNAL(admin_complete(mvs3)),a,SLOT(completeshow(mvs3)));
            a->exec();
            delete a;
            break;
        }
        }

        delete log;
    }
    return a.exec();
}
