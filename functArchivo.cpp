#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWidgets>
#include <QFileDialog>
#include<QPrinter>
#include <QPrintDialog>
#include<QFile>
#include<QTextDocument>




//funcion que realiza la funcion de abrir un archivo de texto
void MainWindow::on_actionAbrir_triggered()
{
    QFile arch;
    QTextStream io;
    
    
    nombreArch = QFileDialog::getOpenFileName(this, "Abrir");
    arch.setFileName(nombreArch);
    arch.open(QIODevice::ReadOnly);
    
    io.setDevice(&arch);
    ui->textEdit->setText(io.readAll());
    arch.flush();
    arch.close();
}

//funcion que guarda la ultima version de un archivo ya nombrado
void MainWindow::on_actionGuardar_triggered()
{
    QFile arch;
    QTextStream io;
    
    
    nombreArch = QFileDialog::getSaveFileName(this, "Guardar");
    arch.setFileName(nombreArch);
    arch.open(QIODevice::WriteOnly);
    
    io.setDevice(&arch);
    io<< ui->textEdit->toPlainText();
    arch.close();
}

//funcion que nombra el archivo y lo guarda dentro del dispositivo, ademas de abrir la seccion de manejo de impresoras
void MainWindow::on_actionImprimir_triggered()
{
    QString htmlFilePath = QFileDialog::getOpenFileName(this, "Selecciona el archivo HTML", "", "Archivos HTML (*.html)");
    
    if (!htmlFilePath.isEmpty())
    {
        // Genera el nombre del archivo PDF de salida
        QString pdfFilePath = htmlFilePath;
        pdfFilePath.replace(".html", ".pdf");
        
        // Ejecuta wkhtmltopdf como un proceso externo
        QProcess process;
        process.start("C:\\Program Files\\wkhtmltopdf\\bin\\wkhtmltopdf.exe", QStringList() << htmlFilePath << pdfFilePath);
        process.waitForFinished();
    }
}

//funcion que elimina o limpia el archivo
void MainWindow::on_actionEliminar_triggered()
{
    QFile arch(nombreArch);
    arch.remove();
}













