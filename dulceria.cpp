#include "dulceria.h"
#include "ui_dulceria.h"

Dulceria::Dulceria(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Dulceria)
{
    ui->setupUi(this);
}

Dulceria::~Dulceria()
{
    delete ui;
}

void Dulceria::on_pushButton_clicked()
{
    setNombres("-Gaseosa peq,-Canguil peq");
    close();
}

const QString &Dulceria::getNombres() const
{
    return nombres;
}

void Dulceria::setNombres(const QString &newNombres)
{
    nombres = newNombres;
}

