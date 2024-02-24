#include <iostream>

// programa que calcula la temperatura media , menor y mayor durante 3 horas del día 
int main(){

    float temp;
    float media; 
    float mayor; 
    float menor = 99; // igualamos a 99 para que cualquier temperatura que se introduza sea menor ya que si ponemos 0 y l atemperatura menor es 20 nos dará que la temperatura menor fue 0 y no 20 

    for (int i=0 ; i<3 ; i++){
        std::cout << "Ingrese la temperatura de la hora: "<< i << std::endl;
        std::cin >> temp;
        media+= temp; 
        if (temp > mayor){
            mayor = temp;
        }

        if (temp < menor){
            menor = temp;
        }
        
    }
    std::cout <<"La temperatura media es "<< media / 3<< std::endl;
    std::cout << "La temperatura mayor del dia fue "<< mayor << std::endl;
    std::cout <<"La temperatura menor del dia fue  "<< menor << std::endl;

    return 0;
}