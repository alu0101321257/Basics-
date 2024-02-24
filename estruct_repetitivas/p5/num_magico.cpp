#include <iostream>
#include <time.h>

//numero magico: progrma que genera un numero aleatorio que debes de adivinar , el progrma te ira diciendo si el numero que introduciste 
//es mayor o menor al numero que se genero aleatoriamente
int main(){

    int numero;
    int contador = 0;
    int dato ;

    //generar numero aleatorio entre 1 y 100
    srand(time(NULL));
    dato = rand() % 100 + 1;

    
    do{
        std::cout << "Ingrese un numero entre [0-100]: "<< std::endl;
        std::cin >> numero;
        if(numero<dato){
            std::cout << "Debes introducir un numero mayor a: " <<numero<< std::endl;
        }else if (numero > dato){
            std::cout << "Debes introducir un numero menor a: "<<numero << std::endl;
        }
        contador++;
    }while(numero!=dato);
    
    std::cout << "HAS ACERTADO EL NUMERO" <<std::endl; 
    std::cout << "El numero era: " << dato << std::endl; 
    std::cout << "Has hecho: "<< contador <<" intentos"<< std::endl;
    
    return 0;
}



