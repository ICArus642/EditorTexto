# EditorTexto

#Descripcion
Proyecto universitario de editor de texto desarrollado con la herramienta Qt Creator. Una herramienta la cual proporciona las fuciones basicas de un editor de texto y que permite manejar bloques de texto editandolos y dando la posibilidad de editar fuente, color, tamaño y ubicacion del texto. ademas de brindar la posibilidad de guardar, abrir y editar un archivo de texto.

## Herramientas utiizadas
- C++ 20
- **Qt Creator 6.5.3**

## Instrucciones de Compilación
Para compilar el proyecto, sigue estos pasos:

1. Clona el repositorio.
2. Abre el proyecto en el entorno de desarrollo Qt Creator.
3. Compila el código con ayuda del enterno Qt.

## Funcionamiento

### `functArchivo.cpp`
  - En este archivo se contiene las funciones uicadas  dedicadas a la manipulacion del archivo en general.
  - En esta seccion no se encuentran las funciones de la parte estetica.
Ejemplo:
```
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
```

### `functEdicion.cpp`

-En esta carpeta se encuentran las funciones dedicadas a la edicion de la parte estetica del text. Tales como:
  - Color del texto
  - Tamaño de letra
  - Alineacion del bloque de texto
  - fuente de texto
Ejemplo:
```
void MainWindow::on_actionColor_triggered()
{
    QColor color;
    color = QColorDialog::getColor(Qt::white, this);
    ui->textEdit->setTextColor(color);
}
```
- Ademas de esto, aqui tambien se ubican las funciones basicas de cualquier programa que opere archivos de texto como:
    - Copiar
    - Pegar
    - Cortar


## Contacto
- **Nombre:** Jonathan Muñoz Jimenez
- **IE:** Universidad Tecnologica de Pereira - Colombia
- **Carrera:** Ingeniería de Sistemas y Computación 
- **Facultad:** Facultad de Ingenierías
- **Materia:** Programación II
- **Profesor:** Felipe Gutierrez Isaza
- **Correo Personal:** [jonathan060402@gmail.com]
- **Correo Institucional:** [jonathan.munoz@utp.edu.co]
- **GitHub:** [ICArus642](https://github.com/ICArus642)

**![Logo de la Universidad Tecnologica de Pereira](https://upload.wikimedia.org/wikipedia/commons/thumb/2/2c/Logo_U.T.P.png/320px-Logo_U.T.P.png)**
