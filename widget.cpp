 #include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setFixedSize(800,500);
}

Widget::~Widget()
{
    delete ui;
}


int Widget::getstate()
{
    return state;
}

