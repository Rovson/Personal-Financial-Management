#include <iostream> // Incluimos la biblioteca estándar de entrada/salida para manejar la entrada/salida por consola
#include <vector> // Incluimos la biblioteca estándar de vectores para utilizar la clase std::vector
#include <algorithm> // Incluimos la biblioteca estándar de algoritmos para utilizar la función std::sort
#include "Menu.h" // Incluimos el archivo de encabezado de la clase Menu

int main() {
    Menu menu; // Creamos un objeto de la clase Menu
    menu.mostrarMenu(); // Llamamos al método mostrarMenu() para mostrar el menú principal y manejar las opciones del usuario

    return 0; // Devolvemos 0 para indicar que el programa se ejecutó correctamente
}
