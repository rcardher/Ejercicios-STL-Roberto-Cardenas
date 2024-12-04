//
// Created by Roberto C on 4/12/24.
//
#include <iostream>
#include "Matematicas.h"
#include "Geometria.h"

int main() {
    // Ejercicio 1
    std::cout << "Suma: " << Matematicas::suma(5, 3) << std::endl;
    std::cout << "Resta: " << Matematicas::resta(5, 3) << std::endl;

    // Ejercicio 2
    std::cout << "Área de un triángulo (base 5, altura 4): "
              << Geometria::calcularAreaTriangulo(5, 4) << std::endl;
    std::cout << "Área de un círculo (radio 3): "
              << Geometria::calcularAreaCirculo(3) << std::endl;

    return 0;
}