#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionAbrir_triggered();

    void on_actionGuardar_triggered();

    void on_actionImprimir_triggered();

    void on_actionCopiar_triggered();

    void on_actionPegar_triggered();

    void on_actionCortar_triggered();

    void on_actionEliminar_triggered();

    void on_actionFuente_triggered();

    void on_actionColor_triggered();


    void on_actionDerecha_triggered();

    void on_actionCentro_triggered();

    void on_actionIzquierda_triggered();

private:
    Ui::MainWindow *ui;
    QString nombreArch;
};
#endif // MAINWINDOW_H
