//
// Created by Roberto C on 4/12/24.
//

#include "Geometria2.h"
#include <cmath>

namespace Geometria2 {
    Circulo::Circulo(double r) : radio(r) {}

    double Circulo::calcularArea() const {
        return M_PI * radio * radio;
    }

    double Circulo::calcularPerimetro() const {
        return 2 * M_PI * radio;
    }
}
