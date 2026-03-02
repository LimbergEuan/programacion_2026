#include "vehiculo.h"
#include <iostream>

Vehiculo::Vehiculo() {
    marca = ""; modelo = ""; anio = 0; placa = "SIN PLACA";
}

Vehiculo::Vehiculo(std::string marca, std::string modelo, int anio, std::string placa) {
    this->marca = marca;
    this->modelo = modelo;
    this->anio = anio;
    this->placa = placa;
}

void Vehiculo::actualizarPlaca(std::string nuevaPlaca) {
    this->placa = nuevaPlaca;
}

void Vehiculo::mostrarInformacion() {
    std::cout << "Marca: " << marca << " | Modelo: " << modelo 
              << " | Anio: " << anio << " | Placa: " << placa << std::endl;
}

void Vehiculo::actualizarMarca(std::string n) { marca = n; }
void Vehiculo::actualizarModelo(std::string m) { modelo = m; }
void Vehiculo::actualizarAnio(int a) { anio = a; }
std::string Vehiculo::obtenerMarca() { return marca; }
std::string Vehiculo::obtenerModelo() { return modelo; }
int Vehiculo::obtenerAnio() { return anio; }
std::string Vehiculo::obtenerPlaca() { return placa; }