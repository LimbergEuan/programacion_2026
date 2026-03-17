#include <iostream>
#include <vector>
#include "circulo.h"
#include "rectangulo.h"

int main() {
    // Creamos un vector de punteros a la clase base
    std::vector<Figura*> misFiguras;

    // Polimorfismo en acción: Figura apuntando a Circulo y Rectangulo
    misFiguras.push_back(new Circulo("Circulo Rojo", 5.0));
    misFiguras.push_back(new Rectangulo("Rectangulo Azul", 10.0, 4.0));
    misFiguras.push_back(new Circulo("Moneda", 1.2));

    std::cout << "--- Listado de Figuras (Polimorfismo) ---" << std::endl;

    for (Figura* f : misFiguras) {
        // Se llama al método de la clase real gracias al enlace dinámico
        f->describir(); 
    }

    // Limpieza de memoria (¡No queremos fugas, compa!)
    for (Figura* f : misFiguras) {
        delete f;
    }
    misFiguras.clear();

    return 0;
}