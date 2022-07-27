#include "cine.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator T;
    QStringList langs;
    langs<<"Espanol"<<"Italiano";
    const QString lang = QInputDialog::getItem(NULL,
                                               "Language",
                                               "Select a Language",
                                               langs);

    if (lang == "Italiano"){
        T.load(":/Cine_it.qm");
        a.installTranslator(&T);
    }
    Cine w;
    w.show();
    return a.exec();
}
