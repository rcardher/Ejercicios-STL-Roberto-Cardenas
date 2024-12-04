//
// Created by Roberto C on 4/12/24.
//
#include <iostream>
#include "Matematicas.h"
#include "Geometria.h"
#include "Geometria2.h"
#include "Ciencia.h"

int main() {
    // Ejercicio 1
    std::cout << "Suma: " << Matematicas::suma(5, 3) << std::endl;
    std::cout << "Resta: " << Matematicas::resta(5, 3) << std::endl;

    // Ejercicio 2
    std::cout << "Área de un triángulo (base 5, altura 4): "
              << Geometria::calcularAreaTriangulo(5, 4) << std::endl;
    std::cout << "Área de un círculo (radio 3): "
              << Geometria::calcularAreaCirculo(3) << std::endl;


    // Ejercicio 3
    Geometria2::Circulo circulo(3.0);
    std::cout << "Área del círculo: " << circulo.calcularArea() << std::endl;
    std::cout << "Perímetro del círculo: " << circulo.calcularPerimetro() << std::endl;

    // Ejercicio 4
    double masa = 2.0; // en kilogramos
    double energia = Ciencia::Fisica::calcularEnergia(masa);
    std::cout << "Energía (E=mc^2) para masa " << masa << " kg: " << energia << " julios" << std::endl;

    return 0;
}

