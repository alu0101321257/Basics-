#include <iostream>

class Cuadrilatero{
    private: 
        //atributos 
        float lado1 ; 
        float lado2 ; 

    public:
        //constructor 
        Cuadrilatero(float lado1 , float lado2 ){
            this->lado1=lado1; 
            this-> lado2 = lado2; 
        }

        Cuadrilatero(float lado){
            this->lado2 = this->lado1 = lado; 
        }

        //constructor por defecto
        Cuadrilatero(){
            
        }

        float obtenerPerimetro(); 
        float obtenerArea(); 
}; 