#include <iostream>


// programa que te dice si tu edad esta ene l rango de 18 a 25
int main(){

    int edad; 
    std::cout << "Introduce la edad " << std::endl; 
    std:: cin >> edad;

    if(edad >= 18 && edad <= 25){
        std::cout << "Tu edad esta en el rango de 18 a 25" << std::endl;
    }else{
        std::cout << "Tu edad esta fuera del rengo " << std::endl;
        if(edad < 18){
            std::cout << "Eres menor de edad" << std::endl;
        }else if (edad > 25){
            std::cout << "Eres demasiado mayor " << std::endl;
        }   
    }

    return 0;
}