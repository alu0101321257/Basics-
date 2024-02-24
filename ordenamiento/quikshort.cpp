#include <iostream>

// sel el metodo quick short (ordenación rapida) se aplica la tecnica divide y vencerás 
//Pasos:
//1. Se elige un elemento CENTRAL de la lista de elementos a ordenar, al que llamaremos pivote.
//2. Se dividen los demás elementos de la lista en dos particiones, una con los elementos menores que el pivote, y otra con los mayores.
//3 se ordena la particion de la izquiera utilizando el quick short recursivamente y se hace lo mismo para la practicion de la derecha
//4. la solución es : la praticion de la izquierda  + el pivote + la particion de la derecha

void intercambiar(float &x,float &y){
    float aux ;
    aux = x; 
    x=y;
    y=aux;
}

void quickshort(float a[], int primero, int ultimo){
    int i,j,central;
    float pivote;
    central = (primero+ultimo)/2;
    pivote = a[central];
    i = primero;
    j = ultimo;
    do{
        while(a[i]<pivote) i++;
        while(a[j]>pivote) j--;
        if(i<=j){
            intercambiar(a[i],a[j]);
            i++;
            j--;
        }
    }while(i<=j);
        if(primero<j){
            //ordenamos la sublista de la izquierda recursivamente
            quickshort(a,primero,j);
        }
        if(i<ultimo){
            //ordenamos la sublista de la derecha recursivamente 
            quickshort(a,i,ultimo);
        }
}

int main(){

    float arreglo[] = {4,7,1,8,2,10,5,9,3,6,11};

    quickshort(arreglo,0,10);

    std :: cout << "Array ordenado usando el metodo quickshort(forma ascendente): " << std :: endl;
    for(int i =0 ; i <11; i++) {
        std :: cout << arreglo[i] << "|";
    }

    std :: cout << std :: endl;
    std :: cout << "Array ordenado usando el metodo quickshort(forma descendente): " << std :: endl;
    for(int i =10 ; i >= 0 ; i--) {
        std :: cout << arreglo[i] << "|";
    }



    return 0;
}