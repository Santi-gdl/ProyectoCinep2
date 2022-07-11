#ifndef CINE_H
#define CINE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Cine; }
QT_END_NAMESPACE

class Cine : public QMainWindow
{
    Q_OBJECT

public:
    Cine(QWidget *parent = nullptr);
    ~Cine();

private:
    Ui::Cine *ui;
    void Peliculas();
};
#endif // CINE_H
