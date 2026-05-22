#include "rectangulo.h"
#include <iostream>

Rectangulo::Rectangulo(std::string nombre, double base, double altura) 
    : Figura(nombre), base(base), altura(altura) {}

double Rectangulo::calcularArea() {
    return base * altura;
}

void Rectangulo::describir() {
    std::cout << "Figura: " << nombre << " | Base: " << base 
              << " | Altura: " << altura << " | Area: " << calcularArea() << std::endl;
}

double Rectangulo::obtenerBase() const { return base; }
double Rectangulo::obtenerAltura() const { return altura; }