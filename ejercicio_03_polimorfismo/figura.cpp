#include "figura.h"

Figura::Figura(std::string nombre) : nombre(nombre) {}

Figura::~Figura() {} //implementacion vacia 
std::string Figura::obtenerNombre() const {
    return nombre; 
}