//
// Created by Roberto C on 4/12/24.
//
#include "Ciencia.h"

namespace Ciencia {
    namespace Fisica {
        double calcularEnergia(double masa) {
            return masa * VELOCIDAD_DE_LA_LUZ * VELOCIDAD_DE_LA_LUZ;
        }
    }
}
