#include <iostream>
#include <string>

int main() {

    std::string miCadena = "Hola, mundo!";

    std::string subcadenaBuscar = "mundo";
    size_t indiceInicio = miCadena.find(subcadenaBuscar);


    if (indiceInicio != std::string::npos) {
        std::cout << "La subcadena '" << subcadenaBuscar << "' se encuentra en el índice: " << indiceInicio << std::endl;

        std::string nuevaSubcadena = "amigo";
        miCadena.replace(indiceInicio, subcadenaBuscar.length(), nuevaSubcadena);

        std::cout << "Cadena resultante: " << miCadena << std::endl;
    } else {
        std::cout << "La subcadena '" << subcadenaBuscar << "' no se encontró en la cadena." << std::endl;
    }

    return 0;
}
