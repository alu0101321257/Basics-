#include<iostream>
#include<stdlib.h>

// En programación, una pila (stack en inglés) es una estructura de datos
// que sigue el principio de LIFO (Last In, First Out), lo que significa
// que el último elemento añadido es el primero en ser sacado. Imagina
// una pila de platos: solo puedes agregar o quitar el plato superior.
// Las operaciones principales son:
// - Push: Añadir un elemento en la parte superior de la pila.
// - Pop: quitar el elemento superior de la pila.
// - Top: Observar el elemento en la parte superior de la pila sin quitarlo.

//el nodo son los huecos de la pila contienen (un valor y un puntero al siguiente hueco de la pila )
struct  Nodo {
    int dato; 
    Nodo *siguiente; 
}; 

void agregarpila(Nodo *& , int ); 
void mostrarPila(Nodo *pila);
void sacarpila(Nodo *&, int & ); 

int main(){

    Nodo *pila = NULL ; 
    int dato = 0 ; 

    std :: cout << "Introduce un numero a la pila: " << std ::endl ; std :: cin >> dato ; 
    agregarpila(pila, dato); 
    std :: cout << "Introduce un numero en la pila: " << std ::endl ; std :: cin >> dato ; 
    agregarpila(pila,dato);  

    std::cout << "------Contenido de la pila------"<<std ::endl ; 
    mostrarPila(pila);
    std::cout << "------Sacar los elementos de la pila ------"<<std ::endl ; 
    while(pila != NULL){
        sacarpila(pila,dato);

        //hacemos este bucle para saber cuando un elemento es el ultimo de la pila y cuando no lo es  
        if(pila!= NULL){
            std :: cout << dato << " , "; 
        }else{
            std :: cout << dato << " . "; 
        }
    }
    std :: cout << std ::endl ; 
    std::cout << "------Contenido de la pila------"<<std ::endl ; 
    mostrarPila(pila);


    return 0 ; 
}

void agregarpila(Nodo *&pila, int n) {
    // Crear un nuevo nodo en el heap y asignar su dirección a un puntero de Nodo.
    Nodo *nuevo_nodo = new Nodo();

    // Asignar el valor 'n' al miembro 'dato' del nuevo nodo.
    nuevo_nodo->dato = n;

    // Hacer que el miembro 'siguiente' del nuevo nodo apunte al nodo que actualmente
    // es el primero en la pila (o NULL si la pila estaba vacía).
    nuevo_nodo->siguiente = pila;

    // Actualizar el puntero de la pila para que apunte al nuevo nodo, que ahora
    // es el primero en la pila.
    pila = nuevo_nodo;

    // Imprimir un mensaje indicando que el elemento se agregó correctamente.
    std::cout << "El elemento " << n << " se ha agregado correctamente a la pila\n";
}


void mostrarPila(Nodo *pila) {
    // Crear un puntero temporal para recorrer la pila sin modificar el puntero original.
    Nodo *actual = pila;

    // Recorrer la pila hasta llegar al final (NULL).
    while(actual != NULL) {
        // Imprimir el valor del nodo actual.
        std::cout << actual->dato << "\n";

        // Avanzar al siguiente nodo.
        actual = actual->siguiente;
    }

    // Si la pila está vacía (pila es NULL), imprimir mensaje.
    if(pila == NULL) {
        std::cout << "La pila esta vacia." << std::endl;
    }
}


// Función para sacar (eliminar) el elemento superior de la pila.
void sacarpila(Nodo *&pila, int &n ){
    // Se crea un puntero auxiliar que apunta al primer nodo de la pila.
    Nodo *aux = pila;

    // Se guarda el valor del nodo superior en 'n', para poder utilizarlo después.
    n = aux->dato;

    // Se actualiza el puntero de la pila al siguiente nodo, efectivamente eliminando
    // el nodo superior de la pila.
    pila = aux->siguiente;

    // Se libera la memoria ocupada por el nodo superior que se acaba de eliminar,
    // previniendo así fugas de memoria.
    delete aux;
}
