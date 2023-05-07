/********************************************************************************
** Form generated from reading UI file 'moneyfinish.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONEYFINISH_H
#define UI_MONEYFINISH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_moneyfinish
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *moneyfinish)
    {
        if (moneyfinish->objectName().isEmpty())
            moneyfinish->setObjectName("moneyfinish");
        moneyfinish->resize(200, 150);
        pushButton = new QPushButton(moneyfinish);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 120, 200, 30));
        label = new QLabel(moneyfinish);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 45, 13));

        retranslateUi(moneyfinish);

        QMetaObject::connectSlotsByName(moneyfinish);
    } // setupUi

    void retranslateUi(QDialog *moneyfinish)
    {
        moneyfinish->setWindowTitle(QCoreApplication::translate("moneyfinish", "\345\205\205\345\200\274\346\210\220\345\212\237", nullptr));
        pushButton->setText(QCoreApplication::translate("moneyfinish", "\345\205\263\351\227\255", nullptr));
        label->setText(QCoreApplication::translate("moneyfinish", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class moneyfinish: public Ui_moneyfinish {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONEYFINISH_H
