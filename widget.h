#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDir>
#include "facturacion.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget();
    Widget(QString A,QString dire,int B,QWidget *parent = nullptr);
    ~Widget();
    void ButacasDeArc();

    int getCont() const;

    int getBol() const;
    void setBol(int newBol);

    const QString &getNombre() const;

private slots:
    void on_tableWidget_cellClicked(int row, int column);
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Widget *ui;
    QString Nombre;
    QString Direc;
    int bol;
    int Boletos;
    int Asientos[5][5]={0};
    int cont;
    int i;
    int filas[25];
    int Columnas[25];
};
#endif // WIDGET_H
