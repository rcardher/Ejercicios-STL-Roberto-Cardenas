//
// Created by Roberto C on 4/12/24.
//

#include <vector>
#include <map>
#include <set>
#include <iostream>
#include "Contenedores.h"

void operarVector() {
    std::vector<int> numeros {1, 2, 3, 4, 5};
    numeros.push_back(6);
    std::cout << "Elementos en el vector: ";
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void operarMap() {
    std::map<std::string, int> edad;
    edad["Juan"] = 25;
    edad["Roberto"] = 18;
    edad["Miguel"] = 35;
    std::cout << "Elementos en el map: ";
    for (const auto& par : edad) {
        std::cout << par.first << ": " << par.second << " ";
    }
    std::cout << std::endl;
}

void operarSet() {
    std::set<int> conjunto {1, 2, 3, 4, 5};
    conjunto.insert(6);
    conjunto.erase(1);
    std::cout << "Elementos en el set: ";
    for (int elem : conjunto) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

