#ifndef FALSE_H
#define FALSE_H

#include <QDialog>

namespace Ui {
class false;
}

class false : public QDialog
{
    Q_OBJECT

public:
    explicit false(QWidget *parent = nullptr);
    ~false();

private:
    Ui::false *ui;
};

#endif // FALSE_H
