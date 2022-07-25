#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDir>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void ButacasDeArc();

    int getCont() const;

private slots:
    void on_tableWidget_cellClicked(int row, int column);
    void on_pushButton_clicked();

private:
    Ui::Widget *ui;
    int Asientos[5][5]={0};
    int cont;
};
#endif // WIDGET_H
