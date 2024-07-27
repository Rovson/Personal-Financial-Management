// FECHA
// CARLOS ROVIRA LOPEZ

using namespace std;

class Fecha {
private:
    int dia; // Día de la fecha
    int mes; // Mes de la fecha
    int anyo; // Año de la fecha

public:
    // Constructor de la clase Fecha que inicializa los valores de día, mes y año
    Fecha(int dia, int mes, int anyo) : dia(dia), mes(mes), anyo(anyo) {}

    // Métodos para obtener el día, mes y año de la fecha
    int getDia() const { return dia; }
    int getMes() const { return mes; }
    int getAnyo() const { return anyo; }

    // Sobrecarga del operador == para comparar si dos fechas son iguales
    bool operator==(const Fecha& otraFecha) const {
        return dia == otraFecha.dia && mes == otraFecha.mes && anyo == otraFecha.anyo;
    }

    // Sobrecarga del operador < para comparar si una fecha es menor que otra
    bool operator<(const Fecha& otraFecha) const {
        if (anyo != otraFecha.anyo) { // Compara los años de las fechas
            return anyo < otraFecha.anyo;
        }
        if (mes != otraFecha.mes) { // Si los años son iguales, compara los meses
            return mes < otraFecha.mes;
        }
        return dia < otraFecha.dia; // Si los meses son iguales, compara los días
    }
};
