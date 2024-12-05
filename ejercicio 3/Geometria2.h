//
// Created by Roberto C on 4/12/24.
//


#ifndef GEOMETRIA2_H
#define GEOMETRIA2_H // Definimos GEOMETRIA2_H para evitar múltiples inclusiones de este archivo

namespace Geometria2 { // Declaramos el espacio de nombres "Geometria2"

    class Circulo { // Definimos la clase "Circulo"
    public:
        Circulo(double r); // Constructor de la clase, recibe el radio como parámetro
        double calcularArea() const; // Para calcular el área del círculo
        double calcularPerimetro() const; // Para calcular el perímetro del círculo

    private:
        double radio; // Atributo privado que almacena el radio del círculo
    };

}

#endif // GEOMETRIA2_H





