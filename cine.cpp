#include "cine.h"
#include "dulceria.h"
#include "ui_cine.h"
Cine::Cine(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Cine)

{
    ui->setupUi(this);
       Peliculas();
       cont=0;
       // Configurar cabecera de la tabla
       QStringList cabecera = {"ID", "Pelicula", "Duración", "Estado","ButacasOcupadas"};
       ui->outPeliculas->setColumnCount(5);
       ui->outPeliculas->setHorizontalHeaderLabels(cabecera);
       ui->outPeliculas->setStyleSheet("QTableView::item:selected { color:white; background:#000000; font-weight:900; }"
                                  "QTableCornerButton::section { background-color:#232326; }"
                                  "QHeaderView::section { color:white; background-color:#232326; }");
       QTextStream io;
       QDir actual = QDir::current();
       QString archivoPelis = actual.absolutePath() + "/debug/Peliculas.csv";
       QFile archivo(archivoPelis);
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
           ui->outPeliculas->setItem(fila,4,new QTableWidgetItem(QString::number(co.getCont())));
           ui->outPeliculas->item(fila,4)->setTextAlignment(Qt::AlignCenter);
           ui->outPeliculas->horizontalHeader()->setSectionResizeMode(4, QHeaderView::Stretch);
           ui->outPeliculas->horizontalHeader()->setStretchLastSection(QHeaderView::Stretch);
           if(nombre.size()==11){
                ui->Peli1->setText(nombre);
           }
           if(nombre.size()==22){
                ui->Peli1_2->setText(nombre);
           }
           if(nombre.size()==10){
                ui->Peli1_3->setText(nombre);
           }
           if(nombre.size()==17){
                ui->Peli1_4->setText(nombre);
           }
       }       
}


Cine::~Cine()
{
    delete ui;
}



void Cine::on_actionDulceria_triggered()
{
    Dulceria *opennew= new Dulceria();
    opennew->setWindowModality(Qt::ApplicationModal);
    opennew->show();
}


void Cine::on_pushButton_2_clicked()
{
    Widget *opennew = new Widget();
    opennew->setWindowModality(Qt::ApplicationModal);
    opennew->show();
}


void Cine::on_pushButton_clicked()
{
    Widget *opennew = new Widget();
    opennew->setWindowModality(Qt::ApplicationModal);
    opennew->show();
}

