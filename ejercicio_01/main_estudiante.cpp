#include <iostream>
#include <string> // Necesario para getline
#include "estudiante.h"

using namespace std;

int main() {
    // Variables temporales para guardar lo que tú escribas
    string tempNombre, tempCodigo;
    int tempEdad;
    float tempPromedio;
    bool tempActivo;
    int opcionActivo; // Para leer 1 o 0

    cout << "========================================" << endl;
    cout << "   SISTEMA DE GESTION DE ESTUDIANTES    " << endl;
    cout << "========================================" << endl;
    cout << "Ingrese los datos del nuevo estudiante:" << endl;
    cout << endl;

    // 1. Pedir el Nombre
    cout << "1. Nombre completo: ";
    getline(cin, tempNombre);

    // 2. Pedir el Código
    cout << "2. Codigo de identificacion: ";
    getline(cin, tempCodigo);

    // 3. Pedir la Edad
    cout << "3. Edad: ";
    cin >> tempEdad;

    // 4. Pedir el Promedio
    cout << "4. Promedio (0.0 - 10.0): ";
    cin >> tempPromedio;

    // 5. Pedir si está activo
    cout << "5. Esta activo? (Escribe 1 para SI, 0 para NO): ";
    cin >> opcionActivo;
    
    if(opcionActivo == 1) {
        tempActivo = true;
    } else {
        tempActivo = false;
    }

    // Crear el objeto con los datos ingresados
    Estudiante miEstudiante(tempNombre, tempCodigo, tempEdad, tempPromedio, tempActivo);

    cout << endl;
    cout << "----------------------------------------" << endl;
    cout << "       REGISTRO COMPLETADO              " << endl;
    cout << "----------------------------------------" << endl;
    
    // Mostrar información
    miEstudiante.mostrarInformacionCompleta();
    miEstudiante.calcularEstadoAcademico();

    cout << endl;
    cout << "----------------------------------------" << endl;
    
    // Prueba de actualización
    cout << "Desea actualizar el promedio? Ingrese el nuevo valor (o el mismo para mantener): ";
    float nuevoProm;
    cin >> nuevoProm;

    miEstudiante.actualizarPromedio(nuevoProm);

    cout << "\n--- Datos Finales del Estudiante ---" << endl;
    miEstudiante.mostrarPromedio();
    miEstudiante.calcularEstadoAcademico();

    cout << "\n=== Fin de la ejecucion ===" << endl;

    return 0;
}