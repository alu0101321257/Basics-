#include<iostream>
#include "diaano.h"

int main(){
    Diaano * hoy ; 
    Diaano *cumple; 
    int d ; 
    int m ; 

    std :: cout << "Introduzca el dia de hoy: " << std ::endl ; 
    std :: cin >> d ; 
    std :: cout << "Introduzca el mes en el que estamos: " << std ::endl ; 
    std ::cin >> m ; 

    hoy = new Diaano (d,m); 

    std :: cout << "Introduzca el dia de tu cumple: " << std ::endl ; 
    std :: cin >> d ; 
    std :: cout << "Introduzca el mes de tu cumple: " << std ::endl ; 
    std ::cin >> m ; 

    cumple = new Diaano(d,m); 
    std :: cout << "------DIA DE HOY------" << std ::endl ; 
    hoy-> verfecha(); 
    std :: cout << "------DIA DE TU CUMPLE------" << std ::endl ;
    cumple->verfecha(); 

    // 'hoy' y 'cumple' son punteros a objetos de tipo Diaano.
    // 'hoy' apunta a un objeto que representa la fecha actual,
    // y 'cumple' apunta a un objeto que representa la fecha de cumpleaños de alguien.

    // hay que pasar cumple como puntero por que es un objeto dinámico y a esta función hay que psarle un objeto por referencia 
    if(hoy->comparar(*cumple)){
        std::cout << "Hoy es tu cumple :) "<< std ::endl ; 
    }else {
        std ::cout << "Hoy no es tu cumple :( "<< std ::endl ; 
    }


    return 0;
}