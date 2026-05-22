#ifndef FIGURA_H
#define FIGURA_H

#include <string>

class Figura {
protected:
    std::string nombre;

public: 
//constructor 
    Figura(std::string nombre);
//destructor virtual 
    virtual ~Figura(); 
//Funciones virtuales 
    virtual double calcularArea() = 0; 
    virtual void describir() = 0;
    //getter
    std::string obtenerNombre() const; 

}; 
#endif