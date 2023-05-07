/********************************************************************************
** Form generated from reading UI file 'buyfinish.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUYFINISH_H
#define UI_BUYFINISH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_buyfinish
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *buyfinish)
    {
        if (buyfinish->objectName().isEmpty())
            buyfinish->setObjectName("buyfinish");
        buyfinish->resize(200, 150);
        label = new QLabel(buyfinish);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 45, 13));
        pushButton = new QPushButton(buyfinish);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 125, 200, 20));

        retranslateUi(buyfinish);

        QMetaObject::connectSlotsByName(buyfinish);
    } // setupUi

    void retranslateUi(QDialog *buyfinish)
    {
        buyfinish->setWindowTitle(QCoreApplication::translate("buyfinish", "\347\253\236\346\213\215\346\210\220\345\212\237", nullptr));
        label->setText(QCoreApplication::translate("buyfinish", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("buyfinish", "\345\256\214\346\210\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class buyfinish: public Ui_buyfinish {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUYFINISH_H
