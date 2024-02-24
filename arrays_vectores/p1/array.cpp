#include <iostream>
#include <string>




int main() {

    int numeros[] = {1, 2, 3, 4, 5, 6};
    int numeros2[20]; 
    int size2 = 0 ; 
    int suma = 0;
    int size = sizeof(numeros) / sizeof(numeros[0]);
    int mult=1; // se pone a 0 porque si no multipplicarias por 0 y el resultado siempre seria 0 
    int mayor=0; 
    int menor=99;
    int size3 =0;
    int numeros3[20];
    int numeros4[]= {7, 8, 9, 10, 11 ,12};
    int size4 = sizeof(numeros4) / sizeof(numeros4[0]);
    int numeros5[12];
    int multiplicado[6];

    //**************************multiplicar por 2 los elementos de un array  **************************
        for (int i = 0; i < size; i++) {
            multiplicado[i] = numeros[i] * 2;
            std::22222222222222222222222222222222222222222222222222cout << multiplicado[i] << " ";
        }
        std::cout << std::endl;

    //**************************imprimir dos arrays en 1 **************************

    for(int i = 0 ; i<size; i++){
        numeros5[i] = numeros[i];   
    }
    
    for(int i =6 ; i<12; i++){
        numeros5[i] = numeros4[i-6];
    }

    std :: cout << "Los elementos del array numeros y numeros 4  " << std :: endl;
    int size5 = sizeof(numeros5) / sizeof(numeros5[0]);
    for(int i=0 ; i<size5 ;i++){
        std :: cout << numeros5[i]<< " ";
    }
    std :: cout << std :: endl;

    //**************************suma de elementos de un arreglo**************************
    for(int i=0 ; i < size ; i++) {
        suma += numeros[i]; 
    }
    std :: cout << "La suma de los elementos de mi array es: " << suma << std :: endl;


    //**************************division de elementos de un arreglo**************************
    for(int i=0 ; i < size ; i++) {
        mult *= numeros[i]; 
    }
    std :: cout << "El producto de los elementos de mi array es: " << mult << std :: endl;


    //**************************introducir un array de enteros e imprimirlo**************************
    std :: cout <<"Introduce los el tamano del array "<< std :: endl;
    std :: cin >> size2;
    std :: cout << "Introduce los elementos del array "<< std :: endl;

    // guardar los elementos del array 
    for(int i=0 ; i < size2 ; i++) {
        std :: cin >> numeros2[i]; 
    }
    // imprimir el array 
    std :: cout << "Los elementos del array son: " << std :: endl;
    for (int i=0 ; i < size2 ; i++) {
        std :: cout << numeros2[i]<< " ";
    }
    std :: cout << std :: endl;


    //**************************comprobar el elemento mayor y menor de un aray**************************     
    std :: cout <<"Introduce los el tamano del nuevo array "<< std :: endl;
    std :: cin >> size3;
    std :: cout << "Introduce los elementos del nuevo array "<< std :: endl; 
    for (int i=0 ; i < size3 ; i++) {
        std :: cin >> numeros3[i];
        if (mayor < numeros3[i]) {
            mayor = numeros3[i]; 
        } 
        if (menor > numeros3[i]) {
            menor = numeros3[i]; 
        }
    }
    std :: cout << "El elemento mayor del array es: " << mayor << std :: endl;
    std :: cout << "El elemento menor del array es: " << menor << std :: endl;


    //**************************imprimir el array a la inversa**************************
    std :: cout << "Los elementos del array a la inversa: " << std :: endl;
    for(int i=size-1; i>=0; i--){  // recodar que empeiza desde size -1 hasta 0
        std :: cout << numeros[i]<< " ";
    }
    std :: cout << std :: endl;
    return 0;

    
     
}