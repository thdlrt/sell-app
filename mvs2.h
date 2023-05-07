#ifndef MVS2_H
#define MVS2_H
#include<QString>
#include<QDebug>
#include<QCryptographicHash>
#include<QDebug>
#include<QFile>
#include<QDir>
#include"getpath.h"
struct item
{
    QString commodityID;
    QString commodityName;
    QString price;
    QString number;
    QString description;
    QString sellerID;
    QString addedDate;
    QString state;
    QString time;
};

class mvs2
{
public:
    mvs2();
    int size();
    void add(QString commodityID,
    QString commodityName,
    QString price,
    QString number,
    QString description,
    QString sellerID,
    QString addedDate,
    QString state,
    QString time);
    void delet();
    item&operator[](int n);
    item*get();
private:
    item*arr=NULL;
    int i=0;
};
    void savedata2(mvs2 userdata);
    void savedata2_1(mvs2 userdata);
    mvs2 readdata2();
    mvs2 readdata2_1(QString id);
    mvs2 readdata2_2();
    mvs2 turn1(mvs2 item_data);
    mvs2 turn2(mvs2 item_data);
    mvs2 turn3(mvs2 item_data);
    mvs2 turn4(mvs2 item_data);
    mvs2 turn5(mvs2 item_data);
#endif // MVS2_H
