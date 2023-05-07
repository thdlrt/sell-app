/********************************************************************************
** Form generated from reading UI file 'salecase.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALECASE_H
#define UI_SALECASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_salecase
{
public:
    QLabel *label;
    QLabel *label_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QLabel *label_name;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton_4;
    QTableWidget *tableWidget_2;
    QWidget *tab_2;
    QTableWidget *tableWidget_3;

    void setupUi(QDialog *salecase)
    {
        if (salecase->objectName().isEmpty())
            salecase->setObjectName(QString::fromUtf8("salecase"));
        salecase->resize(800, 600);
        label = new QLabel(salecase);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 0, 0));
        label_2 = new QLabel(salecase);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 45, 13));
        groupBox = new QGroupBox(salecase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 121, 141));
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

        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        label_name = new QLabel(groupBox);
        label_name->setObjectName(QString::fromUtf8("label_name"));

        verticalLayout->addWidget(label_name);

        tabWidget = new QTabWidget(salecase);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 200, 800, 400));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 10, 80, 20));
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

        retranslateUi(salecase);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(salecase);
    } // setupUi

    void retranslateUi(QDialog *salecase)
    {
        salecase->setWindowTitle(QCoreApplication::translate("salecase", "\345\215\226\345\256\266\347\225\214\351\235\242", nullptr));
        label->setText(QCoreApplication::translate("salecase", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("salecase", "TextLabel", nullptr));
        groupBox->setTitle(QString());
        pushButton->setText(QCoreApplication::translate("salecase", "\346\263\250\351\224\200\347\231\273\345\275\225", nullptr));
        pushButton_2->setText(QCoreApplication::translate("salecase", "\345\210\207\346\215\242\350\272\253\344\273\275->\344\271\260\345\256\266", nullptr));
        pushButton_3->setText(QCoreApplication::translate("salecase", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        pushButton_5->setText(QCoreApplication::translate("salecase", "\345\210\267\346\226\260", nullptr));
        label_name->setText(QCoreApplication::translate("salecase", "TextLabel", nullptr));
        pushButton_4->setText(QCoreApplication::translate("salecase", "\345\217\221\345\270\203\345\225\206\345\223\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("salecase", "\345\225\206\345\223\201id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("salecase", "\345\225\206\345\223\201\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("salecase", "\344\273\267\351\222\261", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("salecase", "\346\225\260\347\233\256", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("salecase", "\346\217\217\350\277\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("salecase", "\345\215\226\345\256\266id", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("salecase", "\345\274\200\345\247\213\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("salecase", "\346\210\252\350\207\263\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_2->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("salecase", "\347\212\266\346\200\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("salecase", "\350\256\276\347\275\256", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("salecase", "\345\225\206\345\223\201\344\277\241\346\201\257", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("salecase", "\350\256\242\345\215\225\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("salecase", "\345\225\206\345\223\201id", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_3->horizontalHeaderItem(2);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("salecase", "\346\210\220\344\272\244\344\273\267\346\240\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_3->horizontalHeaderItem(3);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("salecase", "\346\225\260\347\233\256", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_3->horizontalHeaderItem(4);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("salecase", "\346\227\245\346\234\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_3->horizontalHeaderItem(5);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("salecase", "\345\215\226\345\256\266id", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_3->horizontalHeaderItem(6);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("salecase", "\344\271\260\345\256\266id", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("salecase", "\350\256\242\345\215\225\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class salecase: public Ui_salecase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALECASE_H
