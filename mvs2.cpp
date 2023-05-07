#include "mvs2.h"
#include<algorithm>
mvs2::mvs2()
{
arr=new item[i];
}
int mvs2::size()
{
    return i;
}
 void mvs2::add(QString commodityID,
                QString commodityName,
                QString price,
                QString number,
                QString description,
                QString sellerID,
                QString addedDate,
                QString state,
                QString time)
 {
     i++;
     item*temp=new item[i];
     for(int j=0;j<i-1;j++)
         temp[j]=arr[j];
     temp[i-1].commodityID=commodityID;
     temp[i-1].commodityName=commodityName;
     temp[i-1].price=price;
     temp[i-1].number=number;
     temp[i-1].description=description;
     temp[i-1].sellerID=sellerID;
     temp[i-1].addedDate=addedDate;
     temp[i-1].state=state;
     temp[i-1].time=time;
     arr=temp;
 }
 void mvs2::delet()
 {
     i--;
     item*temp=new item[i];
     for(int j=0;j<i;j++)
         temp[j]=arr[j];
     arr=temp;
 }
item&mvs2::operator[](int n)
{
    return arr[n];
}
mvs2 readdata2()
{
    mvs2 userdata;
    QFile file(QString::fromStdString(getCurrentPath())+"/itemdata.txt");
    if(!file.exists())
        exit(-1);
    if(!file.open(QIODevice::ReadOnly))
        exit(-1);
   QTextStream aStream(&file);
   aStream.setAutoDetectUnicode(true);
    QString str,t_commodityID,t_commodityName,t_price,t_number,t_description,t_sellerID,t_addedDate,t_state,t_time;
    int p[8],j=0;
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
            t_addedDate=str.mid(p[5]+1,p[6]-p[5]-1);
             t_state=str.mid(p[6]+1,p[7]-p[6]-1);
             t_time=str.mid(p[7]+1,str.size()-p[7]-1);
         userdata.add(t_commodityID,t_commodityName,t_price,t_number,t_description,t_sellerID,t_addedDate,t_state,t_time);
         //qDebug()<<t_commodityID<<t_commodityName<<t_price<<t_number<<t_description<<t_sellerID<<t_addedDate<<t_state;
     }
     file.close();
     return userdata;
}
mvs2 readdata2_2()
{
    mvs2 userdata;
    QFile file(QString::fromStdString(getCurrentPath())+"/itemdata.txt");
    if(!file.exists())
        exit(-1);
    if(!file.open(QIODevice::ReadOnly))
        exit(-1);
   QTextStream aStream(&file);
   aStream.setAutoDetectUnicode(true);
    QString str,t_commodityID,t_commodityName,t_price,t_number,t_description,t_sellerID,t_addedDate,t_state,t_time;
    int p[8],j=0;
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
            t_addedDate=str.mid(p[5]+1,p[6]-p[5]-1);
             t_state=str.mid(p[6]+1,p[7]-p[6]-1);
             t_time=str.mid(p[7]+1,str.size()-p[7]-1);
             if(t_state=="1")
         userdata.add(t_commodityID,t_commodityName,t_price,t_number,t_description,t_sellerID,t_addedDate,t_state,t_time);
         //qDebug()<<t_commodityID<<t_commodityName<<t_price<<t_number<<t_description<<t_sellerID<<t_addedDate<<t_state;
     }
     file.close();
     return userdata;
}
 void savedata2(mvs2 userdata)
 {
     mvs2 temp=readdata2();
     userdata=turn1(userdata);
     QFile file( QString::fromStdString(getCurrentPath())+"/itemdata.txt");
     if(!file.exists())
         exit(-1);
     if(!file.open(QIODevice::WriteOnly|QIODevice::Text))
         exit(-1);
    QTextStream aStream(&file);
    aStream.setAutoDetectUnicode(true);
    if(userdata.size()<temp.size())
    {
        userdata=turn1(userdata);
        int i=0,j=0;
        for(i=0;i<temp.size();i++)
        {
            if(userdata[j].commodityID==temp[i].commodityID)
            {
                temp[i]=userdata[j];
                j++;
            }
        }
        userdata=temp;
    }
    for(int i=0;i<userdata.size()-1;i++)
    {
        aStream<<userdata[i].commodityID<<","<<userdata[i].commodityName<<","<<userdata[i].price<<","<<userdata[i].number<<","<<userdata[i].description<<","<<userdata[i].sellerID<<","<<userdata[i].addedDate<<","<<userdata[i].state<<","<<userdata[i].time<<"\n";
    }
    if(userdata.size()!=0)
    aStream<<userdata[userdata.size()-1].commodityID<<","<<userdata[userdata.size()-1].commodityName<<","<<userdata[userdata.size()-1].price<<","<<userdata[userdata.size()-1].number<<","<<userdata[userdata.size()-1].description<<","<<userdata[userdata.size()-1].sellerID<<","<<userdata[userdata.size()-1].addedDate<<","<<userdata[userdata.size()-1].state<<","<<userdata[userdata.size()-1].time;
    file.close();
 }
 item* mvs2::get()
 {
     return arr;
 }
 bool cmp1(item a,item b)
 {
     if(a.commodityID<b.commodityID)
         return true;
     return false;
 }
 bool cmp4(item a,item b)
 {
     if(a.sellerID<b.sellerID)
         return true;
     return false;
 }
 bool cmp2(item a,item b)
 {
     if(a.commodityName<b.commodityName)
         return true;
     return false;
 }
 bool cmp3(item a,item b)
 {
     if(a.price.toDouble()<b.price.toDouble())
         return true;
     return false;
 }
 bool cmp5(item a,item b)
 {
     if(a.addedDate<b.addedDate)
         return true;
     return false;
 }
 mvs2 turn1(mvs2 item_data)
 {
     std::sort(item_data.get(),item_data.get()+item_data.size(),cmp1);
    return item_data;
 }
 mvs2 turn2(mvs2 item_data)
 {
     std::sort(item_data.get(),item_data.get()+item_data.size(),cmp2);
    return item_data;
 }
 mvs2 turn3(mvs2 item_data)
 {
     std::sort(item_data.get(),item_data.get()+item_data.size(),cmp3);
    return item_data;
 }
 mvs2 turn4(mvs2 item_data)
 {
     std::sort(item_data.get(),item_data.get()+item_data.size(),cmp4);
    return item_data;
 }
 mvs2 turn5(mvs2 item_data)
 {
     std::sort(item_data.get(),item_data.get()+item_data.size(),cmp5);
    return item_data;
 }
 mvs2 readdata2_1(QString id)
 {
     mvs2 sum,temp=readdata2();
     for(int i=0;i<temp.size();i++)
     {
         if(temp[i].sellerID==id)
             sum.add(temp[i].commodityID,temp[i].commodityName,temp[i].price,temp[i].number,temp[i].description,temp[i].sellerID,temp[i].addedDate,temp[i].state,temp[i].time);
         }
     return sum;
 }
