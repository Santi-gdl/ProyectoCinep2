#include "dulceria.h"
#include "ui_dulceria.h"

Dulceria::Dulceria(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Dulceria)
{
    ui->setupUi(this);
    Acceder=false;
    setNombres("Combo1");
}

Dulceria::~Dulceria()
{
    delete ui;
}


bool Dulceria::getAcceder() const
{
    return Acceder;
}

void Dulceria::setAcceder(bool newAcceder)
{
    Acceder = newAcceder;
}

const QString &Dulceria::getNombres() const
{
    return nombres;
}

void Dulceria::setNombres(const QString &newNombres)
{
    nombres = newNombres;
}
void Dulceria::on_Accept_clicked()
{
    setAcceder(true);
    close();
}

