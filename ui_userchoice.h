/********************************************************************************
** Form generated from reading UI file 'userchoice.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERCHOICE_H
#define UI_USERCHOICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_userchoice
{
public:
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *userchoice)
    {
        if (userchoice->objectName().isEmpty())
            userchoice->setObjectName("userchoice");
        userchoice->resize(400, 300);
        groupBox = new QGroupBox(userchoice);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 0, 185, 56));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(userchoice);

        QMetaObject::connectSlotsByName(userchoice);
    } // setupUi

    void retranslateUi(QDialog *userchoice)
    {
        userchoice->setWindowTitle(QCoreApplication::translate("userchoice", "\350\272\253\344\273\275\351\200\211\346\213\251", nullptr));
        groupBox->setTitle(QString());
        pushButton->setText(QCoreApplication::translate("userchoice", "\346\210\221\346\230\257\344\271\260\345\256\266", nullptr));
        pushButton_2->setText(QCoreApplication::translate("userchoice", "\346\210\221\346\230\257\345\215\226\345\256\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userchoice: public Ui_userchoice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERCHOICE_H
