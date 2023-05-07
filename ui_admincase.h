/********************************************************************************
** Form generated from reading UI file 'admincase.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINCASE_H
#define UI_ADMINCASE_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admincase
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *tableWidget;
    QWidget *tab_2;
    QTableWidget *tableWidget_2;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_cid;
    QRadioButton *radioButton_cname;
    QRadioButton *radioButton_price;
    QRadioButton *radioButton_sid;
    QRadioButton *radioButton_date;
    QWidget *tab_3;
    QTableWidget *tableWidget_3;
    QWidget *tab_4;
    QTableWidget *tableWidget_4;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_4;

    void setupUi(QDialog *admincase)
    {
        if (admincase->objectName().isEmpty())
            admincase->setObjectName(QString::fromUtf8("admincase"));
        admincase->resize(800, 500);
        tabWidget = new QTabWidget(admincase);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 200, 800, 400));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tableWidget = new QTableWidget(tab);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font);
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font);
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 800, 380));
        tableWidget->horizontalHeader()->setDefaultSectionSize(122);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tableWidget_2 = new QTableWidget(tab_2);
        if (tableWidget_2->columnCount() < 10)
            tableWidget_2->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font);
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font);
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setFont(font);
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setFont(font);
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setFont(font);
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setFont(font);
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setFont(font);
        tableWidget_2->setHorizontalHeaderItem(6, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setFont(font);
        tableWidget_2->setHorizontalHeaderItem(7, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setFont(font);
        tableWidget_2->setHorizontalHeaderItem(8, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        tableWidget_2->setHorizontalHeaderItem(9, __qtablewidgetitem16);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(0, 50, 800, 330));
        tableWidget_2->horizontalHeader()->setDefaultSectionSize(81);
        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(-10, -13, 801, 81));
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox = new QGroupBox(groupBox_3);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);


        horizontalLayout_3->addWidget(groupBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        groupBox_2 = new QGroupBox(groupBox_3);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        radioButton_cid = new QRadioButton(groupBox_2);
        radioButton_cid->setObjectName(QString::fromUtf8("radioButton_cid"));

        horizontalLayout_2->addWidget(radioButton_cid);

        radioButton_cname = new QRadioButton(groupBox_2);
        radioButton_cname->setObjectName(QString::fromUtf8("radioButton_cname"));

        horizontalLayout_2->addWidget(radioButton_cname);

        radioButton_price = new QRadioButton(groupBox_2);
        radioButton_price->setObjectName(QString::fromUtf8("radioButton_price"));

        horizontalLayout_2->addWidget(radioButton_price);

        radioButton_sid = new QRadioButton(groupBox_2);
        radioButton_sid->setObjectName(QString::fromUtf8("radioButton_sid"));

        horizontalLayout_2->addWidget(radioButton_sid);

        radioButton_date = new QRadioButton(groupBox_2);
        radioButton_date->setObjectName(QString::fromUtf8("radioButton_date"));

        horizontalLayout_2->addWidget(radioButton_date);


        horizontalLayout_3->addWidget(groupBox_2);

        groupBox_2->raise();
        groupBox->raise();
        tabWidget->addTab(tab_2, QString());
        groupBox_3->raise();
        tableWidget_2->raise();
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tableWidget_3 = new QTableWidget(tab_3);
        if (tableWidget_3->columnCount() < 7)
            tableWidget_3->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setFont(font);
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setFont(font);
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setFont(font);
        tableWidget_3->setHorizontalHeaderItem(2, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setFont(font);
        tableWidget_3->setHorizontalHeaderItem(3, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setFont(font);
        tableWidget_3->setHorizontalHeaderItem(4, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        __qtablewidgetitem22->setFont(font);
        tableWidget_3->setHorizontalHeaderItem(5, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        __qtablewidgetitem23->setFont(font);
        tableWidget_3->setHorizontalHeaderItem(6, __qtablewidgetitem23);
        tableWidget_3->setObjectName(QString::fromUtf8("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(0, 0, 800, 380));
        tableWidget_3->horizontalHeader()->setDefaultSectionSize(110);
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tableWidget_4 = new QTableWidget(tab_4);
        if (tableWidget_4->columnCount() < 8)
            tableWidget_4->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        __qtablewidgetitem24->setFont(font);
        tableWidget_4->setHorizontalHeaderItem(0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        __qtablewidgetitem25->setFont(font);
        tableWidget_4->setHorizontalHeaderItem(1, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        __qtablewidgetitem26->setFont(font);
        tableWidget_4->setHorizontalHeaderItem(2, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        __qtablewidgetitem27->setFont(font);
        tableWidget_4->setHorizontalHeaderItem(3, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        __qtablewidgetitem28->setFont(font);
        tableWidget_4->setHorizontalHeaderItem(4, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        __qtablewidgetitem29->setFont(font);
        tableWidget_4->setHorizontalHeaderItem(5, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        __qtablewidgetitem30->setFont(font);
        tableWidget_4->setHorizontalHeaderItem(6, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        __qtablewidgetitem31->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        tableWidget_4->setHorizontalHeaderItem(7, __qtablewidgetitem31);
        tableWidget_4->setObjectName(QString::fromUtf8("tableWidget_4"));
        tableWidget_4->setGeometry(QRect(0, 0, 800, 380));
        tableWidget_4->horizontalHeader()->setDefaultSectionSize(102);
        tabWidget->addTab(tab_4, QString());
        label = new QLabel(admincase);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 45, 13));
        pushButton = new QPushButton(admincase);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 80, 20));
        pushButton_4 = new QPushButton(admincase);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 40, 80, 20));

        retranslateUi(admincase);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(admincase);
    } // setupUi

    void retranslateUi(QDialog *admincase)
    {
        admincase->setWindowTitle(QCoreApplication::translate("admincase", "\347\256\241\347\220\206\345\221\230\347\225\214\351\235\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("admincase", "\347\224\250\346\210\267id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("admincase", "\347\224\250\346\210\267\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("admincase", "\350\201\224\347\263\273\346\226\271\345\274\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("admincase", "\345\234\260\345\235\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("admincase", "\344\275\231\351\242\235", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("admincase", "\347\212\266\346\200\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("admincase", "\350\256\276\347\275\256", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("admincase", "\347\224\250\346\210\267\344\277\241\346\201\257", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("admincase", "\345\225\206\345\223\201id", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("admincase", "\345\225\206\345\223\201\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("admincase", "\344\273\267\351\222\261", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("admincase", "\346\225\260\347\233\256", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("admincase", "\346\217\217\350\277\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("admincase", "\345\215\226\345\256\266id", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_2->horizontalHeaderItem(6);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("admincase", "\345\274\200\345\247\213\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_2->horizontalHeaderItem(7);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("admincase", "\346\210\252\350\207\263\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_2->horizontalHeaderItem(8);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("admincase", "\347\212\266\346\200\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_2->horizontalHeaderItem(9);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("admincase", "\350\256\276\347\275\256", nullptr));
        groupBox_3->setTitle(QString());
        groupBox->setTitle(QString());
        pushButton_2->setText(QCoreApplication::translate("admincase", "\345\225\206\345\223\201\346\220\234\347\264\242", nullptr));
        pushButton_3->setText(QCoreApplication::translate("admincase", "\345\215\226\345\256\266\346\220\234\347\264\242", nullptr));
        groupBox_2->setTitle(QString());
        radioButton_cid->setText(QCoreApplication::translate("admincase", "\345\225\206\345\223\201id\346\216\222\345\272\217", nullptr));
        radioButton_cname->setText(QCoreApplication::translate("admincase", "\345\220\215\347\247\260\346\216\222\345\272\217", nullptr));
        radioButton_price->setText(QCoreApplication::translate("admincase", "\344\273\267\351\222\261\346\216\222\345\272\217", nullptr));
        radioButton_sid->setText(QCoreApplication::translate("admincase", "\345\215\226\345\256\266id\346\216\222\345\272\217", nullptr));
        radioButton_date->setText(QCoreApplication::translate("admincase", "\346\227\245\346\234\237\346\216\222\345\272\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("admincase", "\345\225\206\345\223\201\344\277\241\346\201\257", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("admincase", "\350\256\242\345\215\225\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("admincase", "\345\225\206\345\223\201id", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_3->horizontalHeaderItem(2);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("admincase", "\346\210\220\344\272\244\344\273\267\346\240\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_3->horizontalHeaderItem(3);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("admincase", "\346\225\260\347\233\256", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_3->horizontalHeaderItem(4);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("admincase", "\346\227\245\346\234\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget_3->horizontalHeaderItem(5);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("admincase", "\345\215\226\345\256\266id", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget_3->horizontalHeaderItem(6);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("admincase", "\344\271\260\345\256\266id", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("admincase", "\350\256\242\345\215\225\344\277\241\346\201\257", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget_4->horizontalHeaderItem(0);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("admincase", "\347\253\236\346\213\215id", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget_4->horizontalHeaderItem(1);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("admincase", "\345\225\206\345\223\201id", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget_4->horizontalHeaderItem(2);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("admincase", "\344\271\260\345\256\266id", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget_4->horizontalHeaderItem(3);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("admincase", "\345\225\206\345\223\201\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget_4->horizontalHeaderItem(4);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("admincase", "\345\207\272\344\273\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget_4->horizontalHeaderItem(5);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("admincase", "\346\210\252\346\255\242\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget_4->horizontalHeaderItem(6);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("admincase", "\347\253\236\346\213\215\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget_4->horizontalHeaderItem(7);
        ___qtablewidgetitem31->setText(QCoreApplication::translate("admincase", "\350\256\276\347\275\256", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("admincase", "\347\253\236\346\213\215\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("admincase", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("admincase", "\346\263\250\351\224\200\347\231\273\345\275\225", nullptr));
        pushButton_4->setText(QCoreApplication::translate("admincase", "\345\210\267\346\226\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admincase: public Ui_admincase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINCASE_H
