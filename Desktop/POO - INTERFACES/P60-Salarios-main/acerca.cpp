#include "acerca.h"
#include "ui_acerca.h"

Acerca::Acerca(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Acerca)
{
    ui->setupUi(this);
    m_version = "v 0.0";
    // establecer cualquier valor
    m_valor = 7;
}

Acerca::~Acerca()
{
    delete ui;
}

int Acerca::valor() const
{
    return m_valor;
}
