#ifndef VEHICULO_H
#define VEHICULO_H
#include <string>

class Vehiculo {
protected:
    std::string marca;
    std::string modelo;
    int anio;
    std::string placa; // Atributo nuevo solicitado

public:
    Vehiculo();
    Vehiculo(std::string marca, std::string modelo, int anio, std::string placa = "SIN PLACA");

    void actualizarMarca(std::string nuevaMarca);
    void actualizarModelo(std::string nuevoModelo);
    void actualizarAnio(int nuevoAnio);
    void actualizarPlaca(std::string nuevaPlaca); // Requisito: cambio de placas

    void mostrarInformacion();

    std::string obtenerMarca();
    std::string obtenerModelo();
    int obtenerAnio();
    std::string obtenerPlaca();
};
#endif