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

private:
    Ui::Dulceria *ui;
};

#endif // DULCERIA_H
