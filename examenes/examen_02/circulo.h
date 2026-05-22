#ifndef CIRCULO_H
#define CIRCULO_H

#include "figura.h"
#include <iostream>

class Circulo : public Figura {
private:
    double m_radio;

public:
    Circulo(std::string nombre_figura, double radio_valor) 
        : Figura(nombre_figura), m_radio(radio_valor) {}

    double calcularArea() override {
        double r_al_cuadrado = m_radio * m_radio;
        return r_al_cuadrado * 3.14159;
    }

    void describir() override {
        std::cout << "Elemento: " << nombre << " -> [Radio asignado: " << m_radio << "]\n";
    }
};

#endif // CIRCULO_H