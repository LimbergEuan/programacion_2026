#include "empleado.h"

Empleado::Empleado() {
    nombre = "";
    id = "";
    salarioBase = 0.0;
}

Empleado::Empleado(std::string nombre, std::string id, float salarioBase) {
    this->nombre = nombre;
    this->id = id;
    this->salarioBase = salarioBase;
}

// Setters
void Empleado::actualizarNombre(std::string nombre) {
    this->nombre = nombre;
}

void Empleado::actualizarId(std::string id) {
    this->id = id;
}

void Empleado::actualizarSalarioBase(float salarioBase) {
    this->salarioBase = salarioBase;
}

// Getters
std::string Empleado::obtenerNombre() {
    return nombre;
}

std::string Empleado::obtenerId() {
    return id;
}

float Empleado::obtenerSalarioBase() {
    return salarioBase;
}

// Mostrar informacion
void Empleado::mostrarInformacion() {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "Salario Base: $" << salarioBase << std::endl;
}