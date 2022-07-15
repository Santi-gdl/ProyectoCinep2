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
