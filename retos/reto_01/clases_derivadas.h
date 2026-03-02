#ifndef CLASES_DERIVADAS_H
#define CLASES_DERIVADAS_H
#include "vehiculo.h"
#include <iostream>

class Moto : public Vehiculo {
public:
    int cilindrada;
    Moto(std::string m, std::string mod, int a, std::string p, int c) : Vehiculo(m, mod, a, p), cilindrada(c) {}
    void mostrarInformacion() { Vehiculo::mostrarInformacion(); std::cout << "Cilindrada: " << cilindrada << "cc" << std::endl; }
};

class Camion : public Vehiculo {
public:
    double carga;
    Camion(std::string m, std::string mod, int a, std::string p, double c) : Vehiculo(m, mod, a, p), carga(c) {}
    void mostrarInformacion() { Vehiculo::mostrarInformacion(); std::cout << "Capacidad Carga: " << carga << " Tons" << std::endl; }
};

class Autobus : public Vehiculo {
public:
    int pasajeros;
    Autobus(std::string m, std::string mod, int a, std::string p, int pas) : Vehiculo(m, mod, a, p), pasajeros(pas) {}
    void mostrarInformacion() { Vehiculo::mostrarInformacion(); std::cout << "Pasajeros: " << pasajeros << std::endl; }
};
#endif