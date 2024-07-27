// DIA
// CARLOS ROVIRA LOPEZ

#include <vector> // Incluimos biblioteca que proporciona la clase 'std::vector', utilizada para almacenar las anotaciones del día.
#include "Fecha.h" // Incluimos los archivos de encabezado de la clase Fecha
#include "Anotacion.h" // Incluimos los archivos de encabezado de la clase Anotacion
using namespace std;

class Dia {
private:
    Fecha fecha; // Variable miembro para almacenar la fecha del día.

    vector<Anotacion> anotaciones; // Vector para almacenar las anotaciones del día

public:
    // Constructor (creación)
    Dia(Fecha fecha) : fecha(fecha) {} // Inicializa la fecha del día con el valor proporcionado

    // Método para agregar una nueva anotación al día
    void agregarAnotacion(Anotacion nuevaAnotacion) {

        // Comprobar si ya existe una anotación con el mismo concepto
        for (Anotacion& anotacion : anotaciones) { // Recorremos las anotaciones
            // Comprobamos conceptos
            if (anotacion.getConcepto() == nuevaAnotacion.getConcepto()) {
                // Si el concepto ya existe, se suma la cantidad
                anotacion.setCantidad(anotacion.getCantidad() + nuevaAnotacion.getCantidad());
                return;
            }
        }

        // Si no existe una anotación con el mismo concepto, se añade la nueva anotación al final del vector
        anotaciones.push_back(nuevaAnotacion);
    }

    // Getters (lectura)
    Fecha getFecha() const { return fecha; } // Getter para obtener la fecha del día
    const vector<Anotacion>& getAnotaciones() const { return anotaciones; } // Getter para obtener el vector de las anotaciones del día
};


