#include "Mensaje.h"
#include <ctime>

Mensaje::Mensaje(std::string t) : texto(t) {
    time_t now = time(0);
    std::string dt = ctime(&now);
    if (!dt.empty()) dt.pop_back(); // Limpiar el salto de línea
    fecha = dt;
}

std::string Mensaje::getTexto() { return texto; }
std::string Mensaje::getFecha() { return fecha; }