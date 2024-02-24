#include <iostream>

//CLASES ABSTRACTAS 
//- solo se pueden usar como clase padre o superclases 
//- no se pueden instanciar objetos de las clases bases , es decir que las clases abastactas solo permiten crear subclases 
//- sirven para proporcionar una clase padre apropiada de la que heredaran las otras clases 
//- En conclusion es como una clase modelo de la que despues se sacaran mas clases hijas 

#include "planta.hpp"
#include "hervivoro.hpp"
#include "carnivoro.hpp"

int main(){
    // solo podremos crear instancias de la clase carnivoro , hervivoro  y planta , ya que las otras clases son abstractas y no se 
    // pueden instanciar 

    Planta * p1 = new Planta(); 
    Hervivoro* h1 = new Hervivoro(); 
    Carnivoro* c1 = new Carnivoro(); 

    p1->alimentarse(); 
    h1->alimentarse(); 
    c1->alimentarse(); 


    return 0 ; 
}