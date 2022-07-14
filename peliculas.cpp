#include "peliculas.h"

Peliculas::Peliculas(QObject *parent) : QObject(parent)
{

}

Peliculas::Peliculas(int ID, QString nombre, float duracion, QString estado)
    :m_ID(ID),m_nombre(nombre),m_duracion(duracion), m_estado(estado)
{

}

void Peliculas::setID(int ID)
{
    m_ID = ID;
}

int Peliculas::getID()
{
    return m_ID;
}

void Peliculas::setNombre(const QString &nombre)
{
    m_nombre = nombre;
}

QString Peliculas::getNombre()
{
    return m_nombre;
}

void Peliculas::setDuracion(float duracion)
{
    m_duracion = duracion;
}

float Peliculas::getDuracion()
{
    return m_duracion;
}

void Peliculas::setEstado(bool estado)
{
    QString A;
    if(estado==true){
        A="Estreno";
    }else{
        A="No Estreno";
    }
     m_estado = A;
}

QString Peliculas::getEstado()
{
    return m_estado;
}
