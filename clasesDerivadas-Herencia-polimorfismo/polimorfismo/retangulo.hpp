#include<iostream>
#include "poligono.hpp"
#include <math.h>

class Rectangulo : public Poligono{
        public: 
            Rectangulo(float base , float altura ){
                this->base= base ; 
                this->altura= altura ; 
            }
            float perimetro(){
                float per ; 
                per = (base *2 ) + (altura *2 ); 
                return per; 
            }

            float area(){
                float areaR ; 
                areaR = base * altura; 
                return areaR; 
            } 


        private: 
            float altura ; 
            float base; 


}; 