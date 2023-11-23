#include <iostream>
#include <string>

int main() {

    std::string miCadena = "El lenguaje C++ es poderoso!";

    std::string subcadenaBuscar = "C++";
    size_t indiceInicio = miCadena.find(subcadenaBuscar);


    if (indiceInicio != std::string::npos) {
        std::cout << "Subcadena encontrada en la posición '" << subcadenaBuscar << "' Subcadena no encontrada: " << indiceInicio << std::endl;

        std::string nuevaSubcadena = "amigo";
        miCadena.replace(indiceInicio, subcadenaBuscar.length(), nuevaSubcadena);

        std::cout << "Cadena resultante: " << miCadena << std::endl;
    } else {
        std::cout << "La subcadena '" << subcadenaBuscar << "' no se encontró en la cadena." << std::endl;
    }

    return 0;
}
