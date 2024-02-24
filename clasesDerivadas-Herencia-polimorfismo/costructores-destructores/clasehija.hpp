#include<iostream>
#include "claseBase.hpp"

class ClaseHija : public ClaseBase {
    private: 
        int numero2; 
    
    public: 
        ClaseHija(int numero, int numero2): ClaseBase(numero){
            this->numero2 = numero2 ;
            std::cout<< "Constructor de la clase Hija " << std::endl ;  
        }
        ~ClaseHija(){
            std::cout<< "Destructor de la clase Hija " << std::endl ; 
        }




}; 