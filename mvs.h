#ifndef MVS_H
#define MVS_H
#include<QString>
#include<QDebug>
#include<QCryptographicHash>
#include<QDebug>
#include<QFile>
#include<QDir>
#include"mvs2.h"
#include"mvs4.h"
#include"getpath.h"
struct user
{
    QString userID;
    QString username;
    QString password;
    QString phoneNumber;
    QString address;
    QString balance;
    QString userState;
};

class mvs
{
public:
    mvs();
    int size();
    void add(    QString userID,
    QString username,
    QString password,
    QString phoneNumber,
    QString address,
    QString balance,
    QString userState);
    void delet();
    user&operator[](int n);
private:
    user*arr=NULL;
    int i=0;
};
    QString turn(const QString s);
    void savedata(mvs userdata);
    mvs readdata();
    bool check1(QString set_name);
    bool check2(QString set_name);
    bool check3(QString s);
    bool check4(QString set_name);
    bool check5(QString set_name);
     bool check6(QString set_name);
     bool check7(int c_id,int u_id);
     bool check8(QString a,QString b);
     mvs4 turn6(mvs4 a);
    user updatedata(int id);
#endif // MVS_H
