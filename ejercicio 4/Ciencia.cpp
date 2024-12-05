//
// Created by Roberto C on 4/12/24.
//
#include "Ciencia.h" // Incluimos el archivo de cabecera que contiene las declaraciones relacionadas con ciencia

namespace Ciencia { // Definimos el espacio de nombres "Ciencia"
    namespace Fisica { // Subespacio de nombres "Fisica", dentro de "Ciencia"

        double calcularEnergia(double masa) {
            // Función que calcula la energía según la fórmula E = m * c^2
            return masa * VELOCIDAD_DE_LA_LUZ * VELOCIDAD_DE_LA_LUZ;
            // Usamos la constante VELOCIDAD_DE_LA_LUZ al cuadrado para calcular la energía
        }
    }
}

