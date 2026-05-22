#ifndef MENSAJE_H
#define MENSAJE_H
#include <string>

// Clase Base 
class Mensaje {
protected:
    std::string texto;
    std::string fecha;

public:
    Mensaje(std::string t);
    virtual ~Mensaje() {}
    
    // Esto es el polimorfismo puro
    virtual std::string obtenerAutor() = 0; 
    
    std::string getTexto();
    std::string getFecha();
};

// Clase para msj
class MensajeUsuario : public Mensaje {
public:
    MensajeUsuario(std::string t) : Mensaje(t) {}
    std::string obtenerAutor() override { return "Usuario"; }
};

// Clase para que pueda devolver, como tipo eco 
class MensajeSistema : public Mensaje {
public:
    MensajeSistema(std::string t) : Mensaje(t) {}
    std::string obtenerAutor() override { return "Sistema"; }
};
#endif