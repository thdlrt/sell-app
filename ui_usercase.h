/********************************************************************************
** Form generated from reading UI file 'usercase.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERCASE_H
#define UI_USERCASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_usercase
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QLabel *label_name;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_cid;
    QRadioButton *radioButton_cname;
    QRadioButton *radioButton_price;
    QRadioButton *radioButton_sid;
    QRadioButton *radioButton_date;
    QTableWidget *tableWidget_2;
    QWidget *tab_2;
    QTableWidget *tableWidget_3;
    QWidget *tab_3;
    QTableWidget *tableWidget_jingpai;
    QTableWidget *tableWidget_4;

    void setupUi(QDialog *usercase)
    {
        if (usercase->objectName().isEmpty())
            usercase->setObjectName(QString::fromUtf8("usercase"));
        usercase->resize(800, 600);
        label = new QLabel(usercase);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 45, 13));
        groupBox = new QGroupBox(usercase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 131, 141));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout->addWidget(pushButton_6);

        label_name = new QLabel(groupBox);
        label_name->setObjectName(QString::fromUtf8("label_name"));

        verticalLayout->addWidget(label_name);

        tabWidget = new QTabWidget(usercase);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 200, 800, 380));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, -3, 291, 51));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout->addWidget(pushButton_5);

        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(290, -13, 501, 61));
        horizontalLayout_2 = new QHBoxLayout(groupBox_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        radioButton_cid = new QRadioButton(groupBox_4);
        radioButton_cid->setObjectName(QString::fromUtf8("radioButton_cid"));

        horizontalLayout_2->addWidget(radioButton_cid);

        radioButton_cname = new QRadioButton(groupBox_4);
        radioButton_cname->setObjectName(QString::fromUtf8("radioButton_cname"));

        horizontalLayout_2->addWidget(radioButton_cname);

        radioButton_price = new QRadioButton(groupBox_4);
        radioButton_price->setObjectName(QString::fromUtf8("radioButton_price"));

        horizontalLayout_2->addWidget(radioButton_price);

        radioButton_sid = new QRadioButton(groupBox_4);
        radioButton_sid->setObjectName(QString::fromUtf8("radioButton_sid"));

        horizontalLayout_2->addWidget(radioButton_sid);

        radioButton_date = new QRadioButton(groupBox_4);
        radioButton_date->setObjectName(QString::fromUtf8("radioButton_date"));

        horizontalLayout_2->addWidget(radioButton_date);

        tableWidget_2 = new QTableWidget(tab);
        if (tableWidget_2->columnCount() < 10)
            tableWidget_2->setColumnCount(10);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font);
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font);
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font);
        tableWidget_2->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font);
        tableWidget_2->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font);
        tableWidget_2->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        tableWidget_2->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(0, 40, 800, 330));
        tableWidget_2->horizontalHeader()->setDefaultSectionSize(80);
        tabWidget->addTab(tab, QString());
        groupBox_4->raise();
        groupBox_2->raise();
        tableWidget_2->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tableWidget_3 = new QTableWidget(tab_2);
        if (tableWidget_3->columnCount() < 7)
            tableWidget_3->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setFont(font);
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setFont(font);
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setFont(font);
        tableWidget_3->setHorizontalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setFont(font);
        tableWidget_3->setHorizontalHeaderItem(3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setFont(font);
        tableWidget_3->setHorizontalHeaderItem(4, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setFont(font);
        tableWidget_3->setHorizontalHeaderItem(5, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setFont(font);
        tableWidget_3->setHorizontalHeaderItem(6, __qtablewidgetitem16);
        tableWidget_3->setObjectName(QString::fromUtf8("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(0, 0, 800, 375));
        tableWidget_3->horizontalHeader()->setDefaultSectionSize(110);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tableWidget_jingpai = new QTableWidget(tab_3);
        tableWidget_jingpai->setObjectName(QString::fromUtf8("tableWidget_jingpai"));
        tableWidget_jingpai->setGeometry(QRect(0, 0, 800, 400));
        tableWidget_4 = new QTableWidget(tab_3);
        if (tableWidget_4->columnCount() < 7)
            tableWidget_4->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setFont(font);
        tableWidget_4->setHorizontalHeaderItem(0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setFont(font);
        tableWidget_4->setHorizontalHeaderItem(1, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setFont(font);
        tableWidget_4->setHorizontalHeaderItem(2, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setFont(font);
        tableWidget_4->setHorizontalHeaderItem(3, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setFont(font);
        tableWidget_4->setHorizontalHeaderItem(4, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        __qtablewidgetitem22->setFont(font);
        tableWidget_4->setHorizontalHeaderItem(5, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        __qtablewidgetitem23->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        tableWidget_4->setHorizontalHeaderItem(6, __qtablewidgetitem23);
        tableWidget_4->setObjectName(QString::fromUtf8("tableWidget_4"));
        tableWidget_4->setGeometry(QRect(0, 0, 800, 375));
        tableWidget_4->horizontalHeader()->setDefaultSectionSize(120);
        tabWidget->addTab(tab_3, QString());

        retranslateUi(usercase);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(usercase);
    } // setupUi

    void retranslateUi(QDialog *usercase)
    {
        usercase->setWindowTitle(QCoreApplication::translate("usercase", "\344\271\260\345\256\266\347\225\214\351\235\242", nullptr));
        label->setText(QCoreApplication::translate("usercase", "TextLabel", nullptr));
        groupBox->setTitle(QString());
        pushButton->setText(QCoreApplication::translate("usercase", "\346\263\250\351\224\200\347\231\273\345\275\225", nullptr));
        pushButton_2->setText(QCoreApplication::translate("usercase", "\345\210\207\346\215\242\350\272\253\344\273\275->\345\215\226\345\256\266", nullptr));
        pushButton_3->setText(QCoreApplication::translate("usercase", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        pushButton_6->setText(QCoreApplication::translate("usercase", "\345\210\267\346\226\260", nullptr));
        label_name->setText(QCoreApplication::translate("usercase", "TextLabel", nullptr));
        groupBox_2->setTitle(QString());
        pushButton_4->setText(QCoreApplication::translate("usercase", "\345\225\206\345\223\201\346\220\234\347\264\242", nullptr));
        pushButton_5->setText(QCoreApplication::translate("usercase", "\345\215\226\345\256\266\346\220\234\347\264\242", nullptr));
        groupBox_4->setTitle(QString());
        radioButton_cid->setText(QCoreApplication::translate("usercase", "\345\225\206\345\223\201id\346\216\222\345\272\217", nullptr));
        radioButton_cname->setText(QCoreApplication::translate("usercase", "\345\220\215\347\247\260\346\216\222\345\272\217", nullptr));
        radioButton_price->setText(QCoreApplication::translate("usercase", "\344\273\267\351\222\261\346\216\222\345\272\217", nullptr));
        radioButton_sid->setText(QCoreApplication::translate("usercase", "\345\215\226\345\256\266id\346\216\222\345\272\217", nullptr));
        radioButton_date->setText(QCoreApplication::translate("usercase", "\346\227\245\346\234\237\346\216\222\345\272\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("usercase", "\345\225\206\345\223\201id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("usercase", "\345\225\206\345\223\201\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("usercase", "\344\273\267\351\222\261", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("usercase", "\346\225\260\347\233\256", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("usercase", "\346\217\217\350\277\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("usercase", "\345\215\226\345\256\266id", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("usercase", "\345\274\200\345\247\213\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("usercase", "\346\210\252\346\255\242\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_2->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("usercase", "\347\212\266\346\200\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("usercase", "\347\253\236\346\213\215", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("usercase", "\345\225\206\345\223\201\344\277\241\346\201\257", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("usercase", "\350\256\242\345\215\225\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("usercase", "\345\225\206\345\223\201id", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_3->horizontalHeaderItem(2);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("usercase", "\346\210\220\344\272\244\344\273\267\346\240\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_3->horizontalHeaderItem(3);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("usercase", "\346\225\260\347\233\256", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_3->horizontalHeaderItem(4);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("usercase", "\346\227\245\346\234\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_3->horizontalHeaderItem(5);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("usercase", "\345\215\226\345\256\266id", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_3->horizontalHeaderItem(6);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("usercase", "\344\271\260\345\256\266id", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("usercase", "\350\256\242\345\215\225\344\277\241\346\201\257", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_4->horizontalHeaderItem(0);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("usercase", "\347\253\236\346\213\215id", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_4->horizontalHeaderItem(1);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("usercase", "\345\225\206\345\223\201id", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_4->horizontalHeaderItem(2);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("usercase", "\345\225\206\345\223\201\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_4->horizontalHeaderItem(3);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("usercase", "\345\207\272\344\273\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_4->horizontalHeaderItem(4);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("usercase", "\346\210\252\346\255\242\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget_4->horizontalHeaderItem(5);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("usercase", "\347\253\236\346\213\215\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget_4->horizontalHeaderItem(6);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("usercase", "\344\277\256\346\224\271", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("usercase", "\347\253\236\346\213\215\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class usercase: public Ui_usercase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERCASE_H
