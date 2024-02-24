#include<iostream>
#include"estatic.hpp"

//MIEMBROS STATIC
int main(){

    Estatico obj1;
    Estatico obj2; 
    Estatico obj3; 
    Estatico obj4; 

    std::cout << "El valor del contador es: " << obj1.getCont() << " por lo tanto has creado " << obj1.getCont() <<" objetos de la clase "<< std::endl ;   

    // con los metodos no estaticos habia que instanciar un objeto y a traves de el objeto teniamos que llamar al metodo como hicimos antes
    // creando obj1 y despues llamando al metodo obj1.getCont() , pero con los metodos esrarucis no pasa eso sino que hacemos lo siguinete 
    std :: cout << "La suma es : " << Estatico ::sumar(4,5) << std ::endl ; 
    return 0 ; 
}