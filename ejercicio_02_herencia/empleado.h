#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
#include <iostream>

class Empleado {
protected:
    std::string nombre;
    std::string id;
    float salarioBase;

public:
    // Constructores
    Empleado();
    Empleado(std::string nombre, std::string id, float salarioBase);

    // Establecedores (Setters)
    void actualizarNombre(std::string nombre);
    void actualizarId(std::string id);
    void actualizarSalarioBase(float salarioBase);

    // Captadores (Getters)
    std::string obtenerNombre();
    std::string obtenerId();
    float obtenerSalarioBase();

    // Metodo para mostrar
    void mostrarInformacion();
};

#endif