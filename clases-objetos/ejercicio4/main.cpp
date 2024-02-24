//construir un programa que dada una serie de vehiculos caracaterizados por marca , modelo y precio imprima las propiedades 
//del vehiculo mas barato .Para ello se deberá de leer por teclado las caracateríscticas de cada una de cada vehiculo y crear una clase 
//que represente cada uno de ellos 

#include<iostream>
#include <limits> 
#include"vehiculo.hpp"

int main(){

    Vehiculo* v1; 
    int num_vehiculos; 
    float precio; 
    std::string modelo; 
    std::string marca; 
    int indexBarato; 

    std::cout << "Introduce el numero de vehiculos: "<<std::endl; 
    std::cin >> num_vehiculos; 
    
    v1 = new Vehiculo[num_vehiculos]; //array de objetos

    for(int i=0 ; i<num_vehiculos; i++){
        std::cout<<"Introduce los datos del vehiculo "<< i+1 <<std::endl; 
        std::cout <<"--------------------------------"<<std::endl; 
        std::cout<<"Introduce el precio del vehiculo: " << std::endl ; 
        std::cin >> precio; 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignora lo que quede en el buffer
        std::cout<<"Introduce el modelo del vehiculo:" << std::endl; 
        std::getline(std::cin,modelo);  
        std::cout << "Introduce la marca del vehiculo: " << std::endl ;
        std::getline(std::cin,marca); 

        v1[i] = Vehiculo(precio,modelo,marca); 
    }

    indexBarato = Vehiculo::masBarato(v1,num_vehiculos); 

    std::cout << "Los datos del vehiculo mas barato son: " << std::endl; 
    v1[indexBarato].mostrarDatos();
    

    delete[] v1 ; 


    return 0 ;
}