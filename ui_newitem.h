/********************************************************************************
** Form generated from reading UI file 'newitem.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWITEM_H
#define UI_NEWITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_newitem
{
public:
    QLabel *label;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_price;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QPlainTextEdit *plainTextEdit_data;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QSpinBox *spinBox_num;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_name;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSlider *horizontalSlider_time;
    QLabel *label_timenum;
    QLabel *label_7;

    void setupUi(QDialog *newitem)
    {
        if (newitem->objectName().isEmpty())
            newitem->setObjectName(QString::fromUtf8("newitem"));
        newitem->resize(600, 375);
        label = new QLabel(newitem);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 45, 13));
        groupBox_6 = new QGroupBox(newitem);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(40, 135, 500, 230));
        gridLayout = new QGridLayout(groupBox_6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_4 = new QGroupBox(groupBox_6);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        lineEdit_price = new QLineEdit(groupBox_4);
        lineEdit_price->setObjectName(QString::fromUtf8("lineEdit_price"));

        horizontalLayout_4->addWidget(lineEdit_price);


        gridLayout->addWidget(groupBox_4, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(groupBox_6);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        plainTextEdit_data = new QPlainTextEdit(groupBox_3);
        plainTextEdit_data->setObjectName(QString::fromUtf8("plainTextEdit_data"));

        horizontalLayout_3->addWidget(plainTextEdit_data);


        gridLayout->addWidget(groupBox_3, 2, 0, 1, 1);

        groupBox_5 = new QGroupBox(groupBox_6);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        horizontalLayout_5 = new QHBoxLayout(groupBox_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        spinBox_num = new QSpinBox(groupBox_5);
        spinBox_num->setObjectName(QString::fromUtf8("spinBox_num"));
        spinBox_num->setMaximum(99);

        horizontalLayout_5->addWidget(spinBox_num);


        gridLayout->addWidget(groupBox_5, 1, 0, 1, 1);

        groupBox = new QGroupBox(groupBox_6);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_name = new QLineEdit(groupBox);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));

        horizontalLayout->addWidget(lineEdit_name);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_7 = new QGroupBox(groupBox_6);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        verticalLayout = new QVBoxLayout(groupBox_7);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton = new QPushButton(groupBox_7);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(groupBox_7);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        gridLayout->addWidget(groupBox_7, 2, 1, 1, 1);

        groupBox_2 = new QGroupBox(groupBox_6);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        horizontalSlider_time = new QSlider(groupBox_2);
        horizontalSlider_time->setObjectName(QString::fromUtf8("horizontalSlider_time"));
        horizontalSlider_time->setMaximum(20);
        horizontalSlider_time->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider_time);

        label_timenum = new QLabel(groupBox_2);
        label_timenum->setObjectName(QString::fromUtf8("label_timenum"));

        horizontalLayout_2->addWidget(label_timenum);


        gridLayout->addWidget(groupBox_2, 1, 1, 1, 1);

        label_7 = new QLabel(newitem);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 135, 45, 45));
        label->raise();
        label_7->raise();
        groupBox_6->raise();

        retranslateUi(newitem);

        QMetaObject::connectSlotsByName(newitem);
    } // setupUi

    void retranslateUi(QDialog *newitem)
    {
        newitem->setWindowTitle(QCoreApplication::translate("newitem", "\345\217\221\345\270\203\345\225\206\345\223\201", nullptr));
        label->setText(QCoreApplication::translate("newitem", "TextLabel", nullptr));
        groupBox_6->setTitle(QString());
        groupBox_4->setTitle(QString());
        label_5->setText(QCoreApplication::translate("newitem", "\344\273\267\346\240\274", nullptr));
        groupBox_3->setTitle(QString());
        label_4->setText(QCoreApplication::translate("newitem", "\344\273\213\347\273\215", nullptr));
        groupBox_5->setTitle(QString());
        label_6->setText(QCoreApplication::translate("newitem", "\346\225\260\347\233\256", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("newitem", "\345\225\206\345\223\201\345\220\215\347\247\260", nullptr));
        groupBox_7->setTitle(QString());
        pushButton->setText(QCoreApplication::translate("newitem", "\345\217\221\345\270\203", nullptr));
        pushButton_2->setText(QCoreApplication::translate("newitem", "\345\217\226\346\266\210", nullptr));
        groupBox_2->setTitle(QString());
        label_3->setText(QCoreApplication::translate("newitem", "\346\227\266\351\225\277/\345\210\206", nullptr));
        label_timenum->setText(QCoreApplication::translate("newitem", "TextLabel", nullptr));
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class newitem: public Ui_newitem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWITEM_H
