#include "mvs.h"

mvs::mvs()
{
arr=new user[i];
}
int mvs::size()
{
    return i;
}
 void mvs::add(QString userID,
               QString username,
               QString password,
               QString phoneNumber,
               QString address,
               QString balance,
               QString userState)
 {
     i++;
     user*temp=new user[i];
     for(int j=0;j<i-1;j++)
         temp[j]=arr[j];
     temp[i-1].userID=userID;
     temp[i-1].username=username;
     temp[i-1].password=password;
     temp[i-1].phoneNumber=phoneNumber;
     temp[i-1].address=address;
     temp[i-1].balance=balance;
     temp[i-1].userState=userState;
     arr=temp;
 }
 void mvs::delet()
 {
     i--;
     user*temp=new user[i];
     for(int j=0;j<i;j++)
         temp[j]=arr[j];
     arr=temp;
 }
user&mvs::operator[](int n)
{
    return arr[n];
}
QString turn(const QString s)
{
    QByteArray a;
    a=s.toLatin1();
    QCryptographicHash hash(QCryptographicHash::Md5);
    hash.addData(a);
    QByteArray resultArray=hash.result();
    QString md5=resultArray.toHex();
    return md5;
}
mvs readdata()
{
    mvs userdata;
    QFile file(QString::fromStdString(getCurrentPath())+"/userlog.txt");
    if(!file.exists())
        exit(-1);
    if(!file.open(QIODevice::ReadOnly))
        exit(-1);
   QTextStream aStream(&file);
   aStream.setAutoDetectUnicode(true);
    QString str,t_userID,t_username,t_password,t_phoneNumber,t_address,t_balance,t_userState;
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
             t_userID=str.mid(0,p[0]);
             t_username=str.mid(p[0]+1,p[1]-p[0]-1);
             t_password=str.mid(p[1]+1,p[2]-p[1]-1);
             t_phoneNumber=str.mid(p[2]+1,p[3]-p[2]-1);
             t_address=str.mid(p[3]+1,p[4]-p[3]-1);
            t_balance=str.mid(p[4]+1,p[5]-p[4]-1);
             t_userState=str.mid(p[5]+1,str.size()-p[5]-1);
         userdata.add(t_userID,t_username,t_password,t_phoneNumber,t_address,t_balance,t_userState);
     }
     file.close();
     return userdata;
}
 void savedata(mvs userdata)
 {
     QFile file( QString::fromStdString(getCurrentPath())+"/userlog.txt");
     if(!file.exists())
         exit(-1);
     if(!file.open(QIODevice::WriteOnly|QIODevice::Text))
         exit(-1);
    QTextStream aStream(&file);
    aStream.setAutoDetectUnicode(true);
    for(int i=0;i<userdata.size()-1;i++)
    {
        aStream<<userdata[i].userID<<","<<userdata[i].username<<","<<userdata[i].password<<","<<userdata[i].phoneNumber<<","<<userdata[i].address<<","<<userdata[i].balance<<","<<userdata[i].userState<<"\n";
    }
    if(userdata.size()!=0)
    aStream<<userdata[userdata.size()-1].userID<<","<<userdata[userdata.size()-1].username<<","<<userdata[userdata.size()-1].password<<","<<userdata[userdata.size()-1].phoneNumber<<","<<userdata[userdata.size()-1].address<<","<<userdata[userdata.size()-1].balance<<","<<userdata[userdata.size()-1].userState;
    file.close();
 }
bool check1(QString set_name)
{
    for(auto a:set_name)
    {
        if((a>='A'&&a<='Z')||(a>='a'&&a<='z'))
            ;
        else
            return true;
    }
    return false;
}
bool check2(QString set_name)
{
    for(auto a:set_name)
    {
        if((a>='0'&&a<='9')||(a>='a'&&a<='z'))
            ;
        else
            return true;
    }
     return false;
}
bool check3(QString s)
{
    int sum=0;
    for(auto a:s)
        {
            if((a>='0'&&a<='9'))
                ;
            else if(a=='.')
                sum++;
            else
                return true;
        }
    if(sum>1)
        return true;
     return false;
}
bool check4(QString set_name)
{
    for(auto a:set_name)
    {
        if((a>='0'&&a<='9'))
            ;
        else
            return true;
    }
     return false;
}
bool check5(QString set_name)
{
    bool b=false;
    for(auto a:set_name)
    {
        if(a==' ')
            ;
        else if((a>='A'&&a<='Z')||(a>='a'&&a<='z'))
            b=true;
        else
            return true;
    }
    if(b)
    return false;
    return true;
}
bool check6(QString set_name)
{
    bool b=false;
    for(auto a:set_name)
    {
        if(a==' ')
            ;
        else if((a>='A'&&a<='Z')||(a>='a'&&a<='z')||(a>='0'&&a<='9'))
            b=true;
        else
            return true;
    }
    if(b)
    return false;
    return true;
}
user updatedata(int id)
{
    mvs user_data=readdata();
    return(user_data[id]);
}
  bool check7(int c_id,int u_id)
  {
      mvs2 item_data=readdata2();
      mvs user_data=readdata();
      mvs4 buy_data=readdata4_1(user_data[u_id].userID);
      for(int i=0;i<buy_data.size();i++)
      {
          if(buy_data[i].commodityID==item_data[c_id-1].commodityID)
              return true;
      }
      return false;
  }
     bool check8(QString a,QString b)
     {
         int h_1=a.mid(11,2).toInt(),h_2=b.mid(11,2).toInt();
         int m_1=a.mid(14,2).toInt(),m_2=b.mid(14,2).toInt();
         if(60*h_1+m_1<=60*h_2+m_2)
             return true;
         return false;
     }
    mvs4 turn6(mvs4 a)
    {
        buy temp;
        for(int i=0;i<a.size()-1;i++)
        {
            for(int j=0;j<a.size()-i-1;j++)
            {
                if(a[j].unitPrice<a[j+1].unitPrice||(a[j].unitPrice==a[j+1].unitPrice&&!check8(a[j].time,a[j+1].time)))
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        return a;
    }
