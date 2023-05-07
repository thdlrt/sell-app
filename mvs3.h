#ifndef MVS3_H
#define MVS3_H
#include<QString>
#include<QDebug>
#include<QCryptographicHash>
#include<QDebug>
#include<QFile>
#include<QDir>
#include"getpath.h"
struct order
{
    QString commodityID;
    QString orderID;
    QString unitPrice;
    QString number;
    QString date;
    QString sellerID;
    QString buyerID;
};

class mvs3
{
public:
    mvs3();
    int size();
    void add(    QString orderID,
    QString commodityID,
    QString unitPrice,
    QString number,
    QString date,
    QString sellerID,
    QString buyerID);
    void delet();
    order&operator[](int n);
private:
    order*arr=NULL;
    int i=0;
};
    void savedata3(mvs3 userdata);
    mvs3 readdata3();
    mvs3 readdata3_1(QString id);
    mvs3 readdata3_2(QString id);
#endif // MVS3_H
