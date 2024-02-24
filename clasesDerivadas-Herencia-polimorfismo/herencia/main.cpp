#include<iostream>
#include"triangulo.hpp"

//herencia PUBLICA: 
// - Lo PUBLICO se hereda como PUBLIC 
// - Lo PROTECTED se hreda como PROTECTED 
// - Lo PRIVADO es INACCESIBLE 

//herencia PRIVADA 
// - Lo PUBLICO se hereda como PRIVATE 
// - Lo PROTECTED se hereda como PRIVATE 
// - Lo PRIVADO es INACCESIBLE 

//herencia PROTECTED 
// -Lo PUBLICO se hereda como PROTECTED 
// -Lo PROTECTED se hereda como PROTECTED 
// -Lo PRIVADO es INACCESIBLE 

int main(){
    Triangulo* t1= new Triangulo(3,5,6,7); 

    std::cout <<"El numero de lados es: " << t1->getnLados() << std::endl ; 
    std::cout<< "El area del triangulo es: " << t1->areaTriangulo()<< std::endl ; 
    
    return 0 ; 
}