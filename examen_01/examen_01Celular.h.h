#ifndef CELULAR_H
#define CELULAR_H

#include <iostream>
#include <string>

class Celular {
private:

    std::string marca;
    std::string modelo;
    int gigasAlmacenamiento;
    int gigasRAM;
    double precio;

public:
    Celular(std::string _marca, std::string _modelo, int _gigasA, int _gigasR, double _precio);

    void caracteristicas(); 
    void verprecio();      
    void vermodelo();      
};

#endif