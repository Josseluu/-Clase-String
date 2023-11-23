#include <iostream>
#include <string>

#include <iostream>
#include <string>

int main() {

    std::string miCadena = "Hola, mundo!";

    std::cout << "El tamaño de la cadena es: " << miCadena.size() << std::endl;

    if (miCadena.empty()) {
        std::cout << "La cadena está vacía." << std::endl;
    } else {
        std::cout << "La cadena no está vacía." << std::endl;
    }

    return 0;
}
