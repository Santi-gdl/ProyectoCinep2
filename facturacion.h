#ifndef FACTURACION_H
#define FACTURACION_H

#include <QMainWindow>
#include "dulceria.h"

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

private:
    Ui::Facturacion *ui;
    Dulceria m_Dulceria;
    float CalculoIVA(float P);
    float CalculoTot(float ST);
    float CalculoDeBoletos(float B);
};

#endif // FACTURACION_H
