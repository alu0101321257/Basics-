#include <iostream>
#include "cuadrilatero.hpp"

float Cuadrilatero::obtenerPerimetro(){
    float perimetro = 0 ; 
    perimetro = 2*(lado1+lado2); 
    return perimetro; 

}
float Cuadrilatero::obtenerArea(){
    float area =0; 
    area = lado1*lado2 ;  
    return area; 

}