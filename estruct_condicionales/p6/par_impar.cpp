#include <iostream>

//programa que calcule si un numero es par o impar

int main(){

    int numero;
    

    std :: cout << "Ingrese un numero: "<< std :: endl;
    std :: cin >> numero;

    if (numero % 2 == 0){
        std :: cout << "El numero " << numero << " es par" << std :: endl;
    }else{
        std :: cout << "El numero " << numero << " es impar" << std :: endl;
    }

    return 0;
}