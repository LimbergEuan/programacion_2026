#ifndef FIGURA_H
#define FIGURA_H

#include <string>

class Figura {
protected:
    std::string m_idNombre;

public:
    explicit Figura(std::string identificador) : m_idNombre(identificador) {}
    virtual ~Figura() = default;

    virtual double calcularArea() = 0; 
    virtual void describir() = 0;
};

#endif