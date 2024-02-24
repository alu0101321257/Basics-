//construir un programa que permita dirigir el movimiento de un objeto y actualice su posicion dentro del mismo.
//Los movimientos posibles son : ARRIBA ,ABAJO , IZQUIERDA , DERECHA
//tras cada movimiento el programa mostrará la nueva direcion elegida y las coordenadas de situacion del objeto dentro del tablero 

#include<iostream>
#include "tablero.hpp"

int main(){

    Tablero* t1; 
    int x ; 
    int y ; 

    std::cout<< "Introduce la posicion inicial del objeto: " << std::endl ; 
    std::cout<< "Introduce la posicion de la cordenada x: " << std ::endl ;
    std::cin >> x ;
    std::cout<< "Introduce la posicion de la cordenada y: " << std ::endl ;
    std::cin >> y ; 

    t1 = new Tablero(x,y);
    int respuesta ; 
    int n ; 
    do{
        std::cout<< "-----------------MENU-----------------"<<std::endl ; 
        std::cout<< "Introduce una opcion de las siguinetes"<< std :: endl ; 
        std::cout<< "1. Mover hacia arriba"<< std :: endl ; 
        std::cout<< "2. Mover hacia abajo"<< std :: endl ; 
        std::cout<< "3. Mover hacia derecha"<< std :: endl ; 
        std::cout<< "4. Mover hacia izquierda"<< std :: endl ; 
        std::cout<< "5. ---------SALIR---------"<< std :: endl ;  
        std::cin >> respuesta; 
        if((respuesta >=1 )&&(respuesta <=4)){
            std::cout << "Introduzca cuantas posiciones desea moverse: " << std::endl ; 
            std::cin >> n ; 
        }
        
        switch (respuesta) {
            case 1 : t1->moverArriba(n); break;
            case 2 : t1->moverAbajo(n); break;
            case 3 : t1->moverDerecha(n); break;
            case 4 : t1->moverIzquierda(n); break;   
            case 5 : break;     
            default:std ::cout << "Ha introcucido una opcion incorrecta"<< std::endl; break;
        }

        std::cout << "-La posicion actual de la x es: " << t1->getX()<< std::endl; 
        std::cout << "-La posicion actual de la y es: " << t1->getY()<< std::endl; 
        std::cout << "-Posicion actual (x,y): " << "(" <<  t1->getX()<< "," << t1->getY()<<")"<< std::endl;
    }while(respuesta != 5 );



    return 0 ; 
}