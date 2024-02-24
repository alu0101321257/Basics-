#include <iostream>

class ClasePadre1{
    protected: 
        int x ; 
    
    public: 
        ClasePadre1(int x ){
            this->x = x ; 
        }

        ~ClasePadre1(){}

        int getX (){
            return x ; 
        }
}; 