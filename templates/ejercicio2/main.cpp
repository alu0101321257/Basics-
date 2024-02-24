//definir una plantilla dentro del archivo intercambio.hpp que pueda intercambair dos elementos del mismo tipo 

#include <iostream>
#include "intercambio.hpp"

int main(){
    int i1=0 ; 
    int i2=0; 
    float f1=0; 
    float f2=0 ; 

    std::cout<<"\n"; 
    std::cout<<"----------Valores a intercambiar----------"<< std::endl; 
    std::cout<<"Introduce el entero 1: " << std::endl ;
    std::cin>>i1; 
    std::cout<<"Introduce el entero 2: " << std::endl ; 
    std::cin>>i2; 
    std::cout<<"\n"; 
    std::cout<<"----------Antes del cambio----------"<<std::endl ; 
    std::cout<<"El dato 1 es " << i1 << " el dato 2 es " << i2<< std::endl ; 
    std::cout<<"\n"; 
    intercambio(i1,i2); 
    std::cout<<"----------Despues del cambio----------"<<std::endl ; 
    std::cout<<"El dato 1 es " << i1 << " el dato 2 es " << i2 << std::endl ; 

    std::cout<<"\n"; 
    std::cout<<"----------Valores a intercambiar----------"<< std::endl; 
    std::cout<<"Introduce el flotante 1: " << std::endl ;
    std::cin>>f1; 
    std::cout<<"Introduce el flotante 2: " << std::endl ; 
    std::cin>>f2; 
    std::cout<<"----------Antes del cambio----------"<<std::endl ; 
    std::cout<<"El dato 1 es " << f1 << " el dato 2 es " << f2<< std::endl ; 
    std::cout<<"\n"; 
    intercambio(f1,f2); 
    std::cout<<"----------Despues del cambio----------"<<std::endl ; 
    std::cout<<"El dato 1 es " << f1 << " el dato 2 es " << f2 << std::endl ; 
    

    



    return 0 ; 
}