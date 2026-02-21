#include <iostream>
#include "empleado_tiempo_completo.h"

int main() {
    std::cout << "--- Sistema de Gestion de Empleados ---" << std::endl;
    std::cout << std::endl;

    //constructor con parametros
    EmpleadoTiempoCompleto empleado1("Carlos Ruiz", "EMP-001", 12000.0, 40, 1500.0);
    
    empleado1.mostrarInformacion();
    std::cout << "Salario Total Calculado: $" << empleado1.calcularSalarioTotal() << std::endl;

    std::cout << "\n--- Actualizando datos del empleado ---" << std::endl;
    
    // Probando setters
    empleado1.actualizarBono(2000.0);
    empleado1.mostrarInformacion();
    std::cout << "Nuevo Salario Total Calculado: $" << empleado1.calcularSalarioTotal() << std::endl;

    return 0;
}