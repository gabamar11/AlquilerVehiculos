#include "Vehiculos.h"

// Constructor de la clase base
Vehiculo::Vehiculo(std::string m, std::string mod, std::string p) : marca(m), modelo(mod), placa(p), estadoDisp(true) {}

void Vehiculo::mostrarInformacion() const {
    std::cout << "Placa: " << placa << " - Marca: " << marca << " - Modelo: " << modelo;
}

bool Vehiculo::isDisponible() const { return estadoDisp; }
void Vehiculo::setDisponible(bool estado) { estadoDisp = estado; }
std::string Vehiculo::getPlaca() const { return placa; }

// Constructor de Auto
Auto::Auto(std::string m, std::string mod, std::string p, int cap) : Vehiculo(m, mod, p), numPasajeros(cap) {}

void Auto::mostrarInformacion() const {
    std::cout << "AUTO -> Placa: " << placa << " | " << marca << " " << modelo << " | Puestos: " << numPasajeros;
}

// Constructor de Bicicleta
Bicicleta::Bicicleta(std::string m, std::string mod, std::string p, std::string t) : Vehiculo(m, mod, p), tipoBici(t) {}

void Bicicleta::mostrarInformacion() const {
    std::cout << "BICI -> ID: " << placa << " | " << marca << " " << modelo << " | Estilo: " << tipoBici;
}
