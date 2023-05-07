/********************************************************************************
** Form generated from reading UI file 'fale.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FALE_H
#define UI_FALE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_fale
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QDialog *fale)
    {
        if (fale->objectName().isEmpty())
            fale->setObjectName("fale");
        fale->resize(300, 190);
        pushButton = new QPushButton(fale);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 170, 300, 20));
        lineEdit = new QLineEdit(fale);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(50, 140, 201, 21));
        lineEdit->setLayoutDirection(Qt::LeftToRight);
        lineEdit->setAlignment(Qt::AlignCenter);
        label = new QLabel(fale);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 45, 13));
        label->raise();
        pushButton->raise();
        lineEdit->raise();

        retranslateUi(fale);

        QMetaObject::connectSlotsByName(fale);
    } // setupUi

    void retranslateUi(QDialog *fale)
    {
        fale->setWindowTitle(QCoreApplication::translate("fale", "\345\244\261\350\264\245", nullptr));
        pushButton->setText(QCoreApplication::translate("fale", "\347\241\256\345\256\232", nullptr));
        label->setText(QCoreApplication::translate("fale", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fale: public Ui_fale {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FALE_H
