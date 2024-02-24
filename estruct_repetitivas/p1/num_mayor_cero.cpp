#include <iostream>

//programa que lee un numero hasta que se de un 0 y despues devuelve todos los numeros que sea han dado hasta que se introducio el 0 

int main (){

    int numero;
    int cont = 0;

    std::cout << "Introduce un numero: "<< std::endl;
    std::cin >> numero;

    while(numero!= 0){
        std::cout << "el numero introducido es: "<<numero << std::endl;
        cont++;
        std::cout << "Introduce otro numero: " << std::endl;
        std::cin >> numero;
        if(numero == 0){
            std::cout << "has introdicido un cero el progrma ha termiando " << std::endl;
        }
    }
    return 0;
}