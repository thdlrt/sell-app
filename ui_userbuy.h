/********************************************************************************
** Form generated from reading UI file 'userbuy.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERBUY_H
#define UI_USERBUY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_userbuy
{
public:
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_0;
    QLineEdit *lineEdit_name;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_seller;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *lineEdit_price;
    QLabel *label_3;
    QLineEdit *lineEdit_leftmoney;
    QPushButton *pushButton;
    QGroupBox *groupBox_8;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QLineEdit *lineEdit_buy;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QPlainTextEdit *plainTextEdit_data;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *lineEdit_statr;
    QLabel *label_9;
    QLineEdit *lineEdit_end;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *label_7;

    void setupUi(QDialog *userbuy)
    {
        if (userbuy->objectName().isEmpty())
            userbuy->setObjectName("userbuy");
        userbuy->resize(600, 375);
        groupBox_5 = new QGroupBox(userbuy);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(0, 0, 400, 375));
        verticalLayout = new QVBoxLayout(groupBox_5);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(groupBox_5);
        groupBox->setObjectName("groupBox");
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        label_0 = new QLabel(groupBox);
        label_0->setObjectName("label_0");

        horizontalLayout->addWidget(label_0);

        lineEdit_name = new QLineEdit(groupBox);
        lineEdit_name->setObjectName("lineEdit_name");

        horizontalLayout->addWidget(lineEdit_name);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(groupBox);

        groupBox_7 = new QGroupBox(groupBox_5);
        groupBox_7->setObjectName("groupBox_7");
        horizontalLayout_5 = new QHBoxLayout(groupBox_7);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(groupBox_7);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        lineEdit_seller = new QLineEdit(groupBox_7);
        lineEdit_seller->setObjectName("lineEdit_seller");

        horizontalLayout_5->addWidget(lineEdit_seller);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(groupBox_7);

        groupBox_2 = new QGroupBox(groupBox_5);
        groupBox_2->setObjectName("groupBox_2");
        horizontalLayout_4 = new QHBoxLayout(groupBox_2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");

        horizontalLayout_4->addWidget(label_2);

        lineEdit_price = new QLineEdit(groupBox_2);
        lineEdit_price->setObjectName("lineEdit_price");

        horizontalLayout_4->addWidget(lineEdit_price);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");

        horizontalLayout_4->addWidget(label_3);

        lineEdit_leftmoney = new QLineEdit(groupBox_2);
        lineEdit_leftmoney->setObjectName("lineEdit_leftmoney");

        horizontalLayout_4->addWidget(lineEdit_leftmoney);

        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName("pushButton");

        horizontalLayout_4->addWidget(pushButton);


        verticalLayout->addWidget(groupBox_2);

        groupBox_8 = new QGroupBox(groupBox_5);
        groupBox_8->setObjectName("groupBox_8");
        horizontalLayout_6 = new QHBoxLayout(groupBox_8);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_8 = new QLabel(groupBox_8);
        label_8->setObjectName("label_8");

        horizontalLayout_6->addWidget(label_8);

        lineEdit_buy = new QLineEdit(groupBox_8);
        lineEdit_buy->setObjectName("lineEdit_buy");

        horizontalLayout_6->addWidget(lineEdit_buy);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        verticalLayout->addWidget(groupBox_8);

        groupBox_3 = new QGroupBox(groupBox_5);
        groupBox_3->setObjectName("groupBox_3");
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName("label_4");

        horizontalLayout_2->addWidget(label_4);

        plainTextEdit_data = new QPlainTextEdit(groupBox_3);
        plainTextEdit_data->setObjectName("plainTextEdit_data");

        horizontalLayout_2->addWidget(plainTextEdit_data);


        verticalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(groupBox_5);
        groupBox_4->setObjectName("groupBox_4");
        horizontalLayout_3 = new QHBoxLayout(groupBox_4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName("label_6");

        horizontalLayout_3->addWidget(label_6);

        lineEdit_statr = new QLineEdit(groupBox_4);
        lineEdit_statr->setObjectName("lineEdit_statr");

        horizontalLayout_3->addWidget(lineEdit_statr);

        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName("label_9");

        horizontalLayout_3->addWidget(label_9);

        lineEdit_end = new QLineEdit(groupBox_4);
        lineEdit_end->setObjectName("lineEdit_end");

        horizontalLayout_3->addWidget(lineEdit_end);


        verticalLayout->addWidget(groupBox_4);

        groupBox_6 = new QGroupBox(userbuy);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setGeometry(QRect(480, 290, 111, 81));
        verticalLayout_2 = new QVBoxLayout(groupBox_6);
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton_2 = new QPushButton(groupBox_6);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(groupBox_6);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout_2->addWidget(pushButton_3);

        label = new QLabel(userbuy);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 45, 13));
        label_7 = new QLabel(userbuy);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(0, 0, 45, 13));
        label->raise();
        label_7->raise();
        groupBox_5->raise();
        groupBox_6->raise();

        retranslateUi(userbuy);

        QMetaObject::connectSlotsByName(userbuy);
    } // setupUi

    void retranslateUi(QDialog *userbuy)
    {
        userbuy->setWindowTitle(QCoreApplication::translate("userbuy", "\347\253\236\346\213\215", nullptr));
        groupBox_5->setTitle(QString());
        groupBox->setTitle(QString());
        label_0->setText(QCoreApplication::translate("userbuy", "\345\225\206\345\223\201\345\220\215", nullptr));
        groupBox_7->setTitle(QString());
        label_5->setText(QCoreApplication::translate("userbuy", "\345\215\226\345\256\266   ", nullptr));
        groupBox_2->setTitle(QString());
        label_2->setText(QCoreApplication::translate("userbuy", "\350\265\267\346\213\215\344\273\267", nullptr));
        label_3->setText(QCoreApplication::translate("userbuy", "\351\222\261\345\214\205\344\275\231\351\242\235", nullptr));
        pushButton->setText(QCoreApplication::translate("userbuy", "\345\205\205\345\200\274", nullptr));
        groupBox_8->setTitle(QString());
        label_8->setText(QCoreApplication::translate("userbuy", "\345\207\272\344\273\267", nullptr));
        groupBox_3->setTitle(QString());
        label_4->setText(QCoreApplication::translate("userbuy", "\344\273\213\347\273\215   ", nullptr));
        groupBox_4->setTitle(QString());
        label_6->setText(QCoreApplication::translate("userbuy", "\350\265\267\345\247\213\346\227\266\351\227\264", nullptr));
        label_9->setText(QCoreApplication::translate("userbuy", "\347\273\223\346\235\237\346\227\266\351\227\264", nullptr));
        groupBox_6->setTitle(QString());
        pushButton_2->setText(QCoreApplication::translate("userbuy", "\347\253\236\346\213\215", nullptr));
        pushButton_3->setText(QCoreApplication::translate("userbuy", "\345\217\226\346\266\210", nullptr));
        label->setText(QCoreApplication::translate("userbuy", "TextLabel", nullptr));
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class userbuy: public Ui_userbuy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERBUY_H
