#ifndef CONVERSACION_H
#define CONVERSACION_H
#include "Mensaje.h"
#include <vector>

class Conversacion {
private:
    std::vector<Mensaje*> historial; // Lista polimórfica de punteros

public:
    ~Conversacion();
    void registrarInteraccion(std::string t);
    void generarJSON();
};
#endif