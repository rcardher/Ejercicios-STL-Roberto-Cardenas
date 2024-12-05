//
// Created by Roberto C on 4/12/24.
//

#include "Geometria2.h" // Incluimos el archivo de cabecera que contiene la declaración de la clase Circulo
#include <cmath> // Incluimos la librería matemática para usar M_PI y otras funciones matemáticas

namespace Geometria2 { // Definimos el espacio de nombres "Geometria2"

    Circulo::Circulo(double r) : radio(r) {}
    // Constructor de la clase Circulo que inicializa el radio con el valor pasado como parámetro

    double Circulo::calcularArea() const {
        // Para calcular el área del círculo
        return M_PI * radio * radio;
        // Fórmula del área del círculo: π * radio^2
    }

    double Circulo::calcularPerimetro() const {
        // Para calcular el perímetro del círculo
        return 2 * M_PI * radio;
        // Fórmula del perímetro del círculo: 2 * π * radio
    }
}
