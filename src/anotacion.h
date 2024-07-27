// ANOTACION
// CARLOS ROVIRA LOPEZ

#include <string> // proporciona la clase std::string para manejar cadenas de caracteres en C++.
using namespace std;

class Anotacion {
private:
    string concepto; // Variable miembro para almacenar el concepto de la anotación
    float cantidad; // Variable miembro para almacenar la cantidad de la anotación

public:
    // Constructor
    Anotacion(string concepto, float cantidad) : concepto(concepto), cantidad(cantidad) {} // Este es el constructor de la clase Anotacion. Se utiliza para inicializar un objeto Anotacion con un concepto y una cantidad específicos.

    // Getters
    string getConcepto() const { return concepto; } // Getter para obtener el concepto de la anotación
    float getCantidad() const { return cantidad; } // Getter para obtener la cantidad de la anotación

    // Setters
    void setConcepto(string newConcepto) { concepto = newConcepto; } // Setter para establecer el concepto de la anotación
    void setCantidad(float newCantidad) { cantidad = newCantidad; } // Setter para establecer la cantidad de la anotación
};

