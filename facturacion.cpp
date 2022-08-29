#include "facturacion.h"
#include "ui_facturacion.h"

Facturacion::Facturacion(int F[25],int C[25],int NF,QString name,bool E,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Facturacion)
{
    numB=NF;
    qDebug()<<numB;
    nombre="",NCedula="",NTelf="",Direc="",peli=name;
    ui->setupUi(this);
    //ui->inDatos->setDisabled(E);
    ui->inDatos->setVisible(E);
    ui->outIVA->setText(QString::number(CalculoIVA(CalculoDeBoletos(NF))));
    ui->outSub->setText(QString::number(CalculoDeBoletos(NF)));
    setWindowTitle("Facturacion");
    ui->outTotal->setText(QString::number(CalculoTot(CalculoDeBoletos(NF)))) ;
    QStringList cabecera = {"No", "Pelicula", "Fila", "Columna","Precio"};
    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->setHorizontalHeaderLabels(cabecera);
    ui->tableWidget->setStyleSheet("QTableView::item:selected { color:white; background:#000000; font-weight:900; }"
                               "QTableCornerButton::section { background-color:#232326; }"
                               "QHeaderView::section { color:white; background-color:#232326; }");
    int fila = ui->tableWidget->rowCount();
    QString A;


    for (int i=NF-1;i>=0;i--){
        C[i]++;
        if(F[i]==0){
            A= "A";
        }else if(F[i]==1){
            A= "B";
        }else if(F[i]==2){
            A= "C";
        }else if(F[i]==3){
            A= "D";
        }else if(F[i]==4){
            A= "E";
        }
        ui->tableWidget->insertRow(fila);
        ui->tableWidget->setItem(fila, 0, new QTableWidgetItem(QString::number(i+1)));;
        ui->tableWidget->item(fila,0)->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
        ui->tableWidget->setItem(fila, 1, new QTableWidgetItem(name));
        ui->tableWidget->item(fila,1)->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
        ui->tableWidget->setItem(fila, 2, new QTableWidgetItem(A));
        ui->tableWidget->item(fila,2)->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);
        ui->tableWidget->setItem(fila, 3, new QTableWidgetItem(QString::number(C[i])));
        ui->tableWidget->item(fila,3)->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(3, QHeaderView::Stretch);
        ui->tableWidget->setItem(fila, 4, new QTableWidgetItem(QString::number(3.5)));
        ui->tableWidget->item(fila,4)->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(4, QHeaderView::Stretch);
        ui->tableWidget->horizontalHeader()->setStretchLastSection(QHeaderView::Stretch);
    }
    ui->statusbar->showMessage("saved",3000);
}

Facturacion::~Facturacion()
{
    delete ui;
}

float Facturacion::CalculoIVA(float P)
{
    return P*0.12;
}

float Facturacion::CalculoTot(float ST)
{
    float IVA=0.12;
    float tot;
    tot=ST*IVA;
    return tot+ST;
}

float Facturacion::CalculoDeBoletos(float B)
{
    return B*3.5;
}

void Facturacion::on_pushButton_2_clicked()
{
    close();
}


void Facturacion::on_pushButton_clicked()
{
    Cine *open = new Cine();
    open->show();
    int A[1]={1};
    int B[1]={2};
    Impresion *ne = new Impresion(nombre,NCedula,NTelf,Direc,peli,numB);
    ne->show();
    close();
}


void Facturacion::on_pushButton_3_clicked()
{
    Dulceria *opennew= new Dulceria();
    opennew->setWindowModality(Qt::ApplicationModal);
    opennew->show();
}


void Facturacion::on_lineEdit_editingFinished()
{
    nombre=ui->lineEdit->text();
}


void Facturacion::on_lineEdit_2_editingFinished()
{
    NCedula=ui->lineEdit_2->text();
}


void Facturacion::on_lineEdit_3_editingFinished()
{
    NTelf=ui->lineEdit_3->text();
}


void Facturacion::on_lineEdit_4_editingFinished()
{
    Direc=ui->lineEdit_4->text();
}

