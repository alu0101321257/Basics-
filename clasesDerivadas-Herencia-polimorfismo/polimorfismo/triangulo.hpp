#include<iostream>
#include"poligono.hpp"
#include<math.h>

class Triangulo : public Poligono{
    public: 
        Triangulo(float lado1 , float lado2 , float lado3){
            this->lado1= lado1; 
            this->lado2=lado2; 
            this->lado3=lado3; 
        }
        float perimetro(){
            float per ; 
            per = lado1 + lado2 + lado3 ;
            return per; 

        }
        float area(){
            float s; 
            s = (lado1 + lado2 + lado3 )/2; 
            float areaT; 
            areaT = sqrt(s*(s-lado1)*(s-lado2)*(s-lado3)); 
            return areaT;                 
        } 


    private: 
        float lado1; 
        float lado2; 
        float lado3; 

}; 