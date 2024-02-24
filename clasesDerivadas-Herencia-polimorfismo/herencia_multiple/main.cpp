//HERENCIA MULTIPLE --> en este tipo de herencia una clase hereda los miembros de mas de una clase base , es decir una clase hija 
//hereda de varias clases padre 
#include <iostream>
#include "hidroavion.hpp"

int main(){
    Hidroavion* h1 = new Hidroavion("Catalina" ,"Consolidated Aircraft", "PBY" ); 

    h1->mostrarDatos(); 

    std::cout<< std::endl ; 
    h1->despAvion(); 
    h1->despBarco(); 

   
    



    return 0 ; 
}