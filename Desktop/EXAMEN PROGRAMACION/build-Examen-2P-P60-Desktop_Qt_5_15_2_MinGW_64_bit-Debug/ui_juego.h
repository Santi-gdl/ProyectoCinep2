/********************************************************************************
** Form generated from reading UI file 'juego.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JUEGO_H
#define UI_JUEGO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Juego
{
public:
    QAction *actionConfigraci0n;
    QAction *actionSalir;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *marco;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QPushButton *btnAbajo;
    QPushButton *btnIzqueirda;
    QPushButton *btnDerecha;
    QPushButton *btnArriba;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Juego)
    {
        if (Juego->objectName().isEmpty())
            Juego->setObjectName(QString::fromUtf8("Juego"));
        Juego->resize(518, 591);
        actionConfigraci0n = new QAction(Juego);
        actionConfigraci0n->setObjectName(QString::fromUtf8("actionConfigraci0n"));
        actionSalir = new QAction(Juego);
        actionSalir->setObjectName(QString::fromUtf8("actionSalir"));
        centralwidget = new QWidget(Juego);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        marco = new QFrame(centralwidget);
        marco->setObjectName(QString::fromUtf8("marco"));
        marco->setMinimumSize(QSize(500, 400));
        marco->setFrameShape(QFrame::StyledPanel);
        marco->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(marco);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(97, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btnAbajo = new QPushButton(widget_2);
        btnAbajo->setObjectName(QString::fromUtf8("btnAbajo"));

        gridLayout->addWidget(btnAbajo, 3, 1, 1, 1);

        btnIzqueirda = new QPushButton(widget_2);
        btnIzqueirda->setObjectName(QString::fromUtf8("btnIzqueirda"));

        gridLayout->addWidget(btnIzqueirda, 2, 0, 1, 1);

        btnDerecha = new QPushButton(widget_2);
        btnDerecha->setObjectName(QString::fromUtf8("btnDerecha"));

        gridLayout->addWidget(btnDerecha, 2, 2, 1, 1);

        btnArriba = new QPushButton(widget_2);
        btnArriba->setObjectName(QString::fromUtf8("btnArriba"));

        gridLayout->addWidget(btnArriba, 1, 1, 1, 1);


        horizontalLayout->addWidget(widget_2);

        horizontalSpacer_2 = new QSpacerItem(97, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget);

        Juego->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Juego);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 518, 22));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName(QString::fromUtf8("menuArchivo"));
        Juego->setMenuBar(menubar);
        statusbar = new QStatusBar(Juego);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Juego->setStatusBar(statusbar);

        menubar->addAction(menuArchivo->menuAction());
        menuArchivo->addAction(actionConfigraci0n);
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionSalir);

        retranslateUi(Juego);

        QMetaObject::connectSlotsByName(Juego);
    } // setupUi

    void retranslateUi(QMainWindow *Juego)
    {
        Juego->setWindowTitle(QCoreApplication::translate("Juego", "Juego", nullptr));
        actionConfigraci0n->setText(QCoreApplication::translate("Juego", "Configraci\303\263n", nullptr));
        actionSalir->setText(QCoreApplication::translate("Juego", "Salir", nullptr));
        btnAbajo->setText(QCoreApplication::translate("Juego", "Abajo", nullptr));
        btnIzqueirda->setText(QCoreApplication::translate("Juego", "Izquierda", nullptr));
        btnDerecha->setText(QCoreApplication::translate("Juego", "Derecha", nullptr));
        btnArriba->setText(QCoreApplication::translate("Juego", "Arriba", nullptr));
        menuArchivo->setTitle(QCoreApplication::translate("Juego", "Archivo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Juego: public Ui_Juego {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JUEGO_H
