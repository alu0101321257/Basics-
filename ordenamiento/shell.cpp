#include <iostream>

//ordenación shell con incrementos decrecientes se considera una mejora del metodo de inserción directa
//Pasos: 
//1.Se divide la sita en n/2 grupos de dos
//2.se clasifica cada grupo por separado , comparando las parejas de elementos si no estan ordenados se intercambian
//3.se divide la lista en n/4 grupos de 4 elementos
//4.se sigue haciendo susesivamente hasta que el ultimo grupo tenga un solo elemento
void intercambiar(float &x,float &y){
    float aux ;
    aux = x; 
    x=y;
    y=aux;
}

void ordenacionshell (float a[], int n){
    int salto,i,j,k;
    salto = n/2;
    while(salto>0){
        for(i=salto;i<n;i++){
            j=i-salto;
            while(j>=0){
                k=j+salto;
                if(a[j]<=a[k]){
                    j=-1;
                }else{
                    intercambiar(a[j],a[k]);
                        j-=salto;
                }
            }
        }
        salto = salto/=2;
    }   
}

int main(){

    float arreglo[] = {4,6,1,9,5,10,2,11,19,7}; 

    ordenacionshell(arreglo,10);

    std :: cout << "Array ordenado usando el metodo shell(forma ascendente): " << std :: endl;
    for(int i =0 ; i <10; i++) {
        std :: cout << arreglo[i] << "|";
    }

    std :: cout << std :: endl;
    std :: cout << "Array ordenado usando el metodo shell(forma descendente): " << std :: endl;
    for(int i =9 ; i >= 0 ; i--) {
        std :: cout << arreglo[i] << "|";
    }

    return 0 ; 
}