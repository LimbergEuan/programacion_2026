#include "Conversacion.h"
#include <iostream>
#include <fstream>

Conversacion::~Conversacion() {
    // polimor: limpiamos la memoria 
    for (Mensaje* m : historial) {
        delete m;
    }
}

void Conversacion::registrarInteraccion(std::string t) {
    // Guardamos
    historial.push_back(new MensajeUsuario(t));
    
    // eco en consola 
    std::cout << "[Eco Sistema]: " << t << std::endl;
    
    // Guardamos el del sistema
    historial.push_back(new MensajeSistema(t));
}

void Conversacion::generarJSON() {
    std::ofstream f("historial_chat.json");
    f << "[\n";
    for(size_t i = 0; i < historial.size(); i++) {
        f << "  {\n";
        f << "    \"autor\": \"" << historial[i]->obtenerAutor() << "\",\n";
        f << "    \"mensaje\": \"" << historial[i]->getTexto() << "\",\n";
        f << "    \"fecha\": \"" << historial[i]->getFecha() << "\"\n";
        f << "  }" << (i == historial.size() - 1 ? "" : ",") << "\n";
    }
    f << "]";
    f.close();
    std::cout << "\n>>> Archivo JSON creado con exito" << std::endl;
}