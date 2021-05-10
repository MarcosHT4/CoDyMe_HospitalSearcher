# Proyecto Final Algorítmica I (CoDyMe_HospitalSearcher-Dijkstra)

## Integrantes del grupo:

- Camila Alejandra Grandy Camacho
- Joseph Anthony Meneses Salguero
- Marcos Andres Simon Agreda

## Requisitos de Software:
 
 - Windows 7-8-8.1-10 x64/ Mac OS X 10.8- 10.9- 10.10- 10.11- 10.12 - 10.13- 10.14 / Linux desde 4.19
 - Lenguaje de programación C++11
 - Visual Studio Code versión 1.56
 - Compilador de C++: g++ 8.3.0


## Instalación:

- Descargar e instalar [WinRar](https://www.winrar.es/descargas).
- Descargar la última versión disponible de [Visual Studio Code](https://code.visualstudio.com/).
- Seguir las instrucciones de instalación que proporciona el instalador de Visual Studio Code.
- Descargar el compilador de C++11, llamado g++, mediante la descarga del instalador de [mingw](https://www.fdi.ucm.es/profesor/luis/fp/devtools/MinGW.html).
- Descomprimir el instalador, usando WinRar, en la ruta que usted desee.
- Seguir las instrucciones de instalación del paquete que contiene el compilador. Recuerde la ruta de instalación.
- Dirigirse a **Panel de control\Sistema y seguridad\Sistema** y apretar en el botón **Configuración avanzada del sistema**.
- En la sección de **Opciones avanzadas**, hacer click en **Variables de entorno**.
- En la parte de **Variables del sistema**, seleccionar la opción **Path**, y hacer click en **Editar**.
- Presionar el botón **Nuevo** e indique la ruta de instalación del compilador mingw, y haga click en **Aceptar**.
- Descargue el contenido del presente repositorio.
- Descomprima el archivo .zip utilizando WinRar
- Coloque los archivos en una carpeta deseada.
- Abra Visual Studio Code.
- Dirigirse a la pestaña de **Extensiones** e instale la extensión **C/C++**.
- En la parte superior, hacer click en **Archivo** y en **Abrir Folder**
- Seleccione la carpeta que contenga los archivos
- Diríjase al archivo **CoDyMe_HospitalSearcher.cpp** y compile el archivo en la sección de **Compilar y debuguear**.

## Explicación del Algoritmo

El algoritmo de Dijkstra, es un conocido algoritmo, el cual permite encontrar las distancias más cortas entre los vértices de un grafo.
Su funcionamiento se basa, en que, a partir de un vértice inicial, el algoritmo viajará a través de los vértices del grafo, hasta haber visitado todo el grafo.
Cabe destacar que el algoritmo de Dijkstra solo funciona con pesos positivos en las aristas.
Los pasos que sigue el algoritmo de Dijkstra, son los siguientes: 

- Declarar tres estructuras: Una cola de prioridad, un areglo que guarde las distancias entre vértices, y un arreglo que guarde si los vértices ya han sido visitados.
- En el arreglo de **visitados** marcar todas las casillas correspondientes a los vértices con infinito (un entero muy grande).
- En el arreglo de **visitados** marcar la distancia del vértice inical con 0.
- Visitar a los vecinos del vértice actual
- Calcular la distancia del vértice vecino
- Verificar si la distancia es mínima, si es así, guardar la nueva distancia.
- Repetir los pasos anteriores hasta haber visitado todos los vértices.

En el presente proyecto, se implementó este gran algoritmo, para poder obtener las distancias mínimas entre las diferentes capitales de tres diferentes continentes,
las cuales contienen sucursales de hospitales. El algoritmo viajará a través de todas las conexiones existentes entre las distintas sucursales, a parir de un punto 
de inicio; y al finalizar, el algoritmo devolverá la distancia mínima a la sucursal especificada.






