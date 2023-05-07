/********************************************************************************
** Form generated from reading UI file 'datacheck.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATACHECK_H
#define UI_DATACHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_datacheck
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLineEdit *lineEdit_username;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *lineEdit_password;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_phone;
    QGroupBox *groupBox_address;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_money;
    QLineEdit *lineEdit_balence;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *datacheck)
    {
        if (datacheck->objectName().isEmpty())
            datacheck->setObjectName(QString::fromUtf8("datacheck"));
        datacheck->resize(400, 442);
        verticalLayout = new QVBoxLayout(datacheck);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_5 = new QGroupBox(datacheck);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        horizontalLayout_5 = new QHBoxLayout(groupBox_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label = new QLabel(groupBox_5);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_5->addWidget(label);

        lineEdit_username = new QLineEdit(groupBox_5);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));

        horizontalLayout_5->addWidget(lineEdit_username);


        verticalLayout->addWidget(groupBox_5);

        groupBox_4 = new QGroupBox(datacheck);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        lineEdit_password = new QLineEdit(groupBox_4);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));

        horizontalLayout_4->addWidget(lineEdit_password);


        verticalLayout->addWidget(groupBox_4);

        groupBox_3 = new QGroupBox(datacheck);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_phone = new QLineEdit(groupBox_3);
        lineEdit_phone->setObjectName(QString::fromUtf8("lineEdit_phone"));

        horizontalLayout_3->addWidget(lineEdit_phone);


        verticalLayout->addWidget(groupBox_3);

        groupBox_address = new QGroupBox(datacheck);
        groupBox_address->setObjectName(QString::fromUtf8("groupBox_address"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_address);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(groupBox_address);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        plainTextEdit = new QPlainTextEdit(groupBox_address);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        horizontalLayout_2->addWidget(plainTextEdit);


        verticalLayout->addWidget(groupBox_address);

        groupBox_6 = new QGroupBox(datacheck);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        horizontalLayout_6 = new QHBoxLayout(groupBox_6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_money = new QLabel(groupBox_6);
        label_money->setObjectName(QString::fromUtf8("label_money"));

        horizontalLayout_6->addWidget(label_money);

        lineEdit_balence = new QLineEdit(groupBox_6);
        lineEdit_balence->setObjectName(QString::fromUtf8("lineEdit_balence"));
        lineEdit_balence->setReadOnly(true);

        horizontalLayout_6->addWidget(lineEdit_balence);

        pushButton = new QPushButton(groupBox_6);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_6->addWidget(pushButton);


        verticalLayout->addWidget(groupBox_6);

        groupBox_2 = new QGroupBox(datacheck);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_7 = new QHBoxLayout(groupBox_2);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_7->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_7->addWidget(pushButton_3);


        verticalLayout->addWidget(groupBox_2);


        retranslateUi(datacheck);

        QMetaObject::connectSlotsByName(datacheck);
    } // setupUi

    void retranslateUi(QDialog *datacheck)
    {
        datacheck->setWindowTitle(QCoreApplication::translate("datacheck", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        groupBox_5->setTitle(QString());
        label->setText(QCoreApplication::translate("datacheck", "\347\224\250\346\210\267\345\220\215     ", nullptr));
        groupBox_4->setTitle(QString());
        label_2->setText(QCoreApplication::translate("datacheck", "\345\257\206\347\240\201        ", nullptr));
        groupBox_3->setTitle(QString());
        label_3->setText(QCoreApplication::translate("datacheck", "\347\224\265\350\257\235\345\217\267\347\240\201 ", nullptr));
        groupBox_address->setTitle(QString());
        label_4->setText(QCoreApplication::translate("datacheck", "\345\234\260\345\235\200        ", nullptr));
        groupBox_6->setTitle(QString());
        label_money->setText(QCoreApplication::translate("datacheck", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("datacheck", "\345\205\205\345\200\274", nullptr));
        groupBox_2->setTitle(QString());
        pushButton_2->setText(QCoreApplication::translate("datacheck", "\345\217\226\346\266\210", nullptr));
        pushButton_3->setText(QCoreApplication::translate("datacheck", "\344\277\235\345\255\230\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class datacheck: public Ui_datacheck {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATACHECK_H
