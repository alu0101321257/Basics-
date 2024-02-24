#include<iostream>

class Direccion{
    private: 
        std::string direccion;  


    public: 

    // constructor 
    Direccion(std::string direccion){
        this-> direccion = direccion; 
    }

    //constructor por defecto 
    Direccion(){

    }

    //destructor 
    ~Direccion(){}

    //getter 
    std::string getDireccion(){
        return direccion; 
    }
    
    
}; 