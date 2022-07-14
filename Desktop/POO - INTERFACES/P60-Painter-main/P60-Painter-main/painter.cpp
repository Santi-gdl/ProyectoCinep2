#include "painter.h"
#include "ui_painter.h"

Painter::Painter(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Painter)
{
    ui->setupUi(this);
}

Painter::~Painter()
{
    delete ui;
}

void Painter::paintEvent(QPaintEvent *event)
{
    // Crear el objeto painter. Establecer el formulario como su lienzo
    QPainter pintor(this);

    // establecer un color a su pincel
    pintor.setPen(Qt::blue);

    // Dibujar una linea
    pintor.drawLine(100, 100, 200, 200);

    // Cambiar el color del pincel
    pintor.setPen(Qt::red);

    // Establecer un tipo y tamaño de letra
    pintor.setFont(QFont("Times New Roman",25));

    // Dibujar un texto
    pintor.drawText(250,150,"Git Painter");

    // Crear un nuevo pincel
    QPen pincel;
    pincel.setColor(Qt::green);
    pincel.setWidth(10);
    pincel.setCapStyle(Qt::RoundCap);

    // Utilizar el nuevo pincel
    pintor.setPen(pincel);

    // Establecer una brocha
    pintor.setBrush(Qt::black);

    // Dibujar un rectangulo
    pintor.drawRect(600, 100, 100, 100);

    // Crear un nuevo color
    QColor miColor(255,221,129,128);

    // Crear un nuevo pincel
    QPen pincel2;
    pincel2.setColor(Qt::blue);
    pincel2.setWidth(5);
    pincel2.setStyle(Qt::DotLine);

    // Establecer el nuevo pincel
    pintor.setPen(pincel2);

    // Cambiar la brocha
    pintor.setBrush(miColor);

    // Dibuar un circulo
    pintor.drawEllipse(50, 100, 100, 100);

    QPen pincel3;
    pintor.setFont(QFont("Arial",25));
    pintor.drawText(600,300,"Figura 3");
    pincel3.setColor(Qt::blue);
    pincel3.setWidth(11);
    pincel3.setCapStyle(Qt::RoundCap);
    pintor.setPen(pincel3);
    pintor.drawRect(400, 450, 150, 150);

    QPen pincel4;
    pintor.setFont(QFont("Consolas",25));
    pintor.drawText(500,100,"");
    pincel4.setColor(Qt::yellow);
    pincel4.setWidth(11);
    pincel4.setCapStyle(Qt::RoundCap);
    pintor.setPen(pincel4);
    pintor.drawRect(250, 250, 150, 150);


}

