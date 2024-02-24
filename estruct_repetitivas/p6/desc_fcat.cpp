#include <iostream>

// programa que descompone factores primos 
int main(){

    int numero ;
    std::cout << "Ingrese el numero a descomponer: ";
    std::cin >> numero;

    for(int i = 2; i <= numero; i++){
        while(numero % i == 0){
            std::cout << i << " ";
            numero /= i;
        }
    }
    std::cout << std::endl;
    return 0 ; 
}