/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbrir;
    QAction *actionGuardar;
    QAction *actionCopiar;
    QAction *actionPegar;
    QAction *actionCortar;
    QAction *actionImprimir;
    QAction *actionEliminar;
    QAction *actionEliminar_2;
    QAction *actionFuente;
    QAction *actionColor;
    QAction *actionDerecha;
    QAction *actionIzquierda;
    QAction *actionCentro;
    QAction *actionCentrar;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuEdici_n;
    QMenu *menuAlineaci_n;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName("actionAbrir");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Abrir.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbrir->setIcon(icon);
        actionGuardar = new QAction(MainWindow);
        actionGuardar->setObjectName("actionGuardar");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Guardar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGuardar->setIcon(icon1);
        actionCopiar = new QAction(MainWindow);
        actionCopiar->setObjectName("actionCopiar");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Copiar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopiar->setIcon(icon2);
        actionPegar = new QAction(MainWindow);
        actionPegar->setObjectName("actionPegar");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Pegar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPegar->setIcon(icon3);
        actionCortar = new QAction(MainWindow);
        actionCortar->setObjectName("actionCortar");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Cortar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCortar->setIcon(icon4);
        actionImprimir = new QAction(MainWindow);
        actionImprimir->setObjectName("actionImprimir");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Imprimir.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionImprimir->setIcon(icon5);
        actionEliminar = new QAction(MainWindow);
        actionEliminar->setObjectName("actionEliminar");
        actionEliminar_2 = new QAction(MainWindow);
        actionEliminar_2->setObjectName("actionEliminar_2");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Eliminar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEliminar_2->setIcon(icon6);
        actionFuente = new QAction(MainWindow);
        actionFuente->setObjectName("actionFuente");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../../../../Downloads/Fuente.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFuente->setIcon(icon7);
        actionColor = new QAction(MainWindow);
        actionColor->setObjectName("actionColor");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("../../../../Downloads/Color.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionColor->setIcon(icon8);
        actionDerecha = new QAction(MainWindow);
        actionDerecha->setObjectName("actionDerecha");
        actionIzquierda = new QAction(MainWindow);
        actionIzquierda->setObjectName("actionIzquierda");
        actionCentro = new QAction(MainWindow);
        actionCentro->setObjectName("actionCentro");
        actionCentrar = new QAction(MainWindow);
        actionCentrar->setObjectName("actionCentrar");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName("menuArchivo");
        menuEdici_n = new QMenu(menubar);
        menuEdici_n->setObjectName("menuEdici_n");
        menuAlineaci_n = new QMenu(menuEdici_n);
        menuAlineaci_n->setObjectName("menuAlineaci_n");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuEdici_n->menuAction());
        menuArchivo->addAction(actionAbrir);
        menuArchivo->addAction(actionGuardar);
        menuArchivo->addAction(actionImprimir);
        menuArchivo->addAction(actionEliminar_2);
        menuEdici_n->addAction(actionCopiar);
        menuEdici_n->addAction(actionPegar);
        menuEdici_n->addAction(actionCortar);
        menuEdici_n->addAction(actionFuente);
        menuEdici_n->addAction(actionColor);
        menuEdici_n->addAction(menuAlineaci_n->menuAction());
        menuAlineaci_n->addAction(actionCentrar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAbrir->setText(QCoreApplication::translate("MainWindow", "Abrir", nullptr));
        actionGuardar->setText(QCoreApplication::translate("MainWindow", "Guardar", nullptr));
        actionCopiar->setText(QCoreApplication::translate("MainWindow", "Copiar", nullptr));
        actionPegar->setText(QCoreApplication::translate("MainWindow", "Pegar", nullptr));
        actionCortar->setText(QCoreApplication::translate("MainWindow", "Cortar", nullptr));
        actionImprimir->setText(QCoreApplication::translate("MainWindow", "Imprimir", nullptr));
        actionEliminar->setText(QCoreApplication::translate("MainWindow", "Eliminar", nullptr));
        actionEliminar_2->setText(QCoreApplication::translate("MainWindow", "Eliminar", nullptr));
        actionFuente->setText(QCoreApplication::translate("MainWindow", "Fuente", nullptr));
        actionColor->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        actionDerecha->setText(QCoreApplication::translate("MainWindow", "Derecha", nullptr));
        actionIzquierda->setText(QCoreApplication::translate("MainWindow", "Izquierda", nullptr));
        actionCentro->setText(QCoreApplication::translate("MainWindow", "Centro", nullptr));
        actionCentrar->setText(QCoreApplication::translate("MainWindow", "Centrar", nullptr));
        menuArchivo->setTitle(QCoreApplication::translate("MainWindow", "Archivo", nullptr));
        menuEdici_n->setTitle(QCoreApplication::translate("MainWindow", "Edici\303\263n", nullptr));
        menuAlineaci_n->setTitle(QCoreApplication::translate("MainWindow", "Alineaci\303\263n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
