#include<iostream>
#include "persona.h"

int main (){
    Persona *persona1 = new Persona("javier", 22 );
    Persona *persona2 = new Persona(12345678); 

    persona1 -> presentar();
    std ::cout << std ::endl ; 
    persona2 -> verDni();

    return 0 ; 
}