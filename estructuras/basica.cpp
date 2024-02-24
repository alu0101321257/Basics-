#include <iostream>
#include <cstring>

struct persona {
    char nombre[20];
    int edad;
    float altura;
};

int main() {
    persona persona1, persona2;

    std::strcpy(persona1.nombre, "javi");
    persona1.edad = 22;
    persona1.altura = 1.80;

    std::cout << "Persona 1" << std::endl;
    std::cout << "El nombre " << persona1.nombre << std::endl;
    std::cout << "El edad " << persona1.edad << std::endl;
    std::cout << "El altura " << persona1.altura << std::endl;

    std::cout << "Introduce el nombre de la persona: " << std::endl;
    std::cin.getline(persona2.nombre, 20);

    // Utiliza std::stoi para convertir la cadena a int
    std::cout << "Introduce el edad de la persona: " << std::endl;
    std::string edad_str;
    std::getline(std::cin, edad_str);
    persona2.edad = std::stoi(edad_str);

    // Utiliza std::stof para convertir la cadena a float
    std::cout << "Introduce el altura de la persona: " << std::endl;
    std::string altura_str;
    std::getline(std::cin, altura_str);
    persona2.altura = std::stof(altura_str);

    std::cout << "Persona 2" << std::endl;
    std::cout << "El nombre " << persona2.nombre << std::endl;
    std::cout << "El edad " << persona2.edad << std::endl;
    std::cout << "El altura " << persona2.altura << std::endl;

    return 0;
}
