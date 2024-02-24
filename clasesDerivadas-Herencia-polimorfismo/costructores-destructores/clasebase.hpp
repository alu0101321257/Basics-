#include<iostream>


class ClaseBase{
    public: 
        ClaseBase(int numero){
            this->numero = numero ;
            std::cout<< "Constructor de la clase Base" << std::endl ;  
        }
        ~ClaseBase(){
            std::cout<< "Destructor de la clase Base" << std::endl ; 
        }


    private: 
        int numero ; 

};