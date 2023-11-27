#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWidgets>
#include<QTextDocument>
#include<QPainter>
#include<QFile>
#include<QLabel>
#include<QFontDialog>
#include<QColorDialog>
#include<QTextCursor>
#include<QTextDocument>
#include<QFontDatabase>


//funcion copiar texto
void MainWindow::on_actionCopiar_triggered()
{
    ui->textEdit->copy();
}

//funcion pegar texto
void MainWindow::on_actionPegar_triggered()
{
    ui->textEdit->paste();
}

//funcion cortar texto
void MainWindow::on_actionCortar_triggered()
{
    ui->textEdit->cut();
}


void MainWindow::on_actionFuente_triggered()
{
    bool ok;
    QFont fuente;
    
    fuente = QFontDialog::getFont(&ok, this);
    if(!ok)
        return;
    ui->textEdit->setFont(fuente);
}


void MainWindow::on_actionColor_triggered()
{
    QColor color;
    color = QColorDialog::getColor(Qt::white, this);
    ui->textEdit->setTextColor(color);
}















