#ifndef DULCERIA_H
#define DULCERIA_H

#include <QMainWindow>

namespace Ui {
class Dulceria;
}

class Dulceria : public QMainWindow
{
    Q_OBJECT

public:
    explicit Dulceria(QWidget *parent = nullptr);
    ~Dulceria();

    const QString &getNombres() const;
    void setNombres(const QString &newNombres);

    bool getAcceder() const;
    void setAcceder(bool newAcceder);

private slots:


    void on_Accept_clicked();

private:
    Ui::Dulceria *ui;
    QString nombres;
    bool Acceder;
};

#endif // DULCERIA_H
