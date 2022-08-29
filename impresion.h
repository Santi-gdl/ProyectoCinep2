#ifndef IMPRESION_H
#define IMPRESION_H

#include <QWidget>
#include <QFile>
#include <QFileDialog>
#include <QTime>

namespace Ui {
class Impresion;
}

class Impresion : public QWidget
{
    Q_OBJECT

public:
    explicit Impresion(QString nombre,
                       QString NCedula,
                       QString NTelf,
                       QString Direc,
                       QString Peli,
                       int numerodeBoletos,
                       QWidget *parent = nullptr);
    ~Impresion();

    const QString &getNombre() const;
    void setNombre(const QString &newNombre);

    const QString &getNTelf() const;
    void setNTelf(const QString &newNTelf);

    const QString &getDirec() const;
    void setDirec(const QString &newDirec);

    const QString &getNCedula() const;
    void setNCedula(const QString &newNCedula);

private:
    Ui::Impresion *ui;
    QString nombre,NCedula,NTelf,Direc,nompepelicula;
    int numerodeBoletos;
    QString estadoDeImpresion(QString estado);
};

#endif // IMPRESION_H
