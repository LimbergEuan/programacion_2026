#include <iostream>
#include "vehiculo.h"
#include "coche.h"
#include "clases_derivadas.h"

int main() {
    // 1. Crear objetos de distintas clases
    Coche miCoche("Toyota", "Corolla", 2022, "YUC-101", 4);
    Moto miMoto("Italika", "250Z", 2024, "PLACA-INI", 250);
    Camion miCamion("Volvo", "FH16", 2021, "C-999", 20.5);

    std::cout << "=== INFORMACION INICIAL ===" << std::endl;
    miCoche.mostrarInformacion();
    miMoto.mostrarInformacion();
    miCamion.mostrarInformacion();

    // 2. REQUISITO: Cambiar placa desde main
    std::cout << "\n>>> Cambiando la placa de la Moto..." << std::endl;
    miMoto.actualizarPlaca("NUEVA-777");

    std::cout << "\n=== INFORMACION ACTUALIZADA ===" << std::endl;
    miMoto.mostrarInformacion();

    return 0;
}