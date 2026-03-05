#include <iostream>
#include <string>
#include "coche.h"
#include "clases_derivadas.h"

int main() {
    // 1. REQUISITO: Crear varios objetos iniciales
    Coche miCoche("Toyota", "Corolla", 2022, "YUC-101", 4);
    Moto miMoto("Italika", "250Z", 2024, "TEMP-001", 250);
    Camion miCamion("Volvo", "FH16", 2021, "C-999", 20.5);

    int opcion = 0;
    std::string nuevaPlaca;

    // El bucle while mantiene vivo el programa //organizar mejor el codigo
    while (opcion != 4) {
        std::cout << "\n========================================" << std::endl;
        std::cout << "   SISTEMA DE GESTION DE PLACAS UADY    " << std::endl;
        std::cout << "========================================" << std::endl;
        std::cout << "1. Ver flota completa (Info Detallada)\n";
        std::cout << "2. Cambiar placa de la MOTO\n";
        std::cout << "3. Cambiar placa del CAMION\n";
        std::cout << "4. Salir del programa\n";
        std::cout << "----------------------------------------" << std::endl;
        std::cout << "Selecciona una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "\n>>> LISTADO DE VEHICULOS REGISTRADOS:" << std::endl;
                miCoche.mostrarInformacion();
                miMoto.mostrarInformacion();
                miCamion.mostrarInformacion();
                break;

            case 2:
                std::cout << "\n[GESTION MOTO] Introduce la nueva placa: ";
                std::cin >> nuevaPlaca;
                // REQUISITO: Cambiar placa desde main usando el método heredado
                miMoto.actualizarPlaca(nuevaPlaca); 
                std::cout << "¡Placa de la Moto actualizada con exito!" << std::endl;
                break;

            case 3:
                std::cout << "\n[GESTION CAMION] Introduce la nueva placa: ";
                std::cin >> nuevaPlaca;
                // REQUISITO: Cambiar placa desde main usando el método heredado
                miCamion.actualizarPlaca(nuevaPlaca);
                std::cout << "¡Placa del Camion actualizada con exito!" << std::endl;
                break;

            case 4:
                std::cout << "\nCerrando sistema... ¡Buen dia, colega!" << std::endl;
                break;

            default:
                std::cout << "\n[ERROR] Opcion no valida. Intenta de nuevo." << std::endl;
        }
    }

    return 0;
}