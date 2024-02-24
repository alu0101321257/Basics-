#include <iostream>
#include "perro.h"

void Perro::mostrardatos(){
    std::cout << "El nombre del perro es: " << nombre << std::endl ;
    std::cout << "La raza del perro es: "<< raza << std ::endl ;  
}

void Perro::jugar(){
    std::cout << "El perro " << nombre << " esta jugando" << std:: endl;
}