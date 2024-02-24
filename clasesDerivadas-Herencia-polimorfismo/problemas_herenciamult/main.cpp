#include<iostream>
#include "hija1.hpp"

int main(){

    ClaseHija* h1 = new ClaseHija(1,2,3); 

    // esto imprimira 3 ya que es la x de la clase hija mirar hija1.hpp
    std:: cout << h1->getx()<< std:: endl ; 
    std:: cout << h1->devolverx()<< std:: endl ; 

    return 0 ; 
}