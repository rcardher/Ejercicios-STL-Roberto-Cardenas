//
// Created by Roberto C on 4/12/24.
//

#ifndef CIENCIA_H
#define CIENCIA_H // Definimos CIENCIA_H para evitar múltiples inclusiones de este archivo

namespace Ciencia { // Declaramos el espacio de nombres "Ciencia"
    namespace Fisica { // Subespacio de nombres "Fisica", dentro de "Ciencia"

        const double VELOCIDAD_DE_LA_LUZ = 299792458.0; // Definimos la constante de la velocidad de la luz en metros por segundo

        double calcularEnergia(double masa); // Declaración de la función para calcular la energía de un objeto según su masa
    }
}

#endif // CIENCIA_H





