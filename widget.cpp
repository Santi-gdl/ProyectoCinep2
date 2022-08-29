#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
#include <QDebug>

Widget::Widget()
{

}

Widget::Widget(QString A, QString dire, int B, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    guardar=false;
    Nombre=A;
    Direc=dire;
    Boletos=B;
    bol=B;
    ui->setupUi(this);
    cont=0;
    i=0;
    ui->Ptot->setText(QString::number(B*3.5));
    QStringList tituloColumna;
    int fila = ui->tableWidget->rowCount();
    int Colum =ui->tableWidget->columnCount();
    tituloColumna<<"A"<<"B"<<"C"<<"D"<<"E"<<"F";
    setWindowTitle(A);
    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->setRowCount(5);
    ui->tableWidget->setVerticalHeaderLabels(tituloColumna);
    for(int i=0;i<=5;i++){
        ui->tableWidget->setItem(fila, Colum,new QTableWidgetItem);
        ui->tableWidget->item(fila, Colum)->setIcon(QIcon(":/ProyectoCinep2/Peliculas/Peliculas/estados/Recurso 2@2x.png"));
        ui->tableWidget->item(fila, Colum)->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        ui->tableWidget->horizontalHeader()->setStretchLastSection(QHeaderView::Stretch);
           Colum++;
        if(Colum==5){
                i=0;
                Colum=0;
                fila++;
                if(fila==5){
                    break;
                }
            }
    }
    ui->tableWidget->setIconSize(QSize(30,30));
    ui->tableWidget->setStyleSheet("QTableView::item:selected { color:white; font-weight:900; }"
                               "QTableCornerButton::section { background-color:#232326; }"
                               "QHeaderView::section { color:white; background-color:#232326; }");
    ButacasDeArc();
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_tableWidget_cellClicked(int row, int column)
{
    QTableWidgetItem *items =  new QTableWidgetItem;
    items->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    if(Boletos==0){
        QMessageBox::information(this,"Error","ya ha seleccionado sus butacas");
    }else if(Asientos[row][column]!=1){
        ui->tableWidget->setItem(row, column,items);
        ui->tableWidget->item(row, column)->setIcon(QIcon(":/ProyectoCinep2/Peliculas/Peliculas/estados/Recurso 1@2x.png"));
        ui->tableWidget->setIconSize(QSize(30,30));
        Asientos[row][column]=1;
        Boletos--;
        filas[i]=row;
        Columnas[i]=column;
        i++;
    }else{
      QMessageBox::information(this,"Error","La butaca ya esta ocupada");
    }

}


void Widget::ButacasDeArc()
{
    QTextStream io;
    QDir actual = QDir::current();
    QString archivoPelis = actual.absolutePath() + Direc;
    QFile archivo(archivoPelis);
    archivo.open(QIODevice::ReadOnly | QIODevice::Text);
    if(!archivo.isOpen()){
        QMessageBox::critical(this,"Error",archivo.errorString());
        return;
    }
    io.setDevice(&archivo);
    while(!io.atEnd()){
        auto linea = io.readLine();
        auto datos = linea.split(";");
        int fil = datos[0].toInt();
        int col = datos[1].toInt();
        cont++;
        Boletos++;
        on_tableWidget_cellClicked(fil, col);
    }
    on_pushButton_clicked();
    ui->pushButton_3->setDisabled(true);
    ui->inCF->setDisabled(true);

}


void Widget::on_pushButton_clicked()
{
    QTextStream io;
    QDir actual = QDir::current();
    QString archivoPelis = actual.absolutePath() + Direc;
    qDebug()<<archivoPelis;
    QFile archivo(archivoPelis);
  while(i!=0){
      i--;
          if(Asientos[filas[i]][Columnas[i]]==1){
                    ui->tableWidget->setItem(filas[i], Columnas[i],new QTableWidgetItem);
                    ui->tableWidget->item(filas[i],Columnas[i])->setIcon(QIcon(":/ProyectoCinep2/Peliculas/Peliculas/estados/Recurso 3@2x.png"));
                    ui->tableWidget->setIconSize(QSize(30,30));
                    ui->outBut->setText(QString::number(Boletos));
                    if(guardar==true){
                        archivo.open(QIODevice::ReadWrite| QIODevice::Append);
                        if(!archivo.isOpen()){
                            QMessageBox::critical(this,"Error",archivo.errorString());
                        }
                        io.setDevice(&archivo);
                        io  << filas[i] << ";" << Columnas[i] <<"\n";
                        archivo.close();
                    }
                    qDebug()<< guardar;
          }
          if(Boletos==0){
              ui->pushButton_3->setDisabled(false);
              ui->inCF->setDisabled(false);
          }
    }
  guardar=true;
}

int Widget::getCont() const
{
    return cont;
}


void Widget::on_pushButton_2_clicked()
{
    close();
       Facturacion *opennew = new Facturacion(filas,Columnas,bol,Nombre,false);
       opennew->setWindowModality(Qt::ApplicationModal);
       opennew->show();
}


const QString &Widget::getNombre() const
{
    return Nombre;
}

int Widget::getBol() const
{
    return bol;
}

void Widget::setBol(int newBol)
{
    bol = newBol;
}


void Widget::on_inCF_clicked()
{
    close();
       Facturacion *opennew = new Facturacion(filas,Columnas,bol,Nombre,false);
       opennew->setWindowModality(Qt::ApplicationModal);
       opennew->show();
}


void Widget::on_pushButton_3_clicked()
{
    close();
       Facturacion *opennew = new Facturacion(filas,Columnas,bol,Nombre,true);
       opennew->setWindowModality(Qt::ApplicationModal);
       opennew->show();
}

