#ifndef PELICULAS_H
#define PELICULAS_H

#include <QObject>

class Peliculas : public QObject
{
    Q_OBJECT
public:
    explicit Peliculas(QObject *parent = nullptr);
    Peliculas(int ID, QString nombre, float duracion, QString estado);
    void setID(int ID);
    int getID();
    void setNombre(const QString &nombre);
    QString getNombre();
    void setDuracion(float duracion);
    float getDuracion();
    void setEstado(bool estado);
    QString getEstado();
signals:
private:
    int m_ID;
    QString m_nombre;
    float m_duracion;
    QString m_estado;
};

#endif // PELICULAS_H
