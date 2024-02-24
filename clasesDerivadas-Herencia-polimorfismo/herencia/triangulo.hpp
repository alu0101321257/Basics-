#include<iostream>
#include <math.h>
#include"figura.hpp"

// triangulo hereda los objetos publicos de la super clase o clase padre figura 
class Triangulo : public Figura{
    private:
        float lado1; 
        float lado2; 
        float lado3; 

    public: 
        //solo hace falta inicializar las nuevas variables 
        Triangulo(int nLados, float lado1 , float lado2, float lado3) : Figura(nLados){
            this->lado1= lado1; 
            this->lado2=lado2; 
            this->lado3=lado3; 
        } 

        float areaTriangulo(){
            float per ; 
            float area; 

            per=(lado1+lado2+lado3)/2; 
            area = sqrt(per*(per-lado1)*(per-lado2)*(per-lado3)); 
            return area; 
        }



};