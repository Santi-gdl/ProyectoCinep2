#include "cine.h"
#include "ui_cine.h"
Cine::Cine(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Cine)

{
    ui->setupUi(this);
    Peliculas();
    // Configurar cabecera de la tabla
    QString nombreArchivo="/ProyectoCinep2/Peliculas.csv";
    QStringList cabecera = {"ID", "Pelicula", "Duración", "Estado"};
    ui->outPeliculas->setColumnCount(4);
    ui->outPeliculas->setHorizontalHeaderLabels(cabecera);
    QTextStream io;
    QFile archivo;
    archivo.setFileName(nombreArchivo);
    archivo.open(QIODevice::ReadOnly | QIODevice::Text);
    if(!archivo.isOpen()){
        QMessageBox::critical(this,"Error",archivo.errorString());
        return;
    }
    io.setDevice(&archivo);
    int fila = ui->outPeliculas->rowCount();
    while(!io.atEnd()){
        auto linea = io.readLine();
        auto datos = linea.split(";");
        qDebug()<<datos;
        int ID = datos[0].toInt();
        QString nombre = datos[1];
        float duracion = datos[2].toFloat();
        bool estado=datos[3].toInt();
        Peliculas a;
        a.setEstado(estado);
        ui->outPeliculas->insertRow(fila);
        ui->outPeliculas->setItem(fila, 0, new QTableWidgetItem(QString::number(ID)));
        ui->outPeliculas->setItem(fila, 1, new QTableWidgetItem(nombre));
        ui->outPeliculas->setItem(fila, 2, new QTableWidgetItem(QString::number(duracion)));
        ui->outPeliculas->setItem(fila, 3, new QTableWidgetItem(a.getEstado()));
        ui->outPeliculas->adjustSize();
    }
}


Cine::~Cine()
{
    delete ui;
}


void Cine::Pelicula()
{
    ui->Peli1->setText("LM");
    ui->Peli1_2->setText("S");
    ui->Peli1_3->setText("l");
    ui->Peli1_4->setText("i");
}

