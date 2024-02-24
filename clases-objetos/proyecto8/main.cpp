#include<iostream>
#include "personaje.hpp"
// FUNCIONES AMIGAS  --> son funciones externas a una clase , pero que la clase en cuestion va a ser amiga de esta funcion y le va a 
//permitir acceder a los miembros,con miembros nos referimos a metodos y a variables , privados  y protegidos de la clase  

void modificar(Personaje &p ,int atc , int def ){
    p.ataque = atc ; 
    p.defensa = def ;  

}
int main(){
    std ::cout << "Datos antes de ser modificados" << std ::endl ; 
    Personaje p(100, 50); // Ejemplo de creación de un personaje
    p.mostrarDatos(); // Mostrar datos antes de modificar
    std ::cout << "Datos despues de ser modificados" << std ::endl ;
    modificar(p, 150, 75); // Modificar ataque y defensa
    p.mostrarDatos(); // Mostrar datos después de modificar



    return 0 ; 
}