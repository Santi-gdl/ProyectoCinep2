#include "cine.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Cine w;
    w.show();
    return a.exec();
}
