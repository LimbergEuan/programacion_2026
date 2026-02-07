#include "estudiante.h"
#include <iostream>

// --- Constructores ---

// Constructor por defecto
Estudiante::Estudiante() {
    this->nombre = "";
    this->codigo = "";
    this->edad = 0;
    this->promedio = 0.0f;
    this->activo = false;
}

// Constructor con parámetros
Estudiante::Estudiante(std::string nombre, std::string codigo, int edad, float promedio, bool activo) {
    this->nombre = nombre;
    this->codigo = codigo;
    this->edad = edad;
    this->promedio = promedio;
    this->activo = activo;
}

// --- Setters ---

void Estudiante::actualizarNombre(std::string nuevoNombre) {
    this->nombre = nuevoNombre;
}

void Estudiante::actualizarCodigo(std::string nuevoCodigo) {
    this->codigo = nuevoCodigo;
}

void Estudiante::actualizarEdad(int nuevaEdad) {
    this->edad = nuevaEdad;
}

void Estudiante::actualizarPromedio(float nuevoPromedio) {
    // Validación requerida: Rango 0.0 a 10.0
    if (nuevoPromedio >= 0.0 && nuevoPromedio <= 10.0) {
        this->promedio = nuevoPromedio;
    } else {
        std::cout << "Error: El promedio debe estar entre 0.0 y 10.0" << std::endl;
    }
}

void Estudiante::actualizarActivo(bool nuevoEstado) {
    this->activo = nuevoEstado;
}

// --- Getters ---

std::string Estudiante::obtenerNombre() {
    return this->nombre;
}

std::string Estudiante::obtenerCodigo() {
    return this->codigo;
}

int Estudiante::obtenerEdad() {
    return this->edad;
}

float Estudiante::obtenerPromedio() {
    return this->promedio;
}

bool Estudiante::obtenerActivo() {
    return this->activo;
}

// --- Métodos de Visualización ---

void Estudiante::mostrarNombre() {
    std::cout << "Nombre: " << this->nombre << std::endl;
}

void Estudiante::mostrarCodigo() {
    std::cout << "Código: " << this->codigo << std::endl;
}

void Estudiante::mostrarEdad() {
    std::cout << "Edad: " << this->edad << " años" << std::endl;
}

void Estudiante::mostrarPromedio() {
    std::cout << "Promedio: " << this->promedio << std::endl;
}

void Estudiante::mostrarActivo() {
    if (this->activo) {
        std::cout << "Estado: Activo" << std::endl;
    } else {
        std::cout << "Estado: Inactivo" << std::endl;
    }
}

void Estudiante::mostrarInformacionCompleta() {
    mostrarNombre();
    mostrarCodigo();
    mostrarEdad();
    mostrarPromedio();
    mostrarActivo();
}

// --- Métodos de Utilidad ---

void Estudiante::incrementarEdad() {
    this->edad++;
}

void Estudiante::calcularEstadoAcademico() {
    std::cout << "Estado académico: ";
    if (this->promedio >= 9.0) {
        std::cout << "Excelente" << std::endl;
    } else if (this->promedio >= 8.0) {
        std::cout << "Muy bueno" << std::endl;
    } else if (this->promedio >= 7.0) {
        std::cout << "Bueno" << std::endl;
    } else if (this->promedio >= 6.0) {
        std::cout << "Regular" << std::endl;
    } else {
        std::cout << "Necesita Mejorar" << std::endl;
    }
}