#ifndef FACTURACION_H
#define FACTURACION_H

#include <QMainWindow>

namespace Ui {
class Facturacion;
}

class Facturacion : public QMainWindow
{
    Q_OBJECT

public:
    explicit Facturacion(int F[25],int C[25],int NF,QString name,QWidget *parent = nullptr);
    ~Facturacion();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Facturacion *ui;
    float CalculoIVA(float P);
    float CalculoTot(float ST);
    float CalculoDeBoletos(float B);
};

#endif // FACTURACION_H
