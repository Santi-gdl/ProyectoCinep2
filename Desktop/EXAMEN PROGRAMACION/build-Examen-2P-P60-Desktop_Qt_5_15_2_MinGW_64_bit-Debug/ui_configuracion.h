/********************************************************************************
** Form generated from reading UI file 'configuracion.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURACION_H
#define UI_CONFIGURACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Configuracion
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QWidget *wigetColor;
    QPushButton *btnColor;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QSlider *inDimension;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Configuracion)
    {
        if (Configuracion->objectName().isEmpty())
            Configuracion->setObjectName(QString::fromUtf8("Configuracion"));
        Configuracion->resize(300, 200);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Configuracion->sizePolicy().hasHeightForWidth());
        Configuracion->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(Configuracion);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(Configuracion);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        wigetColor = new QWidget(groupBox);
        wigetColor->setObjectName(QString::fromUtf8("wigetColor"));
        wigetColor->setMinimumSize(QSize(50, 0));
        wigetColor->setAutoFillBackground(false);

        horizontalLayout->addWidget(wigetColor);

        btnColor = new QPushButton(groupBox);
        btnColor->setObjectName(QString::fromUtf8("btnColor"));
        btnColor->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(btnColor);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Configuracion);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        inDimension = new QSlider(groupBox_2);
        inDimension->setObjectName(QString::fromUtf8("inDimension"));
        inDimension->setMaximum(25);
        inDimension->setPageStep(5);
        inDimension->setValue(5);
        inDimension->setOrientation(Qt::Horizontal);
        inDimension->setTickPosition(QSlider::TicksAbove);

        horizontalLayout_2->addWidget(inDimension);


        verticalLayout->addWidget(groupBox_2);

        buttonBox = new QDialogButtonBox(Configuracion);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Configuracion);
        QObject::connect(buttonBox, SIGNAL(accepted()), Configuracion, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Configuracion, SLOT(reject()));

        QMetaObject::connectSlotsByName(Configuracion);
    } // setupUi

    void retranslateUi(QDialog *Configuracion)
    {
        Configuracion->setWindowTitle(QCoreApplication::translate("Configuracion", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Configuracion", "Color", nullptr));
        btnColor->setText(QCoreApplication::translate("Configuracion", "Seleccionar", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Configuracion", "Dimensi\303\263n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Configuracion: public Ui_Configuracion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURACION_H
