/********************************************************************************
** Form generated from reading UI file 'addmoney.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMONEY_H
#define UI_ADDMONEY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_addmoney
{
public:
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_from;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_leftmoney;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_after;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *addmoney)
    {
        if (addmoney->objectName().isEmpty())
            addmoney->setObjectName("addmoney");
        addmoney->resize(300, 200);
        groupBox_3 = new QGroupBox(addmoney);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(10, 10, 181, 171));
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(groupBox_3);
        groupBox->setObjectName("groupBox");
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit_from = new QLineEdit(groupBox);
        lineEdit_from->setObjectName("lineEdit_from");

        horizontalLayout->addWidget(lineEdit_from);


        verticalLayout->addWidget(groupBox);

        groupBox_5 = new QGroupBox(groupBox_3);
        groupBox_5->setObjectName("groupBox_5");
        horizontalLayout_3 = new QHBoxLayout(groupBox_5);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        lineEdit_leftmoney = new QLineEdit(groupBox_5);
        lineEdit_leftmoney->setObjectName("lineEdit_leftmoney");

        horizontalLayout_3->addWidget(lineEdit_leftmoney);


        verticalLayout->addWidget(groupBox_5);

        groupBox_2 = new QGroupBox(groupBox_3);
        groupBox_2->setObjectName("groupBox_2");
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lineEdit_after = new QLineEdit(groupBox_2);
        lineEdit_after->setObjectName("lineEdit_after");

        horizontalLayout_2->addWidget(lineEdit_after);


        verticalLayout->addWidget(groupBox_2);

        groupBox_4 = new QGroupBox(addmoney);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(200, 77, 100, 121));
        verticalLayout_2 = new QVBoxLayout(groupBox_4);
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton_3 = new QPushButton(groupBox_4);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(groupBox_4);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout_2->addWidget(pushButton_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        pushButton = new QPushButton(groupBox_4);
        pushButton->setObjectName("pushButton");

        verticalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(groupBox_4);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout_2->addWidget(pushButton_2);


        retranslateUi(addmoney);

        QMetaObject::connectSlotsByName(addmoney);
    } // setupUi

    void retranslateUi(QDialog *addmoney)
    {
        addmoney->setWindowTitle(QCoreApplication::translate("addmoney", "\345\212\240\344\273\267", nullptr));
        groupBox_3->setTitle(QString());
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("addmoney", "\345\216\237\351\207\221\351\242\235", nullptr));
        groupBox_5->setTitle(QString());
        label_3->setText(QCoreApplication::translate("addmoney", "\344\275\231\351\242\235   ", nullptr));
        groupBox_2->setTitle(QString());
        label_2->setText(QCoreApplication::translate("addmoney", "\346\226\260\351\207\221\351\242\235", nullptr));
        groupBox_4->setTitle(QString());
        pushButton_3->setText(QCoreApplication::translate("addmoney", "\345\205\205\345\200\274", nullptr));
        pushButton_4->setText(QCoreApplication::translate("addmoney", "\345\217\226\346\266\210\347\253\236\346\213\215", nullptr));
        pushButton->setText(QCoreApplication::translate("addmoney", "\347\241\256\350\256\244", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addmoney", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addmoney: public Ui_addmoney {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMONEY_H
