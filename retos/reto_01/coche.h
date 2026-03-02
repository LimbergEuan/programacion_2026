#ifndef COCHE_H
#define COCHE_H

#include "vehiculo.h"

// Coche hereda de Vehiculo
class Coche : public Vehiculo {
private:
    int numeroPuertas;

public:
    Coche();
    // Agregamos la placa al constructor
    Coche(std::string marca, std::string modelo, int anio, std::string placa, int numeroPuertas);

    void mostrarInformacion();
    int obtenerNumeroPuertas();
};

#endif