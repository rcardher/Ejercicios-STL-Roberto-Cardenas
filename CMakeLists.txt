cmake_minimum_required(VERSION 3.10)
project(Ejercicios_STL_Roberto_Cardenas)

# Especificar el estándar de C++
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Incluir el directorio del ejercicio
include_directories("Ejercicio 1")

# Agregar los archivos de origen
add_executable(programa
        main.cpp
        "Ejercicio 1/Matematicas.cpp"
)
