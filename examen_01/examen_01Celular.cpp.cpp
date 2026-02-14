#include "Celular.h"

Celular::Celular(std::string _marca, std::string _modelo, int _gigasA, int _gigasR, double _precio) {
    marca = _marca;
    modelo = _modelo;
    gigasAlmacenamiento = _gigasA;
    gigasRAM = _gigasR;
    precio = _precio;
}

void Celular::caracteristicas() {
    std::cout << "\n--- CARACTERISTICAS TECNICAS ---" << std::endl;
    std::cout << "Marca: " << marca << std::endl;
    std::cout << "Almacenamiento: " << gigasAlmacenamiento << " GB" << std::endl;
    std::cout << "Memoria RAM: " << gigasRAM << " GB" << std::endl;
}

void Celular::verprecio() {
    std::cout << "El precio del equipo es: $" << precio << std::endl;
}

void Celular::vermodelo() {
    std::cout << "Modelo del dispositivo: " << modelo << std::endl;
}