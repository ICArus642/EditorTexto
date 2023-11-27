# EditorTexto

# Descripcion
Proyecto final correspondiente a la materia de Programacion II. El cual es un editor de texto desarrollado gracias a la herramienta Qt Creator. una herramienta la cual permite la creacion de proyectos con c++ para escritorio, mobile y web. en este caso estamos desarrollando utilizando Cmake para desarrollo desktop. NUestro proyecto proporciona las fuciones basicas de un editor de texto el cual permite manejar bloques de texto dando la posibilidad de editar fuente, color, tamaño y ubicacion del texto para un mejor resultado estetico. ademas de poseer las caracteristicas de guardado, apertura y edicion para un archivo de texto, dando un proyecto mas profesional y completamente funcional.

## Herramientas utiizadas
Para este proyecto se han utilizado las siguientes herramientas
- C++ 20
- **Qt Creator 6.5.3**

## Instrucciones de Compilación
Para compilar el proyecto, sigue estos pasos:

1. Clona el repositorio.
2. Abre el proyecto en el entorno de desarrollo Qt Creator.
3. Compila el código con ayuda del enterno Qt Creator.

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


## Colaborador
- **Nombre:** Jonathan Muñoz Jimenez
- **IE:** Universidad Tecnologica de Pereira - Colombia
- **Carrera:** Ingeniería de Sistemas y Computación 
- **Facultad:** Facultad de Ingenierías
- **Materia:** Programación II
- **Profesor:** Felipe Gutierrez Isaza
- **Correo Personal:** [jonathan060402@gmail.com]
- **Correo Institucional:**[jonathan.munoz@utp.edu.co]
- **GitHub:** [ICArus642](https://github.com/ICArus642)

  
  **![Logo de la Universidad Tecnologica de Pereira](https://upload.wikimedia.org/wikipedia/commons/thumb/2/2c/Logo_U.T.P.png/320px-Logo_U.T.P.png)**

## Colaborador
- **Nombre:** Luis Felipe Vinasco
- **IE:** Universidad Tecnologica de Pereira - Colombia
- **Carrera:** Ingeniería de Sistemas y Computación 
- **Facultad:** Facultad de Ingenierías
- **Materia:** Programación II
- **Profesor:** Felipe Gutierrez Isaza
- **Correo Institucional:**[luis.vinasco@utp.edu.co]
- **GitHub:** [VinasBOT](https://github.com/VinasBOT)

  **![Logo de la Universidad Tecnologica de Pereira](https://upload.wikimedia.org/wikipedia/commons/thumb/2/2c/Logo_U.T.P.png/320px-Logo_U.T.P.png)**

