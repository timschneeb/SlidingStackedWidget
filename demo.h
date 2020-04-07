#ifndef DEMO_H
#define DEMO_H

#include <QDialog>

namespace Ui {
class demo;
}

class demo : public QDialog
{
    Q_OBJECT

public:
    explicit demo(QWidget *parent = nullptr);
    ~demo();

private:
    Ui::demo *ui;
};

#endif // DEMO_H
