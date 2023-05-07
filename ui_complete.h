/********************************************************************************
** Form generated from reading UI file 'complete.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPLETE_H
#define UI_COMPLETE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_complete
{
public:
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_sid;
    QLineEdit *lineEdit_sid;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_oid;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_price;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_num;
    QLineEdit *lineEdit_num;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_time;
    QLineEdit *lineEdit_time;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_bid;
    QLineEdit *lineEdit_bid;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_cid;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_8;
    QLabel *label_7;

    void setupUi(QDialog *complete)
    {
        if (complete->objectName().isEmpty())
            complete->setObjectName(QString::fromUtf8("complete"));
        complete->resize(550, 350);
        groupBox_8 = new QGroupBox(complete);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(0, 0, 331, 351));
        gridLayout = new QGridLayout(groupBox_8);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_7 = new QGroupBox(groupBox_8);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        horizontalLayout_7 = new QHBoxLayout(groupBox_7);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_sid = new QLabel(groupBox_7);
        label_sid->setObjectName(QString::fromUtf8("label_sid"));

        horizontalLayout_7->addWidget(label_sid);

        lineEdit_sid = new QLineEdit(groupBox_7);
        lineEdit_sid->setObjectName(QString::fromUtf8("lineEdit_sid"));

        horizontalLayout_7->addWidget(lineEdit_sid);


        gridLayout->addWidget(groupBox_7, 5, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 0, 1, 1);

        groupBox = new QGroupBox(groupBox_8);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_oid = new QLineEdit(groupBox);
        lineEdit_oid->setObjectName(QString::fromUtf8("lineEdit_oid"));

        horizontalLayout->addWidget(lineEdit_oid);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(groupBox_8);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_price = new QLineEdit(groupBox_2);
        lineEdit_price->setObjectName(QString::fromUtf8("lineEdit_price"));

        horizontalLayout_2->addWidget(lineEdit_price);


        gridLayout->addWidget(groupBox_2, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        groupBox_6 = new QGroupBox(groupBox_8);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        horizontalLayout_6 = new QHBoxLayout(groupBox_6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_num = new QLabel(groupBox_6);
        label_num->setObjectName(QString::fromUtf8("label_num"));

        horizontalLayout_6->addWidget(label_num);

        lineEdit_num = new QLineEdit(groupBox_6);
        lineEdit_num->setObjectName(QString::fromUtf8("lineEdit_num"));

        horizontalLayout_6->addWidget(lineEdit_num);


        gridLayout->addWidget(groupBox_6, 3, 1, 1, 1);

        groupBox_3 = new QGroupBox(groupBox_8);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_time = new QLabel(groupBox_3);
        label_time->setObjectName(QString::fromUtf8("label_time"));

        horizontalLayout_3->addWidget(label_time);

        lineEdit_time = new QLineEdit(groupBox_3);
        lineEdit_time->setObjectName(QString::fromUtf8("lineEdit_time"));

        horizontalLayout_3->addWidget(lineEdit_time);


        gridLayout->addWidget(groupBox_3, 5, 0, 1, 1);

        groupBox_5 = new QGroupBox(groupBox_8);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        horizontalLayout_5 = new QHBoxLayout(groupBox_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_bid = new QLabel(groupBox_5);
        label_bid->setObjectName(QString::fromUtf8("label_bid"));

        horizontalLayout_5->addWidget(label_bid);

        lineEdit_bid = new QLineEdit(groupBox_5);
        lineEdit_bid->setObjectName(QString::fromUtf8("lineEdit_bid"));

        horizontalLayout_5->addWidget(lineEdit_bid);


        gridLayout->addWidget(groupBox_5, 7, 0, 1, 1);

        pushButton = new QPushButton(groupBox_8);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 7, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 0, 0, 1, 1);

        groupBox_4 = new QGroupBox(groupBox_8);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_cid = new QLineEdit(groupBox_4);
        lineEdit_cid->setObjectName(QString::fromUtf8("lineEdit_cid"));

        horizontalLayout_4->addWidget(lineEdit_cid);


        gridLayout->addWidget(groupBox_4, 1, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 6, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 8, 1, 1, 1);

        groupBox->raise();
        pushButton->raise();
        groupBox_6->raise();
        groupBox_4->raise();
        groupBox_3->raise();
        groupBox_2->raise();
        groupBox_5->raise();
        groupBox_7->raise();
        label_8 = new QLabel(complete);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 0, 45, 13));
        label_7 = new QLabel(complete);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 0, 143, 13));
        label_8->raise();
        label_7->raise();
        groupBox_8->raise();

        retranslateUi(complete);

        QMetaObject::connectSlotsByName(complete);
    } // setupUi

    void retranslateUi(QDialog *complete)
    {
        complete->setWindowTitle(QCoreApplication::translate("complete", "\346\226\260\345\256\214\346\210\220\347\232\204\350\256\242\345\215\225", nullptr));
        groupBox_8->setTitle(QString());
        groupBox_7->setTitle(QString());
        label_sid->setText(QCoreApplication::translate("complete", "\345\215\226\345\256\266id", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("complete", "\350\256\242\345\215\225id    ", nullptr));
        groupBox_2->setTitle(QString());
        label_2->setText(QCoreApplication::translate("complete", "\346\210\220\344\272\244\344\273\267\346\240\274", nullptr));
        groupBox_6->setTitle(QString());
        label_num->setText(QCoreApplication::translate("complete", "\346\225\260\347\233\256   ", nullptr));
        groupBox_3->setTitle(QString());
        label_time->setText(QCoreApplication::translate("complete", "\346\210\220\344\272\244\346\227\266\351\227\264", nullptr));
        groupBox_5->setTitle(QString());
        label_bid->setText(QCoreApplication::translate("complete", "\344\271\260\345\256\266id   ", nullptr));
        pushButton->setText(QCoreApplication::translate("complete", "\347\241\256\345\256\232", nullptr));
        groupBox_4->setTitle(QString());
        label_4->setText(QCoreApplication::translate("complete", "\345\225\206\345\223\201id", nullptr));
        label_8->setText(QCoreApplication::translate("complete", "TextLabel", nullptr));
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class complete: public Ui_complete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPLETE_H
