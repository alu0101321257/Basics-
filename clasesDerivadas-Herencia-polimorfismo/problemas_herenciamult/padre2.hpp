#include <iostream>

class ClasePadre2{
    protected: 
        int x ; 
    
    public: 
        ClasePadre2(int x ){
            this->x = x ; 
        }

        ~ClasePadre2(){}

        int getX(){
            return x ; 
        }
}; 