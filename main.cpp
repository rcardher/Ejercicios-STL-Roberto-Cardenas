//
// Created by Roberto C on 4/12/24.
//

#include <iostream>       // Incluimos la librería para imprimir en consola
#include "Matematicas.h"  // Incluimos el archivo con las funciones matemáticas
#include "Geometria.h"    // Incluimos el archivo con las funciones geométricas
#include "Geometria2.h"   // Incluimos el archivo con la clase Circulo
#include "Ciencia.h"      // Incluimos el archivo con las funciones científicas
#include "Contenedores.h" // Incluimos el archivo con las funciones para contenedores STL

int main() {
    // Ejercicio 1
    std::cout << "Suma: " << Matematicas::suma(5, 3) << std::endl;  // Calculamos la suma de 5 + 3
    std::cout << "Resta: " << Matematicas::resta(5, 3) << std::endl; // Calculamos la resta de 5 - 3

    // Ejercicio 2
    std::cout << "Área de un triángulo (base 5, altura 4): "
              << Geometria::calcularAreaTriangulo(5, 4) << std::endl;  // Calculamos el área de un triángulo
    std::cout << "Área de un círculo (radio 3): "
              << Geometria::calcularAreaCirculo(3) << std::endl; // Calculamos el área de un círculo

    // Ejercicio 3
    Geometria2::Circulo circulo(3.0); // Creamos un objeto de la clase Circulo con radio 3.0
    std::cout << "Área del círculo: " << circulo.calcularArea() << std::endl; // Calculamos el área del círculo
    std::cout << "Perímetro del círculo: " << circulo.calcularPerimetro() << std::endl; // Calculamos el perímetro

    // Ejercicio 4
    double masa = 2.0; // Masa en kilogramos
    double energia = Ciencia::Fisica::calcularEnergia(masa); // Calculamos la energía
    std::cout << "Energía (E=mc^2) para masa " << masa << " kg: " << energia << " julios" << std::endl;

    // Ejercicio 5:
    operarVector(); // Llamamos a la función para operar con un vector
    operarMap();    // Llamamos a la función para operar con un mapa
    operarSet();    // Llamamos a la función para operar con un conjunto (set)

    return 0; // Indicamos que el programa terminó correctamente
}


