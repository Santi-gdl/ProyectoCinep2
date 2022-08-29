#include "cine.h"
#include "dulceria.h"
#include "ui_cine.h"
#include "widget.h"

Cine::Cine(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Cine)

{
    ui->setupUi(this);
       Peliculas();
       cont=0;
       CrearTabla();
       IngresarPelis();
}


Cine::~Cine()
{
    delete ui;
}



void Cine::on_actionDulceria_triggered()
{

}



void Cine::on_inSala_clicked()
{
    close();
    QString A1="/Debug/AsientosOc.csv";
    QString A2="/Debug/Sala2.csv";
    QString A3="/Debug/Sala3.csv";
    QString A4="/Debug/Sala4.csv";
    QString Peli = ui->inPelis->currentText();
    int Boletos = ui->inNBol->value();
   if(Peli=="Los Minions"&& Boletos>0){
        cont=Boletos;
        Widget *opennew = new Widget(Peli,A1,Boletos);
        opennew->setWindowModality(Qt::ApplicationModal);
        opennew->show();
   }else if(Peli=="Thor: Love and Thunder"&& Boletos>0){
        cont=Boletos;
        Widget *opennew = new Widget(Peli,A2,Boletos);
        opennew->setWindowModality(Qt::ApplicationModal);
        opennew->show();

   }else if(Peli=="Lightyear "&& Boletos>0){
           cont=Boletos;
           Widget *opennew = new Widget(Peli,A3,Boletos);
           opennew->setWindowModality(Qt::ApplicationModal);
           opennew->show();

    }else if(Peli=="Top Gun: Maverick"&& Boletos>0){
       cont=Boletos;
       Widget *opennew = new Widget(Peli,A4,Boletos);
       opennew->setWindowModality(Qt::ApplicationModal);
       opennew->show();

    }else{
        QMessageBox::information(this,"Error","Debe Ingresar los boletos");
        show();
        return;
   }
   ui->inNBol->setValue(0);
}

int Cine::contarA(int F)
{
    QString A1="/Debug/AsientosOc.csv";
    QString A2="/Debug/Sala2.csv";
    QString A3="/Debug/Sala3.csv";
    QString A4="/Debug/Sala4.csv";
    QStringList direcciones={A1,A2,A3,A4};
        QTextStream io;
        QDir actual = QDir::current();
        QString archivoPelis = actual.absolutePath() + direcciones[F];
        qDebug()<<direcciones[F];
        QFile archivo(archivoPelis);
        archivo.open(QIODevice::ReadOnly | QIODevice::Text);
        if(!archivo.isOpen()){
            QMessageBox::critical(this,"Error",archivo.errorString());
        }
        io.setDevice(&archivo);
        if(F++){
            cont=0;
        }
        while(!io.atEnd()){
                auto linea = io.readLine();
                auto datos = linea.split(";");
                cont++;
            }
        return cont;
}

void Cine::CrearTabla()
{
    // Configurar cabecera de la tabla
    QStringList cabecera = {"ID", "Pelicula", "Duración", "Estado","ButacasOcupadas"};
    ui->outPeliculas->setColumnCount(5);
    ui->outPeliculas->setHorizontalHeaderLabels(cabecera);
    ui->outPeliculas->setStyleSheet("QTableView::item:selected { color:white; background:#000000; font-weight:900; }"
                               "QTableCornerButton::section { background-color:#232326; }"
                               "QHeaderView::section { color:white; background-color:#232326; }");

}

void Cine::IngresarPelis()
{
    QTextStream io;
    QDir actual = QDir::current();
    QString archivoPelis = actual.absolutePath() + "/Debug/Peliculas.csv";
    qDebug()<<archivoPelis;
    QFile archivo(archivoPelis);
    archivo.open(QIODevice::ReadOnly | QIODevice::Text);
    if(!archivo.isOpen()){
        QMessageBox::critical(this,"Error",archivo.errorString());
        return;
    }
    io.setDevice(&archivo);
    int fila = ui->outPeliculas->rowCount();
    int i=0;
    while(!io.atEnd()){
        auto linea = io.readLine();
        auto datos = linea.split(";");
        int ID = datos[0].toInt();
        QTableWidgetItem *item = new QTableWidgetItem(QString::number(ID));
        item->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QString nombre = datos[1];
        QTableWidgetItem *item2 =  new QTableWidgetItem(nombre);
        item2->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        float duracion = datos[2].toFloat();
        QTableWidgetItem *item3 =  new QTableWidgetItem(QString::number(duracion));
        item2->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        bool estado=datos[3].toInt();
        a.setEstado(estado);
        QTableWidgetItem *item4 =  new QTableWidgetItem(a.getEstado());
        item2->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        ui->outPeliculas->insertRow(fila);
        ui->outPeliculas->setItem(fila, 0, item);
        ui->outPeliculas->item(fila,0)->setTextAlignment(Qt::AlignCenter);
        ui->outPeliculas->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
        ui->outPeliculas->setItem(fila, 1,item2);
        ui->outPeliculas->item(fila,1)->setTextAlignment(Qt::AlignCenter);
        ui->outPeliculas->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
        ui->outPeliculas->setItem(fila, 2, item3);
        ui->outPeliculas->item(fila,2)->setTextAlignment(Qt::AlignCenter);
        ui->outPeliculas->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);
        ui->outPeliculas->setItem(fila, 3, item4);
        ui->outPeliculas->item(fila,3)->setTextAlignment(Qt::AlignCenter);
        ui->outPeliculas->horizontalHeader()->setSectionResizeMode(3, QHeaderView::Stretch);
        ui->outPeliculas->setItem(fila,4,new QTableWidgetItem(QString::number(contarA(i))));
        ui->outPeliculas->item(fila,4)->setTextAlignment(Qt::AlignCenter);
        ui->outPeliculas->horizontalHeader()->setSectionResizeMode(4, QHeaderView::Stretch);
        ui->outPeliculas->horizontalHeader()->setStretchLastSection(QHeaderView::Stretch);
        ui->inPelis->addItem(nombre);
        i++;
        qDebug()<<i;
    }
}


