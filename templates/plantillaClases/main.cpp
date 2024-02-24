// plantillas de CLASE --> permiten definir versiones de una misma clase que difieren en el tipo de dato de alguno(s) de sus miembros.
//Es decir , se crea el modelo de una clase el cual permitirá definir distintas instancias de la misma para diferentes tipos de datos  
#include<iostream>
#include "plantillaclase.hpp"

int main(){
    // primero indicamos el tipo de dato que le vamos a pasar (Ejemploplantilla<int , float>) , despues declaramos el objeto (ej1()), y 
    //por último le asignamos lo valores (ej1(7,50.9)) , teniendo en cuenta el tipo de dato que hemos nombrado antes 
    
    Ejemploplantilla<int , float> ej1(7, 50.9); 
    std::cout<<"\nDatos antes del cambio" << std::endl ; 
    ej1.mostrarDatos(); 

    ej1.setDato1(10);
    ej1.setDato2(20);

    std::cout<<"\nDatos despues del cambio" << std::endl ; 
    ej1.mostrarDatos();


    return 0 ; 
}