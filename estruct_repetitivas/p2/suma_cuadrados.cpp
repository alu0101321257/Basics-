#include<iostream>

//realiza la suma de los cuadrados de los 10 primeros numeros enteros mayores que 0 
int main(){

    int suma = 0; 
    int cuadrado;


    for (int i = 1; i <= 10; i++){
        cuadrado = i * i;
        suma = suma + cuadrado;
        std::cout << "la suma vale: "<<suma << std::endl;
        
    }
    std::cout << "el resultado de la suma de los cuadrados es: "<<suma<< std ::endl;
    return 0;
}