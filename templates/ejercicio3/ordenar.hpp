#include <iostream>
#include"intercambiar.hpp"

template<typename t >
void ordenarAscendente(t *arreglo , int n ){
    for(int i = 0; i<n ; i++){
        for(int j=0 ; j<(n-1); j++){
            if(arreglo[j]>arreglo[j+1]){
                intercambio(arreglo[j],arreglo[j+1]); 
            }
        } 
    }
}

template<typename t >
void ordenarDescendente(t *arreglo , int n ){
    for(int i = 0; i<n ; i++){
        for(int j=0 ; j<(n-1); j++){
            if(arreglo[j]<arreglo[j+1]){
                intercambio(arreglo[j],arreglo[j+1]); 
            }
        } 
    }
}

