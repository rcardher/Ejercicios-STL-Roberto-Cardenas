//
// Created by Roberto C on 4/12/24.
//

#include "Geometria.h" // Incluimos el archivo que contiene las declaraciones relacionadas con geometría
#define _USE_MATH_DEFINES // Habilitamos las definiciones matemáticas, como M_PI, para usar constantes de la librería cmath
#include <cmath> // Incluimos la librería matemática para usar funciones y constantes como M_PI

namespace Geometria { // Definimos el espacio de nombres "Geometria"
    double calcularAreaCirculo(double radio) { // Función que calcula el área de un círculo dado su radio
        return M_PI * radio * radio; // Usamos la fórmula del área del círculo: π * radio^2
    }
}
