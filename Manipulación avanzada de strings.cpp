#include <iostream>
#include <string>
int main() {
    std::string str = "Inteligencia Artificial";
    std::string sub_str = str.substr(13, 9);
    std::string new_str = str.insert(0, "La "); // "La Inteligencia Artificial"
