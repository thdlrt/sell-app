/********************************************************************************
** Form generated from reading UI file 'setlog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETLOG_H
#define UI_SETLOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_setlog
{
public:
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *set_name;
    QGroupBox *set_password;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *set_password2;
    QGroupBox *set_password_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *set_password3;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *setlog)
    {
        if (setlog->objectName().isEmpty())
            setlog->setObjectName(QString::fromUtf8("setlog"));
        setlog->resize(400, 300);
        groupBox_4 = new QGroupBox(setlog);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 0, 330, 210));
        horizontalLayout_3 = new QHBoxLayout(groupBox_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox_2 = new QGroupBox(groupBox_4);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(groupBox_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        set_name = new QLineEdit(groupBox);
        set_name->setObjectName(QString::fromUtf8("set_name"));

        horizontalLayout->addWidget(set_name);


        verticalLayout->addWidget(groupBox);

        set_password = new QGroupBox(groupBox_2);
        set_password->setObjectName(QString::fromUtf8("set_password"));
        horizontalLayout_2 = new QHBoxLayout(set_password);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(set_password);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        set_password2 = new QLineEdit(set_password);
        set_password2->setObjectName(QString::fromUtf8("set_password2"));

        horizontalLayout_2->addWidget(set_password2);


        verticalLayout->addWidget(set_password);

        set_password_2 = new QGroupBox(groupBox_2);
        set_password_2->setObjectName(QString::fromUtf8("set_password_2"));
        horizontalLayout_4 = new QHBoxLayout(set_password_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(set_password_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        set_password3 = new QLineEdit(set_password_2);
        set_password3->setObjectName(QString::fromUtf8("set_password3"));

        horizontalLayout_4->addWidget(set_password3);


        verticalLayout->addWidget(set_password_2);


        horizontalLayout_3->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(groupBox_4);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton_2 = new QPushButton(groupBox_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(groupBox_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);


        horizontalLayout_3->addWidget(groupBox_3);


        retranslateUi(setlog);

        QMetaObject::connectSlotsByName(setlog);
    } // setupUi

    void retranslateUi(QDialog *setlog)
    {
        setlog->setWindowTitle(QCoreApplication::translate("setlog", "\346\263\250\345\206\214", nullptr));
        groupBox_4->setTitle(QString());
        groupBox_2->setTitle(QString());
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("setlog", "  \347\224\250\346\210\267\345\220\215 ", nullptr));
        set_password->setTitle(QString());
        label_2->setText(QCoreApplication::translate("setlog", "  \345\257\206\347\240\201    ", nullptr));
        set_password_2->setTitle(QString());
        label_3->setText(QCoreApplication::translate("setlog", "\351\207\215\345\244\215\345\257\206\347\240\201", nullptr));
        groupBox_3->setTitle(QString());
        pushButton_2->setText(QCoreApplication::translate("setlog", "\350\277\224\345\233\236", nullptr));
        pushButton->setText(QCoreApplication::translate("setlog", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class setlog: public Ui_setlog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETLOG_H
