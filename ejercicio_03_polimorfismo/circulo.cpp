#include "circulo.h"
#include <iostream>
#include <cmath> 

//constructor 
Circulo::Circulo(std::string nombre, double radio) : Figura(nombre) , radio(radio) {}

double Circulo::calcularArea() {
    return 3.14159 * radio * radio; 
}

void Circulo::describir () {
    std::cout << "Figura: " << nombre << " | Radio: " << radio
              << " | Area: " << calcularArea() <<std::endl; 

}

double Circulo::obtenerRadio() const {
    return radio;
}