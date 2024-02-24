#include<iostream>
#include "diaano.h"

//Geters 
int Diaano::get_dia(){
    return dia; 
}
int Diaano::get_mes(){
    return mes ; 
}

//setters
void Diaano::set_dia(int valor){
    dia= valor;
}

void Diaano::set_mes(int valor){
    mes=valor; 
} 

bool Diaano::comparar(Diaano& d ){
    // Comprueba si el día y el mes del objeto actual son iguales al día y mes del objeto 'd' pasado como referencia.
    if( (dia == d.dia)&&(mes==d.mes) ){
        return true ;  
    }else{
        return false ; 
    }
}
void Diaano::verfecha(){
    std ::cout << "------La fecha introducida es------" << std ::endl ;
    std ::cout << "Dia " << dia << " del " << mes <<std ::endl ; 

}