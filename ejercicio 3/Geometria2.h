//
// Created by Roberto C on 4/12/24.
//


#ifndef GEOMETRIA2_H
#define GEOMETRIA2_H

namespace Geometria2 {
    class Circulo {
    public:
        Circulo(double r);
        double calcularArea() const;
        double calcularPerimetro() const;

    private:
        double radio;
    };
}

#endif // GEOMETRIA2_H




