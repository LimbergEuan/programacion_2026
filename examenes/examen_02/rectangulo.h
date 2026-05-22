#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "figura.h"
#include <iostream>

class Rectangulo : public Figura {
private:
    double m_ancho;
    double m_alto;

public:
    Rectangulo(std::string tag, double w, double h) 
        : Figura(tag), m_ancho(w), m_alto(h) {}

    double calcularArea() override {
        double resultado = m_ancho * m_alto;
        return resultado;
    }

    void describir() override {
        std::cout << "Componente: " << m_idNombre << " [Dimensiones: " << m_ancho << " x " << m_alto << "]\n";
    }
};

#endif