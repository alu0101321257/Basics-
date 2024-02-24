// POLIMOFISMO--> el polimorfismo permite que varios objetos respondan de un modo diferente al mismo mensaje. El polimorfismo 
//adquiere su maxima potencia cuando se usa con la herencia 

#include<iostream>
#include "poligono.hpp"
#include "retangulo.hpp"
#include "triangulo.hpp"
int main(){
    Poligono* poligonos[2]; 

    poligonos[0] = new Rectangulo(7,4);
    poligonos[1] = new Triangulo(3,4,4);

    for (int i = 0 ; i<2 ; i++){
        std::cout << "Area: " << poligonos[i]->area()<< std::endl ; 
        std::cout<< "Perimetro: "<< poligonos[i]->perimetro()<<std ::endl ; 
    }  

    delete[] poligonos; 
    return 0 ; 
}