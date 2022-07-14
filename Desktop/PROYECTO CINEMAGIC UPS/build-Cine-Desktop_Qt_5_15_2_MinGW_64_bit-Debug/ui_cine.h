/********************************************************************************
** Form generated from reading UI file 'cine.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CINE_H
#define UI_CINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cine
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QFrame *frame;
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QLabel *Peli1;
    QLabel *Peli1_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QLabel *Peli1_3;
    QLabel *Peli1_2;
    QPushButton *pushButton_4;
    QTableWidget *outPeliculas;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Cine)
    {
        if (Cine->objectName().isEmpty())
            Cine->setObjectName(QString::fromUtf8("Cine"));
        Cine->resize(863, 436);
        Cine->setMaximumSize(QSize(16000, 600));
        Cine->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(Cine);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(16777215, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu Condensed"));
        font.setPointSize(19);
        font.setBold(true);
        font.setItalic(true);
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMaximumSize(QSize(16000, 257));
        frame->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color: rgb(106, 106, 106);\n"
"border-color:rgb(0, 255, 255);\n"
"padding-left:20px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(150, 150));
        pushButton_3->setStyleSheet(QString::fromUtf8("image: url(:/ProyectoCinep2/Peliculas/Peliculas/HO00000589.jpg);"));

        gridLayout->addWidget(pushButton_3, 0, 8, 1, 1);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(150, 150));
        pushButton_2->setStyleSheet(QString::fromUtf8("image: url(:ProyectoCinep2/Peliculas/Peliculas/HO00000663.jpg);"));

        gridLayout->addWidget(pushButton_2, 0, 0, 1, 1);

        Peli1 = new QLabel(frame);
        Peli1->setObjectName(QString::fromUtf8("Peli1"));
        Peli1->setMaximumSize(QSize(16777215, 20));
        Peli1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 900 11pt \"Arial Black\";"));
        Peli1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Peli1, 2, 0, 1, 1);

        Peli1_4 = new QLabel(frame);
        Peli1_4->setObjectName(QString::fromUtf8("Peli1_4"));
        Peli1_4->setMaximumSize(QSize(16777215, 20));
        Peli1_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 900 11pt \"Arial Black\";"));
        Peli1_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Peli1_4, 2, 11, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(27, 367, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 9, 1, 1);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(150, 150));
        pushButton->setStyleSheet(QString::fromUtf8("image: url(:/ProyectoCinep2/Peliculas/Peliculas/Thor_Love_and_Thunder-306525443-large.jpg);"));

        gridLayout->addWidget(pushButton, 0, 5, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(15, 37, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(27, 359, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 7, 1, 1);

        Peli1_3 = new QLabel(frame);
        Peli1_3->setObjectName(QString::fromUtf8("Peli1_3"));
        Peli1_3->setMaximumSize(QSize(16777215, 20));
        Peli1_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 900 11pt \"Arial Black\";"));
        Peli1_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Peli1_3, 2, 8, 1, 1);

        Peli1_2 = new QLabel(frame);
        Peli1_2->setObjectName(QString::fromUtf8("Peli1_2"));
        Peli1_2->setMaximumSize(QSize(16777215, 20));
        Peli1_2->setStyleSheet(QString::fromUtf8("font: 900 11pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);"));
        Peli1_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Peli1_2, 2, 5, 1, 1);

        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(150, 150));
        pushButton_4->setStyleSheet(QString::fromUtf8("image: url(:/ProyectoCinep2/Peliculas/Peliculas/HO00000334.jpg);\n"
"border-color: rgb(0, 0, 0);"));

        gridLayout->addWidget(pushButton_4, 0, 11, 1, 1);


        verticalLayout->addWidget(frame);

        outPeliculas = new QTableWidget(centralwidget);
        outPeliculas->setObjectName(QString::fromUtf8("outPeliculas"));

        verticalLayout->addWidget(outPeliculas);

        Cine->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Cine);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 863, 22));
        Cine->setMenuBar(menubar);
        statusbar = new QStatusBar(Cine);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Cine->setStatusBar(statusbar);

        retranslateUi(Cine);

        QMetaObject::connectSlotsByName(Cine);
    } // setupUi

    void retranslateUi(QMainWindow *Cine)
    {
        Cine->setWindowTitle(QCoreApplication::translate("Cine", "Cine", nullptr));
        label_5->setText(QCoreApplication::translate("Cine", "<html><head/><body><p>    BIENVENIDO A CINEMAGIC'S UPS</p></body></html>", nullptr));
        pushButton_3->setText(QString());
        pushButton_2->setText(QString());
        Peli1->setText(QString());
        Peli1_4->setText(QString());
        pushButton->setText(QString());
        Peli1_3->setText(QString());
        Peli1_2->setText(QString());
        pushButton_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Cine: public Ui_Cine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CINE_H
