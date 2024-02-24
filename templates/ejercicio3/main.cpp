// EJERCICIO 2 : definir dos plantillas de funciones dentro de un archivo de cabecera llamado "ordenar.hpp" que puedan ordenar tanto ascendentemente 
// como descendentemente un arreglo de N elementos se pude usar la plantilla intercambiar del anterior ejercicio 

#include<iostream>
#include "ordenar.hpp"


template<typename t>
void pedirDatos(t *arreglo , int n ){
    for(int i =0 ; i<n; i++){
        std::cout << "Introduce el elemento [" << i << "]:";
        std::cin >> arreglo[i];   
    }
}

template<typename t>
void mostarArray(t *arreglo , int n ){
    for(int i =0 ; i<n; i++){
        std::cout <<"Elemento[" << i << "]: " << arreglo[i] << std::endl ; 
    }
}
int main(){
    int nElement; 

    std::cout<<"Introduce el numero de elementos de array : " << std::endl; 
    std::cin >> nElement; 

    int *elementos = new int[nElement]; 

    std::cout<< "\n---Pidiendo los elementos del array---"<<std::endl ; 
    pedirDatos(elementos , nElement); 

    std::cout<< "\n---Mostramos los elementos del array---"<<std::endl ; 
    mostarArray(elementos, nElement); 

    std::cout<< "\n---Array ordenado Ascendentemente---"<<std::endl ;
    ordenarAscendente(elementos,nElement);

    std::cout<< "\n---Array ordenado Descendentemente---"<<std::endl ;
    ordenarDescendente(elementos,nElement);

    delete[] elementos; 
    return 0 ;
}