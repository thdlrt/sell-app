#ifndef MVS4_H
#define MVS4_H
#include<QString>
#include<QDebug>
#include<QCryptographicHash>
#include<QDebug>
#include<QFile>
#include<QDir>
#include"getpath.h"
struct buy
{
    QString buyID;
    QString commodityID;
    QString unitPrice;
    QString buyerID;
    QString time;
};

class mvs4
{
public:
    mvs4();
    int size();
    void add(    QString buyID,QString commodityID,
    QString unitPrice,
    QString buyerID,
                 QString time);
    void delet();
    buy&operator[](int n);
private:
   buy*arr=NULL;
    int i=0;
};
    void savedata4(mvs4 userdata);
    mvs4 readdata4();
    mvs4 readdata4_1(QString id);
#endif // MVS4_H
