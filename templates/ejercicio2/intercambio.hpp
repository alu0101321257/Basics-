#include<iostream>

template <typename t >

void intercambio(t &valor1 , t &valor2 ){
    t aux ; 
    aux = valor1; 
    valor1= valor2; 
    valor2=aux; 

}