#include <iostream>
#include<stdlib.h>

//  hacer un menú que contenga los siguientes elementos 
// 1 --> Añadir elemento a la pila 
// 2 --> Mostrar los elementos de la pila 
// 3 --> Salir

struct  Nodo {
    int dato; 
    Nodo *siguiente; 
}; 

void agregarpila(Nodo *& , int ); 
void mostrarPila(Nodo *pila);
void menu(); 


int main (){
    menu(); 

    return 0 ; 
}


void agregarpila(Nodo *&pila , int n  ){
    Nodo *n_nodo = new Nodo();
    n_nodo -> dato = n ; 
    n_nodo -> siguiente = pila; 
    pila = n_nodo ;  

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

void menu (){

    int opcion ; 
    Nodo *pila = NULL ; 
    int dato = 0 ;

    do{
        std::cout << "----------MENU----------" << std :: endl ; 
        std::cout << "Opciones: " << std :: endl ; 
        std::cout << "1 --> Anadir elemento a la pila" <<std ::endl ; 
        std::cout << "2 --> Mostrar los elementos de la pila" <<std ::endl ;  
        std::cout << "3 --> Salir" <<std ::endl ;
        std::cout << "----------------------------------------------" << std ::endl ;
        std::cin >> opcion ; 

        switch(opcion){
            case 1 : 
                std::cout << "Introduce un dato a la pila" << std :: endl ; 
                std::cin >> dato ; 
                agregarpila(pila, dato);
                break; 
            case 2 : 
                std::cout << "-----La pila resultante es-----" << std :: endl ; 
                mostrarPila(pila); 
                break;
            case 3 : 
                break;

        }
        //system("cls"); // para limpia la consola 
    }while(opcion != 3);
   
}