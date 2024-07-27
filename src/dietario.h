// DIETARIO
// CARLOS ROVIRA LOPEZ

#include <vector> // Incluimos la biblioteca que proporciona la clase 'std::vector', utilizada para almacenar los días del dietario.
#include "Dia.h" // Incluimos el archivo de encabezado de la clase 'Dia', suponiendo que ya ha sido creada.

using namespace std;

class Dietario {
private:
    vector<Dia> dias; // Vector para almacenar los días del dietario.

public:
    // Método para agregar una anotación a un día del dietario
    void agregarAnotacion(Fecha fecha, Anotacion anotacion) {
        Dia nuevoDia(fecha); // Se crea un nuevo día con la fecha proporcionada
        nuevoDia.agregarAnotacion(anotacion); // Se agrega la anotación al nuevo día

        // Se busca la posición donde debería insertarse el nuevo día en orden
        auto it = lower_bound(dias.begin(), dias.end(), nuevoDia, [](const Dia& d1, const Dia& d2) {
            return d1.getFecha() < d2.getFecha();
        });

        if (it != dias.end() && it->getFecha() == fecha) {
            // Si ya existe un día con la misma fecha, se agrega la anotación a ese día
            it->agregarAnotacion(anotacion);
        } else {
            // Si no existe un día con la misma fecha, se inserta el nuevo día en orden
            dias.insert(it, nuevoDia);
        }
    }

    // Método para borrar todo el contenido del dietario
    void borrarDietario() {
        dias.clear(); // Borra todos los días del dietario
    }

    // Getter para obtener una referencia constante al vector de días del dietario
    const vector<Dia>& getDias() const { return dias; }
};
