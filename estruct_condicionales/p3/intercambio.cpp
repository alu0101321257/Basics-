#include <iostream>

int main (){

    int x; 
    int y; 
    int temp; 

    std::cout << "Introducir perimer numero valor de X" << std::endl;
    std::cin >> x ; 
    std::cout << "Introducir perimer numero valor de Y" << std::endl;
    std::cin >> y ;
    std:: cout << "EL valor de X es: "<< x << " el valor de Y es: " << y  << std::endl;

    temp = x;
    x = y;
    y = temp;
    std::cout << "*******************************************" << std::endl;
    std::cout << "Déspues del cambio eL valor de X es: "<< x << " el valor de Y es: " << y  << std::endl;

    return 0;
}