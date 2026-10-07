#pragma once
#include <string>
#include <iostream>

class Vehiculo {
protected:
    std::string marca;
    std::string modelo;
    std::string placa;
    bool estadoDisp; // indica si esta alquilado o no
public:
    Vehiculo(std::string m, std::string mod, std::string p);
    virtual ~Vehiculo() = default;
    virtual void mostrarInformacion() const;
    bool isDisponible() const;
    void setDisponible(bool estado);
    std::string getPlaca() const;
};

class Auto : public Vehiculo {
private:
    int numPasajeros;
public:
    Auto(std::string m, std::string mod, std::string p, int cap);
    void mostrarInformacion() const override;
};

class Bicicleta : public Vehiculo {
private:
    std::string tipoBici;
public:
    Bicicleta(std::string m, std::string mod, std::string p, std::string t);
    void mostrarInformacion() const override;
};
