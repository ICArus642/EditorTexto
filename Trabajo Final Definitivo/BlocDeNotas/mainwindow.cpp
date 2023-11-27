#include "mainwindow.h"
#include <QtWidgets>
#include "ui_mainwindow.h"
#include <QFileDialog>
#include<QPrinter>
#include <QPrintDialog>
#include<QPainter>
#include<QFile>
#include<QLabel>
#include<QFontDialog>
#include<QColorDialog>
#include<QTextCursor>
#include<QTextDocument>
#include<QFontDatabase>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}


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


void MainWindow::on_actionCopiar_triggered()
{
    ui->textEdit->copy();
}


void MainWindow::on_actionPegar_triggered()
{
    ui->textEdit->paste();
}


void MainWindow::on_actionCortar_triggered()
{
    ui->textEdit->cut();
}





void MainWindow::on_actionEliminar_triggered()
{
    QFile arch(nombreArch);
    arch.remove();
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




void MainWindow::on_actionDerecha_triggered()
{
    QTextCursor cursor = ui->textEdit->textCursor();
    QTextBlockFormat format;
    format.setAlignment(Qt::AlignRight);

    cursor.mergeBlockFormat(format);
    ui->textEdit->setTextCursor(cursor);
}



void MainWindow::on_actionCentro_triggered()
{
    QTextCursor cursor = ui->textEdit->textCursor();
    QTextBlockFormat format;
    format.setAlignment(Qt::AlignCenter);

    cursor.mergeBlockFormat(format);
    ui->textEdit->setTextCursor(cursor);
}


void MainWindow::on_actionIzquierda_triggered()
{
    QTextCursor cursor = ui->textEdit->textCursor();
    QTextBlockFormat format;
    format.setAlignment(Qt::AlignLeft);

    cursor.mergeBlockFormat(format);
    ui->textEdit->setTextCursor(cursor);
}

