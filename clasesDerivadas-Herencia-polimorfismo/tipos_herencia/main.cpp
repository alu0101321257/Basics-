
#include<iostream>
#include "coche.hpp"
#include "deportivo.hpp"
#include"furgoneta.hpp"

int main(){

    std::cout <<"-------------HERENCIA PUBLICA-------------" << std ::endl; 
    Coche* c1 = new Coche(4,"Seat", "rojo" , "Ibiza" ); 

    //Se puede hacceder a los metodos publicos de la clase vehiculo como son sus getters porque hemos heredado esos metodos publicos
    std::cout<< "El color del coche es: " << c1->getColor() << std ::endl ;  
    std::cout << "La marca del coche es: " << c1->getMarca() << std::endl ; 

    c1->setColor("azul"); 
    c1->setMarca("audi"); 

    std::cout << "\n"; 
    std::cout << "----Despues de modificar los valores-----" << std::endl ; 
    std::cout<< "El nuevo color del coche es: " << c1->getColor() << std ::endl ;  
    std::cout << "La nueva marca del coche es: " << c1->getMarca() << std::endl ; 

    // c1->getModelo(); --> NO SE PUEDE HACER (DA ERROR)

    std::cout<<"El modelo es: " << c1->devolver_modelo()<< std::endl ; 


    //------------------------------------------------------------------------------------------------------//
    std::cout << "\n"; 
    std::cout <<"-------------HERENCIA PRIVADA-------------" << std ::endl;  
    
    Deportivo* d1 = new Deportivo("Ferrari", "rojo" ,"Enzo" , 300 ); 

    //podemos acceder a los metodos publicos de la clase deportivo 
    std ::cout << "La cilindrada del deportivo es " << d1->getCilindrada()<<"c/v" << std::endl ;  

    //si tratamos de acceder a la marca de el vehiculo con el ojeto d1 (deportivo1) tendremos un fallo ya que al estar usando herencia
    //privada todo lo que era publico en la clase vehiculo pasa a ser privado en la clase deportivo 
    //std ::cout << "La marca es " << d1->getMarca << std::endl ;  --> esto no se podría hacer 

    //No podemos acceder al metodo que devuelve la marca a traves del objeto pero si podemos acceder creando otro nuevo metodo en 
    //la clase deportivo que use getMarca y que nos las devuelva 
    std :: cout << "La marca del deportivo es: "<< d1->devolverMarca()<<std::endl ; 

    //------------------------------------------------------------------------------------------------------//
    std::cout << "\n"; 
    std::cout <<"-------------HERENCIA PROTEGIDA-------------" << std ::endl;  
    
    Furgoneta* f1 = new Furgoneta("Volkswagen" ,"Caddy","Azul", 250); 

    std::cout << "La carga de la furgoneta es: " << f1->getCarga()<<"kg"<< std::endl ; 
    std::cout << "La marca de la furgoneta es: " << f1->devolvermarca()<< std::endl ; 
    std::cout << "El modelo de la furgoneta es: " << f1->devolverModelo()<< std::endl ; 


    delete[] c1; 
    delete[] d1; 
    delete[] f1; 
    return 0 ; 
}; 