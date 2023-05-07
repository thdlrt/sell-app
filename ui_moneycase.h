/********************************************************************************
** Form generated from reading UI file 'moneycase.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONEYCASE_H
#define UI_MONEYCASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_moneycase
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *moneycase)
    {
        if (moneycase->objectName().isEmpty())
            moneycase->setObjectName("moneycase");
        moneycase->resize(179, 80);
        formLayout = new QFormLayout(moneycase);
        formLayout->setObjectName("formLayout");
        label = new QLabel(moneycase);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(moneycase);
        lineEdit->setObjectName("lineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        pushButton_2 = new QPushButton(moneycase);
        pushButton_2->setObjectName("pushButton_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, pushButton_2);

        pushButton = new QPushButton(moneycase);
        pushButton->setObjectName("pushButton");

        formLayout->setWidget(1, QFormLayout::FieldRole, pushButton);


        retranslateUi(moneycase);

        QMetaObject::connectSlotsByName(moneycase);
    } // setupUi

    void retranslateUi(QDialog *moneycase)
    {
        moneycase->setWindowTitle(QCoreApplication::translate("moneycase", "\345\205\205\345\200\274", nullptr));
        label->setText(QCoreApplication::translate("moneycase", "\345\205\205\345\200\274\351\207\221\351\242\235", nullptr));
        pushButton_2->setText(QCoreApplication::translate("moneycase", "\345\205\205\345\200\274", nullptr));
        pushButton->setText(QCoreApplication::translate("moneycase", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class moneycase: public Ui_moneycase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONEYCASE_H
