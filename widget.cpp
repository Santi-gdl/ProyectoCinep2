#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    cont=0;
    QStringList tituloColumna;
    int fila = ui->tableWidget->rowCount();
    int Colum =ui->tableWidget->columnCount();
    tituloColumna<<"A"<<"B"<<"C"<<"D"<<"E"<<"F";
    setWindowTitle("Sala");
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
    if(Asientos[row][column]!=1){
        ui->tableWidget->setItem(row, column,items);
        ui->tableWidget->item(row, column)->setIcon(QIcon(":/ProyectoCinep2/Peliculas/Peliculas/estados/Recurso 3@2x.png"));
        ui->tableWidget->setIconSize(QSize(30,30));
        Asientos[row][column]=1;
        cont++;
        ui->outBut->setText(QString::number(cont));
    }else{
      QMessageBox::information(this,"Error","Butaca ya seleccionada");
    }

}


void Widget::ButacasDeArc()
{
    QTextStream io;
    QDir actual = QDir::current();
    QString archivoPelis = actual.absolutePath() + "/debug/AsientosOc.csv";
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
        qDebug()<<datos;
        int fil = datos[0].toInt();
        int col = datos[1].toInt();
        on_tableWidget_cellClicked(fil, col);
    }
}


void Widget::on_pushButton_clicked()
{
    getCont();
    update();
    close();
}

int Widget::getCont() const
{
    return cont;
}

