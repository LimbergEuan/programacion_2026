#ifndef EMPLEADO_TIEMPO_COMPLETO_H
#define EMPLEADO_TIEMPO_COMPLETO_H

#include "empleado.h"

// Herencia publica de Empleado
class EmpleadoTiempoCompleto : public Empleado {
private:
    int horasSemanales;
    float bono;

public:
    // Constructores
    EmpleadoTiempoCompleto();
    EmpleadoTiempoCompleto(std::string nombre, std::string id, float salarioBase, int horasSemanales, float bono);

    // Establecedores
    void actualizarHorasSemanales(int horasSemanales);
    void actualizarBono(float bono);

    // Captadores
    int obtenerHorasSemanales();
    float obtenerBono();

    // Sobrescritura de metodos
    void mostrarInformacion();
    float calcularSalarioTotal();
};

#endif