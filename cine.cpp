#include "cine.h"
#include "ui_cine.h"

Cine::Cine(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Cine)

{
    ui->setupUi(this);
    Peliculas();
    // Configurar cabecera de la tabla
    QStringList cabecera = {"ID", "Pelicula", "Duración", "Estado"};
    ui->outPeliculas->setColumnCount(4);
    ui->outPeliculas->setHorizontalHeaderLabels(cabecera);
    QTextStream io;
    QFile archivo;
    io.setDevice(&archivo);
    int fila = ui->outPeliculas->rowCount();
    while(!io.atEnd()){
        auto linea = io.readLine();
        auto datos = linea.split(";");

        int ID = datos[0].toInt();
        QString nombre = datos[1];
        float duracion = datos[2].toFloat();
        bool estado;
        estado = datos[3].toInt();
        m_peliculas.append(new Peliculas(ID, nombre, duracion, estado));
        ui->outPeliculas->insertRow(fila);
        ui->outPeliculas->setItem(fila, 0, new QTableWidgetItem(QString::number(ID)));
        ui->outPeliculas->setItem(fila, 1, new QTableWidgetItem(nombre));
        ui->outPeliculas->setItem(fila, 2, new QTableWidgetItem(QString::number(duracion)));
        ui->outPeliculas->setItem(fila, 3, new QTableWidgetItem(QString::number(estado)));
    }
}


Cine::~Cine()
{
    delete ui;
}


void Cine::Pelicula()
{
    ui->Peli1->setText("Los Minios");
    ui->Peli1_2->setText("Thor love and thunder");
    ui->Peli1_3->setText("Lightyear");
    ui->Peli1_4->setText("TOP GUN MAVERICK");
}

