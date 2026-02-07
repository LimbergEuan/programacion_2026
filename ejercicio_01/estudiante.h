#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>

// Definición de la clase Estudiante
class Estudiante {
private:
    // Atributos privados (Encapsulamiento)
    std::string nombre;
    std::string codigo;
    int edad;
    float promedio;
    bool activo;

public:
    // Constructores
    Estudiante(); // Constructor por defecto
    Estudiante(std::string nombre, std::string codigo, int edad, float promedio, bool activo); // Constructor con parámetros

    // Setters (Métodos para actualizar)
    void actualizarNombre(std::string nuevoNombre);
    void actualizarCodigo(std::string nuevoCodigo);
    void actualizarEdad(int nuevaEdad);
    void actualizarPromedio(float nuevoPromedio);
    void actualizarActivo(bool nuevoEstado);

    // Getters (Métodos para obtener valores)
    std::string obtenerNombre();
    std::string obtenerCodigo();
    int obtenerEdad();
    float obtenerPromedio();
    bool obtenerActivo();

    // Métodos de Visualización
    void mostrarNombre();
    void mostrarCodigo();
    void mostrarEdad();
    void mostrarPromedio();
    void mostrarActivo();
    void mostrarInformacionCompleta();

    // Métodos de Utilidad
    void incrementarEdad();
    void calcularEstadoAcademico();
};

#endif // ESTUDIANTE_H