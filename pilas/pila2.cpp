#include <iostream>
#include<stdlib.h>

//programa que añade numeros a una pila hasta que el usuario lo decida y despues muestra todos los datos que hay en la pila 

struct  Nodo {
    int dato; 
    Nodo *siguiente; 
}; 

void agregarpila(Nodo *& , int ); 
void mostrarPila(Nodo *pila);

int main(){
    Nodo *pila = NULL ; 
    int dato = 0 ; 
    char respuesta ; 

    do{
        std::cout << "Introduzca un numero a la pila: " << std ::endl ;   std::cin >> dato; 
        agregarpila(pila , dato); 
        std :: cout << "Quieres anadir otro elemento? s/n" << std ::endl ; 
        std :: cin >> respuesta ; 
    }while((respuesta == 's')||(respuesta == 'S')); 
    
    std:: cout << "------La pila resultante------" << std :: endl ; 
    mostrarPila(pila); 


    return 0; 
}

void agregarpila(Nodo *&pila  , int n ){
    Nodo *n_nodo = new Nodo(); 
    n_nodo -> dato= n ; 
    n_nodo -> siguiente = pila ; 
    pila = n_nodo; 

}
void mostrarPila(Nodo *pila){
    Nodo *actual = pila ; 
    while(actual != NULL) {
        std::cout << actual->dato << "\n";
        actual = actual->siguiente;
    }

    if(pila == NULL) {
        std::cout << "La pila esta vacia." << std::endl;
    }

}
