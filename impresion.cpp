#include "impresion.h"
#include "ui_impresion.h"

Impresion::Impresion(QString nombre, QString NCedula, QString NTelf, QString Direc, QString Peli, int numerodeBoletos, QWidget *parent) :
    QWidget(parent),ui(new Ui::Impresion),nombre(nombre),NCedula(NCedula),NTelf(NTelf),
    Direc(Direc),nompepelicula(Peli),numerodeBoletos(numerodeBoletos)
{
    ui->setupUi(this);
    ui->plainTextEdit->insertPlainText(estadoDeImpresion(nombre));
}


Impresion::~Impresion()
{
    delete ui;
}

const QString &Impresion::getNombre() const
{
    return nombre;
}

void Impresion::setNombre(const QString &newNombre)
{
    nombre = newNombre;
}

const QString &Impresion::getNTelf() const
{
    return NTelf;
}

void Impresion::setNTelf(const QString &newNTelf)
{
    NTelf = newNTelf;
}

const QString &Impresion::getDirec() const
{
    return Direc;
}

void Impresion::setDirec(const QString &newDirec)
{
    Direc = newDirec;
}

const QString &Impresion::getNCedula() const
{
    return NCedula;
}

void Impresion::setNCedula(const QString &newNCedula)
{
    NCedula = newNCedula;
}

QString Impresion::estadoDeImpresion(QString estado)
{
    QString str;
    QDateTime date = QDateTime::currentDateTime();
    QString formattedTime = date.toString("dd.MM.yyyy hh:mm:ss");
    QByteArray formattedTimeMsg = formattedTime.toLocal8Bit();

    if(estado==""){
        str= "Cinemagic UPS\n\n"
             "Fecha y hora: "+formattedTime+"\n"
             "Cliente: CONSUMIDOR FINAL\n"
             "Direccion:S/D\n"
             "RUC/C. 9999999999999      TELF:\n"
             "CANT.PRODUCTO     P .U         P.TOT\n"
             "====================================\n"
             +QString::number(numerodeBoletos)+" "+nompepelicula+"            3.50           "+QString::number(numerodeBoletos*3.5)+"\n"
             "====================================\n"
             "Gracias por elegirnos";
    }else{
        str= "Cinemagic UPS\n\n"
             "Fecha y hora: "+formattedTime+"\n"
             "Cliente:   "+getNombre()+"\n"
             "Direccion: "+getDirec()+"\n"
             "RUC/C  "+getNCedula()+"    TELF: "+ getNTelf()+"\n"
             "CANT.PRODUCTO     P .U         P.TOT\n"+
             "====================================\n"
             +QString::number(numerodeBoletos)+" "+nompepelicula+"            3.50           "+QString::number(numerodeBoletos*3.5)+"\n"
             "====================================\n"
             "Gracias por elegirnos";
    }
    return str;
}
