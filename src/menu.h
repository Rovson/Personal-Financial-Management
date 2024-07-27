// MENU
// CARLOS ROVIRA LOPEZ

#include <iostream>
#include "Dietario.h" // Incluye el archivo de encabezado de la clase Dietario
#include <thread>
#include <limits>
#include <sstream>

using namespace std;

class Menu {
private:
    Dietario dietario; // Objeto de la clase Dietario para gestionar el dietario

public:
    Menu() {} // Constructor por defecto de la clase Menu

    void mostrarMenu() { // Método para mostrar el menú principal
        int opcion;
        do {
            system("cls"); // Limpia la pantalla en sistemas Windows
            mostrarDietario(); // Muestra el contenido del dietario
            mostrarOpciones(); // Muestra las opciones del menú
            opcion = obtenerOpcion(); // Obtiene la opción seleccionada por el usuario
            procesarOpcion(opcion); // Procesa la opción seleccionada
        } while (opcion != 3); // Continúa mostrando el menú hasta que se seleccione la opción 3 (Salir)
    }

private:
    void mostrarDietario() { // Método para mostrar el contenido del dietario
        cout << "Contenido del dietario:" << endl;
        const vector<Dia>& dias = dietario.getDias(); // Obtiene los días del dietario
        for (const Dia& dia : dias) { // Itera sobre cada día en el dietario
            cout << "Fecha: " << dia.getFecha().getDia() << "/" << dia.getFecha().getMes() << "/" << dia.getFecha().getAnyo() << endl; // Muestra la fecha del día
            const vector<Anotacion>& anotaciones = dia.getAnotaciones(); // Obtiene las anotaciones del día
            for (const Anotacion& anotacion : anotaciones) { // Itera sobre cada anotación en el día
                cout << "  Concepto: " << anotacion.getConcepto() << ", Cantidad: " << anotacion.getCantidad() << endl; // Muestra el concepto y la cantidad de la anotación
            }
        }
    }

    void mostrarOpciones() { // Método para mostrar las opciones del menú
        cout << "\n1.-Nueva anotacion" << endl;
        cout << "2.-Borrar dietario" << endl;
        cout << "3.-Salir" << endl;
        cout << "Ingrese su opcion: ";
    }

    int obtenerOpcion() { // Método para obtener la opción seleccionada por el usuario
        int opcion;
        string input;
        cin >> input; // Lee la entrada del usuario

        if (!esNumero(input)) { // Verifica si la entrada no es un número
            cout << "Entrada no valida. Por favor, ingrese un numero valido." << endl;
            this_thread::sleep_for(chrono::seconds(2)); // Espera 2 segundos antes de continuar
            return 0; // Retorna 0 para indicar una opción inválida
        }

        opcion = stoi(input); // Convierte la entrada a entero

        if (opcion < 1 || opcion > 3) { // Verifica si la opción está fuera del rango válido
            cout << "Opcion invalida. Por favor, ingrese una opcion valida." << endl;
            this_thread::sleep_for(chrono::seconds(2)); // Espera 2 segundos antes de continuar
            return 0; // Retorna 0 para indicar una opción inválida
        }

        return opcion; // Retorna la opción seleccionada por el usuario
    }

    bool esNumero(const string& str) { // Método para verificar si una cadena contiene solo dígitos
        return all_of(str.begin(), str.end(), ::isdigit);
    }

    void procesarOpcion(int opcion) { // Método para procesar la opción seleccionada por el usuario
        switch (opcion) { // Evalúa la opción seleccionada
        case 1:
            nuevaAnotacion(); // Caso 1: Agregar una nueva anotación
            break;
        case 2:
            borrarDietario(); // Caso 2: Borrar el contenido del dietario
            break;
        case 3:
            cout << "Saliendo del programa..." << endl; // Caso 3: Salir del programa
            break;
        default:
            cout << "Opción inválida. Vuelva a escoger." << endl; // Opción no válida
            break;
        }
    }

    void nuevaAnotacion() { // Método para agregar una nueva anotación al dietario
        int dia, mes, anyo;
        string concepto;
        float cantidad;

        bool fechaValida = false;

        while (!fechaValida) { // Bucle para validar la fecha ingresada por el usuario
            cout << "Ingrese la fecha (dia mes anyo): ";
            cin >> dia >> mes >> anyo;

            if (cin.fail() || !esFechaValida(dia, mes, anyo)) { // Verifica si la entrada es inválida o la fecha no es válida
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpia el búfer de entrada
                cout << "Fecha invalida. Por favor, ingrese una fecha valida." << endl;
            } else {
                fechaValida = true; // La fecha es válida, salir del bucle
            }
        }

        // Verificar cantidad de anotaciones existentes para este día
        int contadorAnotaciones = 0;
        const vector<Dia>& dias = dietario.getDias();
        for (const Dia& d : dias) { // Itera sobre cada día en el dietario
            if (d.getFecha().getDia() == dia && d.getFecha().getMes() == mes && d.getFecha().getAnyo() == anyo) {
                contadorAnotaciones += d.getAnotaciones().size(); // Suma la cantidad de anotaciones para este día
            }
        }

        if (contadorAnotaciones >= 5) { // Verifica si se alcanzó el límite máximo de anotaciones para este día
            cout << "Ya se han alcanzado el maximo de 5 anotaciones para este dia." << endl;
            this_thread::sleep_for(chrono::seconds(2)); // Espera 2 segundos antes de continuar
            return; // Retorna sin agregar una nueva anotación
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpia el búfer de entrada

        cout << "Ingrese el concepto (max.10 caracteres): ";
        getline(cin, concepto); // Lee el concepto ingresado por el usuario

        while (concepto.empty() || concepto.length() > 10) { // Bucle para validar el concepto ingresado
            if (concepto.empty()) { // Verifica si el concepto está en blanco
                cout << "El concepto no puede estar en blanco. Por favor, ingrese un concepto valido: ";
            } else { // Verifica si el concepto excede el límite de caracteres
                cout << "El concepto no puede tener más de 10 caracteres. Por favor, ingrese un concepto valido: ";
            }
            getline(cin, concepto); // Lee nuevamente el concepto
        }

        bool cantidadValida = false;

        while (!cantidadValida) { // Bucle para validar la cantidad ingresada por el usuario
            cout << "Ingrese la cantidad: ";
            string input;
            cin >> input; // Lee la entrada del usuario

            if (esNumero(input)) { // Verifica si la entrada es un número
                cantidad = stof(input); // Convierte la entrada a flotante
                cantidadValida = true; // La cantidad es válida, salir del bucle
            } else {
                cout << "Cantidad invalida. Por favor, ingrese un numero valido." << endl;
            }

            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpia el búfer de entrada
        }
        dietario.agregarAnotacion(Fecha(dia, mes, anyo), Anotacion(concepto, cantidad)); // Agrega la nueva anotación al dietario
    }

    bool esFechaValida(int dia, int mes, int anyo) { // Método para verificar si una fecha es válida
        if (dia < 1 || dia > 31 || mes < 1 || mes > 12 || anyo < 1900 || anyo > 2100) {
            return false; // La fecha es inválida si no cumple con las condiciones
        }
        return true; // La fecha es válida
    }

    void borrarDietario() { // Método para borrar todo el contenido del dietario
        dietario.borrarDietario(); // Borra el dietario
        cout << "Dietario borrado correctamente." << endl; // Muestra un mensaje de confirmación
        this_thread::sleep_for(chrono::seconds(2)); // Espera 2 segundos antes de continuar
    }
};
