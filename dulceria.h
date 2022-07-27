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

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dulceria *ui;
    QString nombres;
};

#endif // DULCERIA_H
