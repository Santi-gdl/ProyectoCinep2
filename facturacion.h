#ifndef FACTURACION_H
#define FACTURACION_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include "impresion.h"
#include "dulceria.h"
#include "cine.h"
#include <QDebug>

namespace Ui {
class Facturacion;
}

class Facturacion : public QMainWindow
{
    Q_OBJECT

public:
    explicit Facturacion(int F[25], int C[25], int NF, QString name, bool E, QWidget *parent = nullptr);
    ~Facturacion();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_lineEdit_editingFinished();

    void on_lineEdit_2_editingFinished();

    void on_lineEdit_3_editingFinished();

    void on_lineEdit_4_editingFinished();

private:
    Ui::Facturacion *ui;
    float CalculoIVA(float P);
    float CalculoTot(float ST);
    float CalculoDeBoletos(float B);
    QString nombre,NCedula,NTelf,Direc,peli;
    int numB;
};

#endif // FACTURACION_H
