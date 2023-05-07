#include "mvs3.h"
mvs3::mvs3()
{
arr=new order[i];
}
int mvs3::size()
{
    return i;
}
 void mvs3::add(QString orderID,
                QString commodityID,
                QString unitPrice,
                QString number,
                QString date,
                QString sellerID,
                QString buyerID)
 {
     i++;
     order*temp=new order[i];
     for(int j=0;j<i-1;j++)
         temp[j]=arr[j];
     temp[i-1].commodityID=commodityID;
     temp[i-1].orderID=orderID;
     temp[i-1].unitPrice=unitPrice;
     temp[i-1].number=number;
     temp[i-1].sellerID=sellerID;
     temp[i-1].date=date;
     temp[i-1].buyerID=buyerID;
     arr=temp;
 }
 void mvs3::delet()
 {
     i--;
     order*temp=new order[i];
     for(int j=0;j<i;j++)
         temp[j]=arr[j];
     arr=temp;
 }
order&mvs3::operator[](int n)
{
    return arr[n];
}
mvs3 readdata3()
{
    mvs3 userdata;
    QFile file(QString::fromStdString(getCurrentPath())+"/orderdata.txt");
    if(!file.exists())
        exit(-1);
    if(!file.open(QIODevice::ReadOnly))
        exit(-1);
   QTextStream aStream(&file);
   aStream.setAutoDetectUnicode(true);
    QString str,t_commodityID,t_commodityName,t_price,t_number,t_description,t_sellerID,t_addedDate;
    int p[6],j=0;
    while(!aStream.atEnd())
     {
              j=0;
              str=aStream.readLine();
             for(int i=0;i<str.size();i++)
             {
                 if(str[i]==',')
                 {
                     p[j]=i;
                     j++;
                 }
             }
             t_commodityID=str.mid(0,p[0]);
             t_commodityName=str.mid(p[0]+1,p[1]-p[0]-1);
             t_price=str.mid(p[1]+1,p[2]-p[1]-1);
             t_number=str.mid(p[2]+1,p[3]-p[2]-1);
             t_description=str.mid(p[3]+1,p[4]-p[3]-1);
            t_sellerID=str.mid(p[4]+1,p[5]-p[4]-1);
             t_addedDate=str.mid(p[5]+1,str.size()-p[5]-1);
         userdata.add(t_commodityID,t_commodityName,t_price,t_number,t_description,t_sellerID,t_addedDate);
         //qDebug()<<t_commodityID<<t_commodityName<<t_price<<t_number<<t_description<<t_sellerID<<t_addedDate<<t_state;
     }
     file.close();
     return userdata;
}
 void savedata3(mvs3 userdata)
 {
     QFile file( QString::fromStdString(getCurrentPath())+"/orderdata.txt");
     if(!file.exists())
         exit(-1);
     if(!file.open(QIODevice::WriteOnly|QIODevice::Text))
         exit(-1);
    QTextStream aStream(&file);
    aStream.setAutoDetectUnicode(true);
    for(int i=0;i<userdata.size()-1;i++)
    {
        aStream<<userdata[i].orderID<<","<<userdata[i].commodityID<<","<<userdata[i].unitPrice<<","<<userdata[i].number<<","<<userdata[i].date<<","<<userdata[i].sellerID<<","<<userdata[i].buyerID<<"\n";
    }
    if(userdata.size()!=0)
    aStream<<userdata[userdata.size()-1].orderID<<","<<userdata[userdata.size()-1].commodityID<<","<<userdata[userdata.size()-1].unitPrice<<","<<userdata[userdata.size()-1].number<<","<<userdata[userdata.size()-1].date<<","<<userdata[userdata.size()-1].sellerID<<","<<userdata[userdata.size()-1].buyerID;
    file.close();
 }
mvs3 readdata3_2(QString id)
{
    mvs3 sum,temp=readdata3();
    for(int i=0;i<temp.size();i++)
    {
        if(temp[i].buyerID==id)
            sum.add(temp[i].orderID,temp[i].commodityID,temp[i].unitPrice,temp[i].number,temp[i].date,temp[i].sellerID,temp[i].buyerID);
    }
    return sum;
}
mvs3 readdata3_1(QString id)
{
    mvs3 sum,temp=readdata3();
    for(int i=0;i<temp.size();i++)
    {
        if(temp[i].sellerID==id)
            sum.add(temp[i].orderID,temp[i].commodityID,temp[i].unitPrice,temp[i].number,temp[i].date,temp[i].sellerID,temp[i].buyerID);
    }
    return sum;
}
