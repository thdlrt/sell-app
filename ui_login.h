/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QGroupBox *groupBox_9;
    QHBoxLayout *horizontalLayout_9;
    QGroupBox *groupBox_10;
    QHBoxLayout *horizontalLayout_10;
    QGroupBox *groupBox_11;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_6;
    QLineEdit *user_name;
    QGroupBox *groupBox_12;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_7;
    QLineEdit *user_password;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_13;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *tab_4;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *admin_name;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *admin_password;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_5;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(703, 510);
        label = new QLabel(login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 51, 31));
        label->setSizeIncrement(QSize(600, 300));
        tabWidget = new QTabWidget(login);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 350, 600, 161));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        groupBox_9 = new QGroupBox(tab_3);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(10, 10, 571, 111));
        horizontalLayout_9 = new QHBoxLayout(groupBox_9);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        groupBox_10 = new QGroupBox(groupBox_9);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        horizontalLayout_10 = new QHBoxLayout(groupBox_10);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        groupBox_11 = new QGroupBox(groupBox_10);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        horizontalLayout_11 = new QHBoxLayout(groupBox_11);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_6 = new QLabel(groupBox_11);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_11->addWidget(label_6);

        user_name = new QLineEdit(groupBox_11);
        user_name->setObjectName(QString::fromUtf8("user_name"));

        horizontalLayout_11->addWidget(user_name);


        horizontalLayout_10->addWidget(groupBox_11);

        groupBox_12 = new QGroupBox(groupBox_10);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        horizontalLayout_12 = new QHBoxLayout(groupBox_12);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_7 = new QLabel(groupBox_12);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_12->addWidget(label_7);

        user_password = new QLineEdit(groupBox_12);
        user_password->setObjectName(QString::fromUtf8("user_password"));

        horizontalLayout_12->addWidget(user_password);


        horizontalLayout_10->addWidget(groupBox_12);


        horizontalLayout_9->addWidget(groupBox_10);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);

        groupBox_13 = new QGroupBox(groupBox_9);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        verticalLayout = new QVBoxLayout(groupBox_13);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_3 = new QPushButton(groupBox_13);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(groupBox_13);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);


        horizontalLayout_9->addWidget(groupBox_13);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        groupBox_4 = new QGroupBox(tab_4);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(30, 10, 531, 104));
        horizontalLayout_4 = new QHBoxLayout(groupBox_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        groupBox_3 = new QGroupBox(groupBox_4);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox_2 = new QGroupBox(groupBox_3);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        admin_name = new QLineEdit(groupBox_2);
        admin_name->setObjectName(QString::fromUtf8("admin_name"));

        horizontalLayout_2->addWidget(admin_name);


        horizontalLayout_3->addWidget(groupBox_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        groupBox = new QGroupBox(groupBox_3);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        admin_password = new QLineEdit(groupBox);
        admin_password->setObjectName(QString::fromUtf8("admin_password"));

        horizontalLayout->addWidget(admin_password);


        horizontalLayout_3->addWidget(groupBox);


        horizontalLayout_4->addWidget(groupBox_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pushButton = new QPushButton(groupBox_4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_4->addWidget(pushButton);

        tabWidget->addTab(tab_4, QString());
        pushButton_5 = new QPushButton(login);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(510, 320, 80, 20));

        retranslateUi(login);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "\346\213\215\345\215\226\347\263\273\347\273\237-\347\231\273\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("login", "TextLabel", nullptr));
        groupBox_9->setTitle(QString());
        groupBox_10->setTitle(QString());
        groupBox_11->setTitle(QString());
        label_6->setText(QCoreApplication::translate("login", "\347\224\250\346\210\267\345\220\215", nullptr));
        groupBox_12->setTitle(QString());
        label_7->setText(QCoreApplication::translate("login", "\345\257\206\347\240\201", nullptr));
        groupBox_13->setTitle(QString());
        pushButton_3->setText(QCoreApplication::translate("login", "\347\231\273\345\275\225", nullptr));
        pushButton_4->setText(QCoreApplication::translate("login", "\346\263\250\345\206\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("login", "\347\224\250\346\210\267\347\231\273\345\275\225", nullptr));
        groupBox_4->setTitle(QString());
        groupBox_3->setTitle(QString());
        groupBox_2->setTitle(QString());
        label_3->setText(QCoreApplication::translate("login", "\347\224\250\346\210\267\345\220\215", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("login", "\345\257\206\347\240\201", nullptr));
        pushButton->setText(QCoreApplication::translate("login", "\347\231\273\345\275\225", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("login", "\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225", nullptr));
        pushButton_5->setText(QCoreApplication::translate("login", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
