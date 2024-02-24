#include <iostream>

//comprobar si un numero es positivo o negativo

int main() {

    double numero; 

    std::cout << "Ingrese un numero: "<< std::endl;
    std::cin >> numero;

    if (numero > 0) {
        std::cout << "El numero es positivo" << std::endl;
    } else if (numero < 0) {
        std::cout << "El numero es negativo" << std::endl;
    } else {
        std::cout << "El numero es cero" << std::endl;
    }


    return 0; 
}