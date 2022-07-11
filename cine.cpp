#include "cine.h"
#include "ui_cine.h"

Cine::Cine(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Cine)

{
    ui->setupUi(this);
    Peliculas();
}

Cine::~Cine()
{
    delete ui;
}

void Cine::Peliculas()
{
    ui->Peli1->setText("Los Minios");
    ui->Peli1_2->setText("thor love and thunder");
    ui->Peli1_3->setText("Lightyear");
    ui->Peli1_4->setText("TOP GUN MAVERICK");
}

