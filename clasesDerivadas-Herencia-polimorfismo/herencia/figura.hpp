#include <iostream>

class Figura{
    private: 
        int nLados; 
    
    public:
        //constructor
        Figura(int nLados){
            this->nLados = nLados; 
        }

        //constructor por defecto
        Figura(){}

        //destructor por defecto
        ~Figura(){}

        //getter 
        int getnLados(){
            return nLados; 
        }
};