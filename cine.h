#ifndef CINE_H
#define CINE_H

#include <QMainWindow>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QMessageBox>
#include <QDir>
#include <QTranslator>
#include <QInputDialog>
#include "peliculas.h"
#include "widget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Cine; }
QT_END_NAMESPACE

class Cine : public QMainWindow
{
    Q_OBJECT

public:
    Cine(QWidget *parent = nullptr);
    ~Cine();

private slots:
    void on_actionDulceria_triggered();

    void on_inSala_clicked();

private:
    QList<Peliculas*> m_peliculas;
    Ui::Cine *ui;
    Peliculas a;
    int cont;
    int contarA();
    void CrearTabla();
    void IngresarPelis();
};
#endif // CINE_H
