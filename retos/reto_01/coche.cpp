#include "coche.h"
#include <iostream>

Coche::Coche() : Vehiculo() {
    numeroPuertas = 0;
}

// Pasamos los datos a la clase base Vehiculo
Coche::Coche(std::string marca, std::string modelo, int anio, std::string placa, int numeroPuertas)
    : Vehiculo(marca, modelo, anio, placa) {
    this->numeroPuertas = numeroPuertas;
}

void Coche::mostrarInformacion() {
    Vehiculo::mostrarInformacion(); // Reutilizamos el metodo del padre
    std::cout << "Numero de puertas: " << numeroPuertas << std::endl;
}

int Coche::obtenerNumeroPuertas() {
    return numeroPuertas;
}