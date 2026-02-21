#include "empleado_tiempo_completo.h"

EmpleadoTiempoCompleto::EmpleadoTiempoCompleto() : Empleado() {
    horasSemanales = 0;
    bono = 0.0;
}

EmpleadoTiempoCompleto::EmpleadoTiempoCompleto(std::string nombre, std::string id, float salarioBase, int horasSemanales, float bono) 
    : Empleado(nombre, id, salarioBase) {
    
    this->horasSemanales = horasSemanales;
    this->bono = bono;
}

// Setters
void EmpleadoTiempoCompleto::actualizarHorasSemanales(int horasSemanales) {
    this->horasSemanales = horasSemanales;
}

void EmpleadoTiempoCompleto::actualizarBono(float bono) {
    this->bono = bono;
}

// Getters
int EmpleadoTiempoCompleto::obtenerHorasSemanales() {
    return horasSemanales;
}

float EmpleadoTiempoCompleto::obtenerBono() {
    return bono;
}

void EmpleadoTiempoCompleto::mostrarInformacion() {

    Empleado::mostrarInformacion();
    std::cout << "Horas Semanales: " << horasSemanales << std::endl;
    std::cout << "Bono Mensual: $" << bono << std::endl;
}

// Calcular salario total
float EmpleadoTiempoCompleto::calcularSalarioTotal() {
    
    return salarioBase + bono;
}