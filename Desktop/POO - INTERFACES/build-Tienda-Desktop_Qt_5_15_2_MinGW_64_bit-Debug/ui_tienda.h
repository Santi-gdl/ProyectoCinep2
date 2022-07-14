/********************************************************************************
** Form generated from reading UI file 'tienda.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIENDA_H
#define UI_TIENDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tienda
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *inCedula;
    QLabel *label_2;
    QLineEdit *inNombre;
    QLabel *label_3;
    QLineEdit *inTelefono;
    QLabel *label_4;
    QLineEdit *inEmail;
    QLabel *label_5;
    QPlainTextEdit *inDireccion;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QLabel *label_6;
    QComboBox *inProducto;
    QLabel *label_7;
    QSpinBox *inCantidad;
    QLabel *label_8;
    QLabel *outPrecio;
    QPushButton *btnAgregar;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *outDetalle;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_4;
    QFormLayout *formLayout_3;
    QLabel *label_10;
    QLabel *outSubtotal;
    QLabel *label_11;
    QLabel *outIva;
    QLabel *label_12;
    QLabel *outTotal;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Tienda)
    {
        if (Tienda->objectName().isEmpty())
            Tienda->setObjectName(QString::fromUtf8("Tienda"));
        Tienda->resize(800, 608);
        centralwidget = new QWidget(Tienda);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(300, 0));
        widget->setMaximumSize(QSize(300, 16777215));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        inCedula = new QLineEdit(groupBox);
        inCedula->setObjectName(QString::fromUtf8("inCedula"));

        formLayout->setWidget(0, QFormLayout::FieldRole, inCedula);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        inNombre = new QLineEdit(groupBox);
        inNombre->setObjectName(QString::fromUtf8("inNombre"));

        formLayout->setWidget(2, QFormLayout::FieldRole, inNombre);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        inTelefono = new QLineEdit(groupBox);
        inTelefono->setObjectName(QString::fromUtf8("inTelefono"));

        formLayout->setWidget(4, QFormLayout::FieldRole, inTelefono);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_4);

        inEmail = new QLineEdit(groupBox);
        inEmail->setObjectName(QString::fromUtf8("inEmail"));

        formLayout->setWidget(6, QFormLayout::FieldRole, inEmail);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_5);

        inDireccion = new QPlainTextEdit(groupBox);
        inDireccion->setObjectName(QString::fromUtf8("inDireccion"));
        inDireccion->setLineWidth(3);

        formLayout->setWidget(8, QFormLayout::FieldRole, inDireccion);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_6);

        inProducto = new QComboBox(groupBox_2);
        inProducto->setObjectName(QString::fromUtf8("inProducto"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, inProducto);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_7);

        inCantidad = new QSpinBox(groupBox_2);
        inCantidad->setObjectName(QString::fromUtf8("inCantidad"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, inCantidad);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_8);

        outPrecio = new QLabel(groupBox_2);
        outPrecio->setObjectName(QString::fromUtf8("outPrecio"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, outPrecio);

        btnAgregar = new QPushButton(groupBox_2);
        btnAgregar->setObjectName(QString::fromUtf8("btnAgregar"));
        btnAgregar->setMinimumSize(QSize(0, 50));
        btnAgregar->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 0);\n"
"border-top-color: rgb(170, 255, 0);"));

        formLayout_2->setWidget(7, QFormLayout::FieldRole, btnAgregar);


        verticalLayout->addWidget(groupBox_2);


        horizontalLayout_3->addWidget(widget);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_3 = new QGroupBox(widget_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        outDetalle = new QTableWidget(groupBox_3);
        outDetalle->setObjectName(QString::fromUtf8("outDetalle"));

        horizontalLayout_2->addWidget(outDetalle);


        verticalLayout_2->addWidget(groupBox_3);

        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(187, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        formLayout_3 = new QFormLayout(widget_4);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_10 = new QLabel(widget_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_10);

        outSubtotal = new QLabel(widget_4);
        outSubtotal->setObjectName(QString::fromUtf8("outSubtotal"));
        outSubtotal->setMinimumSize(QSize(100, 0));
        outSubtotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, outSubtotal);

        label_11 = new QLabel(widget_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_11);

        outIva = new QLabel(widget_4);
        outIva->setObjectName(QString::fromUtf8("outIva"));
        outIva->setMinimumSize(QSize(100, 0));
        outIva->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, outIva);

        label_12 = new QLabel(widget_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label_12->setFont(font);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_12);

        outTotal = new QLabel(widget_4);
        outTotal->setObjectName(QString::fromUtf8("outTotal"));
        outTotal->setMinimumSize(QSize(100, 0));
        outTotal->setFont(font);
        outTotal->setStyleSheet(QString::fromUtf8("background-color: rgb(249, 240, 107);\n"
"color: rgb(224, 27, 36);"));
        outTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, outTotal);


        horizontalLayout->addWidget(widget_4);


        verticalLayout_2->addWidget(widget_3);


        horizontalLayout_3->addWidget(widget_2);

        Tienda->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Tienda);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        Tienda->setMenuBar(menubar);
        statusbar = new QStatusBar(Tienda);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Tienda->setStatusBar(statusbar);

        retranslateUi(Tienda);

        QMetaObject::connectSlotsByName(Tienda);
    } // setupUi

    void retranslateUi(QMainWindow *Tienda)
    {
        Tienda->setWindowTitle(QCoreApplication::translate("Tienda", "Tienda", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Tienda", "Cliente", nullptr));
        label->setText(QCoreApplication::translate("Tienda", "C\303\251dula:", nullptr));
        label_2->setText(QCoreApplication::translate("Tienda", "Nombre:", nullptr));
        label_3->setText(QCoreApplication::translate("Tienda", "Tel\303\251fono:", nullptr));
        label_4->setText(QCoreApplication::translate("Tienda", "E-mail:", nullptr));
        label_5->setText(QCoreApplication::translate("Tienda", "Direcci\303\263n:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Tienda", "Producto", nullptr));
        label_6->setText(QCoreApplication::translate("Tienda", "Nombre:", nullptr));
        label_7->setText(QCoreApplication::translate("Tienda", "Cantidad:", nullptr));
        label_8->setText(QCoreApplication::translate("Tienda", "Precio:", nullptr));
        outPrecio->setText(QCoreApplication::translate("Tienda", "0.00", nullptr));
        btnAgregar->setText(QCoreApplication::translate("Tienda", "Agregar", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Tienda", "Detalle de la compra", nullptr));
        label_10->setText(QCoreApplication::translate("Tienda", "Subtotal:", nullptr));
        outSubtotal->setText(QCoreApplication::translate("Tienda", "0.0", nullptr));
        label_11->setText(QCoreApplication::translate("Tienda", "IVA (12%):", nullptr));
        outIva->setText(QCoreApplication::translate("Tienda", "0.0", nullptr));
        label_12->setText(QCoreApplication::translate("Tienda", "TOTAL:", nullptr));
        outTotal->setText(QCoreApplication::translate("Tienda", "0.0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tienda: public Ui_Tienda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIENDA_H
