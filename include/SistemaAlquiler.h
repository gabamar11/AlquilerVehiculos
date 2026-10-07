#pragma once
#include "Vehiculos.h"
#include <vector>

class SistemaAlquiler {
private:
    std::vector<Vehiculo*> flotaVehiculos; // aqui guardamos todo el inventario
public:
    ~SistemaAlquiler();
    void registrarVehiculo(Vehiculo* v);
    void alquilarVehiculo(std::string placa);
    void devolverVehiculo(std::string placa);
    void mostrarDisponibles() const;
};
