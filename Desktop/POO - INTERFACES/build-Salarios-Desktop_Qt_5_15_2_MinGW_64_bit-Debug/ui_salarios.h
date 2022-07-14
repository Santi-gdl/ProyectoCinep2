/********************************************************************************
** Form generated from reading UI file 'salarios.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALARIOS_H
#define UI_SALARIOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Salarios
{
public:
    QAction *actionNuevo;
    QAction *actionAbrir;
    QAction *actionGuardar;
    QAction *actionCalcular;
    QAction *actionSalir;
    QAction *actionAcerca_de_Salarios;
    QWidget *centralwidget;
    QWidget *widget;
    QWidget *widget_3;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QSpinBox *spinBox;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QWidget *widget_2;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Salarios)
    {
        if (Salarios->objectName().isEmpty())
            Salarios->setObjectName(QString::fromUtf8("Salarios"));
        Salarios->resize(601, 565);
        actionNuevo = new QAction(Salarios);
        actionNuevo->setObjectName(QString::fromUtf8("actionNuevo"));
        actionAbrir = new QAction(Salarios);
        actionAbrir->setObjectName(QString::fromUtf8("actionAbrir"));
        actionGuardar = new QAction(Salarios);
        actionGuardar->setObjectName(QString::fromUtf8("actionGuardar"));
        actionCalcular = new QAction(Salarios);
        actionCalcular->setObjectName(QString::fromUtf8("actionCalcular"));
        actionSalir = new QAction(Salarios);
        actionSalir->setObjectName(QString::fromUtf8("actionSalir"));
        actionAcerca_de_Salarios = new QAction(Salarios);
        actionAcerca_de_Salarios->setObjectName(QString::fromUtf8("actionAcerca_de_Salarios"));
        centralwidget = new QWidget(Salarios);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 271, 401));
        widget->setMinimumSize(QSize(250, 0));
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(10, 10, 241, 81));
        formLayout = new QFormLayout(widget_3);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(widget_3);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(widget_3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        spinBox = new QSpinBox(widget_3);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, spinBox);

        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 120, 251, 191));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout->addWidget(radioButton_3);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(10, 310, 251, 81));
        horizontalLayout = new QHBoxLayout(widget_4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(126, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(widget_4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(310, 20, 300, 401));
        widget_2->setMinimumSize(QSize(300, 0));
        plainTextEdit = new QPlainTextEdit(widget_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 10, 211, 371));
        Salarios->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Salarios);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 601, 26));
        Salarios->setMenuBar(menubar);
        statusbar = new QStatusBar(Salarios);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Salarios->setStatusBar(statusbar);

        retranslateUi(Salarios);

        QMetaObject::connectSlotsByName(Salarios);
    } // setupUi

    void retranslateUi(QMainWindow *Salarios)
    {
        Salarios->setWindowTitle(QCoreApplication::translate("Salarios", "Salarios", nullptr));
        actionNuevo->setText(QCoreApplication::translate("Salarios", "&Nuevo", nullptr));
#if QT_CONFIG(shortcut)
        actionNuevo->setShortcut(QCoreApplication::translate("Salarios", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbrir->setText(QCoreApplication::translate("Salarios", "&Abrir", nullptr));
#if QT_CONFIG(shortcut)
        actionAbrir->setShortcut(QCoreApplication::translate("Salarios", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGuardar->setText(QCoreApplication::translate("Salarios", "&Guardar", nullptr));
#if QT_CONFIG(shortcut)
        actionGuardar->setShortcut(QCoreApplication::translate("Salarios", "Ctrl+G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCalcular->setText(QCoreApplication::translate("Salarios", "&Calcular", nullptr));
#if QT_CONFIG(shortcut)
        actionCalcular->setShortcut(QCoreApplication::translate("Salarios", "Shift+F1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSalir->setText(QCoreApplication::translate("Salarios", "&Salir", nullptr));
#if QT_CONFIG(shortcut)
        actionSalir->setShortcut(QCoreApplication::translate("Salarios", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAcerca_de_Salarios->setText(QCoreApplication::translate("Salarios", "Acerca de Salarios", nullptr));
        label->setText(QCoreApplication::translate("Salarios", "Nombre:", nullptr));
        label_2->setText(QCoreApplication::translate("Salarios", "Horas: ", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Salarios", "Jornada", nullptr));
        radioButton->setText(QCoreApplication::translate("Salarios", "Matutina", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Salarios", "Vespertina", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Salarios", "Nocturna", nullptr));
        pushButton->setText(QCoreApplication::translate("Salarios", "&Calcular", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Salarios: public Ui_Salarios {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALARIOS_H
