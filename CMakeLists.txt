cmake_minimum_required(VERSION 3.10)
project(Ejercicios_STL_Roberto_Cardenas)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories("Ejercicio 1")
include_directories("Ejercicio 2")
include_directories("Ejercicio 3")
include_directories("Ejercicio 4")
include_directories("Ejercicio 5")

add_executable(programa
        main.cpp
        "Ejercicio 1/Matematicas.cpp"
        "Ejercicio 2/triangulo.cpp"
        "Ejercicio 2/circulo.cpp"
        "ejercicio 3/Geometria2.cpp"
        "ejercicio 4/Ciencia.cpp"
        "ejercicio 5/Contenedores.h"
        "ejercicio 5/Contenedores.cpp"
)
