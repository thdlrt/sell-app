/********************************************************************************
** Form generated from reading UI file 'edititem.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITITEM_H
#define UI_EDITITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
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

class Ui_edititem
{
public:
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_price;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_name;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSlider *horizontalSlider_time;
    QLabel *label_timenum;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QSpinBox *spinBox_num;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QPlainTextEdit *plainTextEdit_data;
    QLabel *label_7;
    QLabel *label;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *edititem)
    {
        if (edititem->objectName().isEmpty())
            edititem->setObjectName("edititem");
        edititem->resize(600, 375);
        groupBox_6 = new QGroupBox(edititem);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setGeometry(QRect(0, 0, 300, 350));
        verticalLayout_2 = new QVBoxLayout(groupBox_6);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox_4 = new QGroupBox(groupBox_6);
        groupBox_4->setObjectName("groupBox_4");
        horizontalLayout_4 = new QHBoxLayout(groupBox_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName("label_5");

        horizontalLayout_4->addWidget(label_5);

        lineEdit_price = new QLineEdit(groupBox_4);
        lineEdit_price->setObjectName("lineEdit_price");

        horizontalLayout_4->addWidget(lineEdit_price);


        verticalLayout_2->addWidget(groupBox_4);

        groupBox = new QGroupBox(groupBox_6);
        groupBox->setObjectName("groupBox");
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        lineEdit_name = new QLineEdit(groupBox);
        lineEdit_name->setObjectName("lineEdit_name");

        horizontalLayout->addWidget(lineEdit_name);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(groupBox_6);
        groupBox_2->setObjectName("groupBox_2");
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        horizontalSlider_time = new QSlider(groupBox_2);
        horizontalSlider_time->setObjectName("horizontalSlider_time");
        horizontalSlider_time->setMaximum(20);
        horizontalSlider_time->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider_time);

        label_timenum = new QLabel(groupBox_2);
        label_timenum->setObjectName("label_timenum");

        horizontalLayout_2->addWidget(label_timenum);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox_5 = new QGroupBox(groupBox_6);
        groupBox_5->setObjectName("groupBox_5");
        horizontalLayout_5 = new QHBoxLayout(groupBox_5);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName("label_6");

        horizontalLayout_5->addWidget(label_6);

        spinBox_num = new QSpinBox(groupBox_5);
        spinBox_num->setObjectName("spinBox_num");
        spinBox_num->setMaximum(9);

        horizontalLayout_5->addWidget(spinBox_num);


        verticalLayout_2->addWidget(groupBox_5);

        groupBox_3 = new QGroupBox(groupBox_6);
        groupBox_3->setObjectName("groupBox_3");
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        plainTextEdit_data = new QPlainTextEdit(groupBox_3);
        plainTextEdit_data->setObjectName("plainTextEdit_data");

        horizontalLayout_3->addWidget(plainTextEdit_data);


        verticalLayout_2->addWidget(groupBox_3);

        label_7 = new QLabel(edititem);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(0, 0, 45, 13));
        label = new QLabel(edititem);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 45, 13));
        groupBox_7 = new QGroupBox(edititem);
        groupBox_7->setObjectName("groupBox_7");
        groupBox_7->setGeometry(QRect(450, 270, 151, 111));
        verticalLayout = new QVBoxLayout(groupBox_7);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        pushButton_3 = new QPushButton(groupBox_7);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout->addWidget(pushButton_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton = new QPushButton(groupBox_7);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(groupBox_7);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label->raise();
        label_7->raise();
        groupBox_6->raise();
        groupBox_7->raise();

        retranslateUi(edititem);

        QMetaObject::connectSlotsByName(edititem);
    } // setupUi

    void retranslateUi(QDialog *edititem)
    {
        edititem->setWindowTitle(QCoreApplication::translate("edititem", "\347\274\226\350\276\221\345\225\206\345\223\201", nullptr));
        groupBox_6->setTitle(QString());
        groupBox_4->setTitle(QString());
        label_5->setText(QCoreApplication::translate("edititem", "\344\273\267\346\240\274", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("edititem", "\345\225\206\345\223\201\345\220\215\347\247\260", nullptr));
        groupBox_2->setTitle(QString());
        label_3->setText(QCoreApplication::translate("edititem", "\346\227\266\351\225\277/\345\210\206", nullptr));
        label_timenum->setText(QCoreApplication::translate("edititem", "TextLabel", nullptr));
        groupBox_5->setTitle(QString());
        label_6->setText(QCoreApplication::translate("edititem", "\346\225\260\347\233\256", nullptr));
        groupBox_3->setTitle(QString());
        label_4->setText(QCoreApplication::translate("edititem", "\344\273\213\347\273\215", nullptr));
        label_7->setText(QString());
        label->setText(QCoreApplication::translate("edititem", "TextLabel", nullptr));
        groupBox_7->setTitle(QString());
        pushButton_3->setText(QCoreApplication::translate("edititem", "\344\270\213\346\236\266", nullptr));
        pushButton->setText(QCoreApplication::translate("edititem", "\344\277\256\346\224\271", nullptr));
        pushButton_2->setText(QCoreApplication::translate("edititem", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class edititem: public Ui_edititem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITITEM_H
