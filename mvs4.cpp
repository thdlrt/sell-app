#include "mvs4.h"
mvs4::mvs4()
{
arr=new buy[i];
}
int mvs4::size()
{
    return i;
}
 void mvs4::add( QString buyID,QString commodityID,
                 QString unitPrice,
                 QString buyerID,
                 QString time)
 {
     i++;
     buy*temp=new buy[i];
     for(int j=0;j<i-1;j++)
         temp[j]=arr[j];
     temp[i-1].buyID=buyID;
     temp[i-1].commodityID=commodityID;
     temp[i-1].buyerID=buyerID;
     temp[i-1].unitPrice=unitPrice;
     temp[i-1].time=time;
     arr=temp;
 }
 void mvs4::delet()
 {
     i--;
     buy*temp=new buy[i];
     for(int j=0;j<i;j++)
         temp[j]=arr[j];
     arr=temp;
 }
buy&mvs4::operator[](int n)
{
    return arr[n];
}
mvs4 readdata4()
{
    mvs4 userdata;
    QFile file(QString::fromStdString(getCurrentPath())+"/buydata.txt");
    if(!file.exists())
        exit(-1);
    if(!file.open(QIODevice::ReadOnly))
        exit(-1);
   QTextStream aStream(&file);
   aStream.setAutoDetectUnicode(true);
    QString str,t_commodityID,t_price,t_buyerID,t_buyID,t_time;
    int p[4],j=0;
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
             t_buyID=str.mid(0,p[0]);
             t_commodityID=str.mid(p[0]+1,p[1]-p[0]-1);
             t_price=str.mid(p[1]+1,p[2]-p[1]-1);
              t_buyerID=str.mid(p[2]+1,p[3]-p[2]-1);
             t_time=str.mid(p[3]+1,str.size()-p[3]-1);
         userdata.add(t_buyID,t_commodityID,t_price,t_buyerID,t_time);
     }
     file.close();
     return userdata;
}
 void savedata4(mvs4 userdata)
 {
     QFile file( QString::fromStdString(getCurrentPath())+"/buydata.txt");
     if(!file.exists())
         exit(-1);
     if(!file.open(QIODevice::WriteOnly|QIODevice::Text))
         exit(-1);
    QTextStream aStream(&file);
    aStream.setAutoDetectUnicode(true);
    for(int i=0;i<userdata.size()-1;i++)
    {
        aStream<<userdata[i].buyID<<","<<userdata[i].commodityID<<","<<userdata[i].unitPrice<<","<<userdata[i].buyerID<<","<<userdata[i].time<<"\n";
    }
    if(userdata.size()!=0)
   aStream<<userdata[userdata.size()-1].buyID<<","<<userdata[userdata.size()-1].commodityID<<","<<userdata[userdata.size()-1].unitPrice<<","<<userdata[userdata.size()-1].buyerID<<","<<userdata[userdata.size()-1].time;
    file.close();
 }
 mvs4 readdata4_1(QString id)
 {
     mvs4 sum,temp=readdata4();
     for(int i=0;i<temp.size();i++)
     {
         if(temp[i].buyerID==id)
             sum.add(temp[i].buyID,temp[i].commodityID,temp[i].unitPrice,temp[i].buyerID,temp[i].time);
     }
     return sum;
 }
