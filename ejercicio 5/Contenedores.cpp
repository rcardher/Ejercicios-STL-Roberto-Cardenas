//
// Created by Roberto C on 4/12/24.
//

#include <vector>   // Incluimos la librería para trabajar con vectores
#include <map>      // Incluimos la librería para trabajar con mapas
#include <set>      // Incluimos la librería para trabajar con conjuntos
#include <iostream> /
#include "Contenedores.h"

void operarVector() {
    std::vector<int> numeros {1, 2, 3, 4, 5}; // Creamos un vector con algunos números iniciales
    numeros.push_back(6); // Añadimos el número 6 al final del vector
    std::cout << "Elementos en el vector: ";
    for (int num : numeros) { // Recorremos el vector e imprimimos sus elementos
        std::cout << num << " ";
    }
    std::cout << std::endl; // Salto de línea al final
}

void operarMap() {
    std::map<std::string, int> edad; // Creamos un mapa donde la clave es un string (nombre) y el valor es un entero (edad)
    edad["Juan"] = 25; // Añadimos elementos al mapa con clave "Juan" y valor 25
    edad["Roberto"] = 18; // Añadimos más elementos al mapa
    edad["Miguel"] = 35;
    std::cout << "Elementos en el map: ";
    for (const auto& par : edad) { // Recorremos el mapa e imprimimos las claves y valores
        std::cout << par.first << ": " << par.second << " ";
    }
    std::cout << std::endl; // Salto de línea al final
}

void operarSet() {
    std::set<int> conjunto {1, 2, 3, 4, 5}; // Creamos un conjunto con algunos números iniciales
    conjunto.insert(6); // Añadimos el número 6 al conjunto (no se repite si ya existe)
    conjunto.erase(1); // Eliminamos el número 1 del conjunto
    std::cout << "Elementos en el set: ";
    for (int elem : conjunto) { // Recorremos el conjunto e imprimimos sus elementos
        std::cout << elem << " ";
    }
    std::cout << std::endl; // Imprimimos un salto de línea al final
}


