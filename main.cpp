#include "demo.h"

#include <QStyle>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    demo w;
    qApp->setPalette(w.style()->standardPalette());
    qApp->setStyle("Fusion");
    qApp->setStyleSheet("");
    w.show();
    return a.exec();
}
