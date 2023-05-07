#include "false.h"
#include "ui_false.h"

false::false(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::false)
{
    ui->setupUi(this);
}

false::~false()
{
delete ui;
}
