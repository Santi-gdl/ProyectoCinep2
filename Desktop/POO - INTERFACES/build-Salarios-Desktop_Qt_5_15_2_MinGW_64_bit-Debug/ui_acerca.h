/********************************************************************************
** Form generated from reading UI file 'acerca.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACERCA_H
#define UI_ACERCA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Acerca
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_4;

    void setupUi(QDialog *Acerca)
    {
        if (Acerca->objectName().isEmpty())
            Acerca->setObjectName(QString::fromUtf8("Acerca"));
        Acerca->resize(480, 334);
        buttonBox = new QDialogButtonBox(Acerca);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 270, 461, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(Acerca);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 111, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Franklin Gothic Heavy"));
        label->setFont(font);
        label_4 = new QLabel(Acerca);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 60, 421, 201));

        retranslateUi(Acerca);
        QObject::connect(buttonBox, SIGNAL(accepted()), Acerca, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Acerca, SLOT(reject()));

        QMetaObject::connectSlotsByName(Acerca);
    } // setupUi

    void retranslateUi(QDialog *Acerca)
    {
        Acerca->setWindowTitle(QCoreApplication::translate("Acerca", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Acerca", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:696; font-style:italic;\">Salario</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Acerca", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">Aplicacion donde se calcula el salario de los Obreros</span></p><p align=\"center\"><span style=\" font-weight:696;\">Universidad Politecnica Salesiana </span></p><p align=\"center\"><span style=\" font-weight:696;\">Carrera de computacion</span></p><p><span style=\" font-weight:696;\">Autor</span>: Jorge Sebasti\303\241n Reinoso Reyes &lt;jreinosor1@est.ups.edu.ec&gt;</p><p><br/></p><p><br/></p><p>Todos los derechos reservados </p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Acerca: public Ui_Acerca {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACERCA_H
