#include<iostream> 
#include "cuadrilatero.hpp"
// hacer un programa que calcule el área y el perímetro de un cuadrilatero dada la longitud de sus dos lados. Los valores de la longitud 
// deberan de introducirse por la linea de comandos . Si se trata de un cuadrado solo hará falta que se de uno de los lados al constructor 


int main() {
    float lado1; 
    float lado2;

    std::cout << "Introduce el lado1: " << std::endl; 
    std::cin >> lado1; 

    std::cout << "Es un cuadrado? (s/n): ";
    char esCuadrado;
    std::cin >> esCuadrado;

    Cuadrilatero* c1;

    if(esCuadrado == 's' || esCuadrado == 'S') {
        std::cout << "----HAS INTRODUCIDO UN CUADRADO----" << std::endl;
        c1 = new Cuadrilatero(lado1);
    } else {
        std::cout << "Introduce el lado2: " << std::endl; 
        std::cin >> lado2;
        std::cout << "----HAS INTRODUCIDO UN RECTANGULO----" << std::endl;
        c1 = new Cuadrilatero(lado1, lado2);
    }

    std::cout << "El perimetro del cuadrilatero es: " << c1->obtenerPerimetro() << std::endl;
    std::cout << "El area del cuadrilatero es: " << c1->obtenerArea() << std::endl;

    delete c1; //  liberar la memoria.
    return 0;
}
