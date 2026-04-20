#include <iostream>
#include <string>
#include "Conversacion.h"

int main() {
    Conversacion chat;
    std::string entrada;

    std::cout << "--- CHAT ---" << std::endl;
    std::cout << "(Escribe 'salir' para terminar y guardar)" << std::endl;

    while(true) {
        std::cout << "Tu: ";
        std::getline(std::cin, entrada);
        
        if(entrada == "salir") break;
        
        chat.registrarInteraccion(entrada);
    }

    chat.generarJSON();
    return 0;
}