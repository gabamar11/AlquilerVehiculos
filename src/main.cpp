#include "SistemaAlquiler.h"
#include <iostream>

using namespace std; // muy comun usar esto para no poner std:: a cada rato

int main() {
    SistemaAlquiler admin;

    cout << "INICIANDO SISTEMA...\n\n";
    
    // Agregamos un par de carros de prueba
    admin.registrarVehiculo(new Auto("Toyota", "Corolla", "ABC-123", 5));
    admin.registrarVehiculo(new Auto("Ford", "Fiesta", "XYZ-987", 4));
    
    // Agregamos una bici
    admin.registrarVehiculo(new Bicicleta("Trek", "Marlin", "BIC-001", "Montana"));

    admin.mostrarDisponibles();

    // Pruebas de alquiler
    cout << "\n-- Probando los alquileres --\n";
    admin.alquilarVehiculo("ABC-123");
    admin.alquilarVehiculo("ABC-123"); // Intento doble a ver si falla
    admin.alquilarVehiculo("BIC-001");

    admin.mostrarDisponibles();

    // Devolucion
    cout << "\n-- Probando devolucion --\n";
    admin.devolverVehiculo("ABC-123");
    
    admin.mostrarDisponibles();

    return 0;
}
