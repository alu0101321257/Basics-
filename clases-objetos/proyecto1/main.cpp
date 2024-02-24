#include<iostream>

//tenemos que hacer un include de la clase punto.h que es de donde vamos a coger los datos para instanciar los objetos
#include "punto.h"

int main(){

    // la creacion de objetos se puede hacer de forma estática y de forma dinámica 
    // CREACION DE UN OBJETO ESTATICO
    Punto p1(1,1); 

    // una vez hecho lo anterior p1 es un objeto de la clase punto por lo que podrá acceder a todos los métodos que hemos creado en dicha clase 
    std :: cout << "El valor de x es: " << p1.get_x() << std ::endl ;
    std :: cout << "EL valor de y es: " << p1.get_y() << std::endl ;
    // cambiando los valores cuando es de forma ESTATICA usamos p1.set_x(2); 
    p1.set_x(2); 
    p1.set_y(2);

    std :: cout << "\nCAMBIANDO VALOR DE FORMA ESTATICA" << std ::endl ; 
    std :: cout << "El nuevo valor de x es: " << p1.get_x() << std ::endl ;
    std :: cout << "EL nuevo valor de y es: " << p1.get_y() << std::endl ;
    
    //CREANCION DE UN OBJETO DE FORMA DINÁMICA 
    Punto* p2 = new Punto(); 
    //haciendo esto estamos usando el metodo donde las variables x e y estan inicializadas a 0 
    //cuando cambiamos los valores de froma DINAMICA usamos p2->set_x(2);
    p2->set_x(3);
    p2->set_y(3);
    std :: cout << "\nCAMBIANDO VALOR DE FORMA DINAMICA" << std ::endl ; 
    std :: cout << "El nuevo valor de x es: " << p2->get_x() << std ::endl ;
    std :: cout << "EL nuevo valor de y es: " << p2->get_y() << std::endl ;




    return 0; 
}