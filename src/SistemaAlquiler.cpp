#include "SistemaAlquiler.h"

SistemaAlquiler::~SistemaAlquiler() {
    for (auto v : flotaVehiculos) {
        delete v;
    }
}

void SistemaAlquiler::registrarVehiculo(Vehiculo* v) {
    flotaVehiculos.push_back(v);
    std::cout << "--> Nuevo vehiculo registrado con placa: " << v->getPlaca() << "\n";
}

void SistemaAlquiler::alquilarVehiculo(std::string placa) {
    // buscamos la placa en el vector
    for (auto v : flotaVehiculos) {
        if (v->getPlaca() == placa) {
            if (v->isDisponible()) {
                v->setDisponible(false);
                std::cout << "Listo! Se alquilo el vehiculo " << placa << "\n";
            } else {
                std::cout << "Uy, el vehiculo " << placa << " ya lo tiene alguien mas.\n";
            }
            return; // salimos del metodo para no seguir buscando
        }
    }
    std::cout << "Error: No se encontro ningun vehiculo con la placa " << placa << "\n";
}

void SistemaAlquiler::devolverVehiculo(std::string placa) {
    for (auto v : flotaVehiculos) {
        if (v->getPlaca() == placa) {
            v->setDisponible(true);
            std::cout << "Perfecto, vehiculo " << placa << " devuelto al sistema.\n";
            // std::cout << "estado cambiado a true\n"; // linea de debug comentada
            return;
        }
    }
}

void SistemaAlquiler::mostrarDisponibles() const {
    std::cout << "\n*** LISTA DE DISPONIBLES ***\n";
    bool hay = false;
    for (auto v : flotaVehiculos) {
        if (v->isDisponible()) {
            v->mostrarInformacion();
            std::cout << "\n";
            hay = true;
        }
    }
    if (!hay) {
        std::cout << "Ahorita no hay nada disponible.\n";
    }
    std::cout << "****************************\n\n";
}
