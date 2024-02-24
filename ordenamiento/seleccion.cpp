#include <iostream>


int main(){

    int num[] ={4,3,1,5,2};
    int aux; 
    int count =0;
    int min =0; 

    //pasos para el algoritmo de ordenación selecion:
    //1. se busca el menor elemento del array
    //2. se intercambia con el primer elemento del array
    //3. se busca el menor elemento del resto del array 
    //4. se intercambia con el segundo elemento del array
    //5. se repite sucesivamente hasta que el array este ordenado

    for(int i=0 ; i<5 ; i++){
        // establecemos el primer elemento como numero minimo
        min=i; 
       
        //usamos otro bucle para empezando desde la posicion 2 (j+1) para buscar en el resto del array un numero menor a i 
        for(int j=i+1 ; j<5 ; j++){
            count++;
            if(num[j]<num[min]){
                // si hay un numero menor establecemos el menor en ese elemento 
                min=j;
            }
        }
        // intercambiamos el numero minimo con el primer elemento del array
        aux=num[i];
        num[i]=num[min];
        num[min]=aux;
    }

    std::cout <<"El array ordenado usando el algoritmo de selcion es: "<< std::endl;
    for(int i=0 ; i<5 ; i++){
        std::cout<<num[i]<<" ";
    }

    std:: cout <<std::endl;
    // debe de ser n^2 el numero de pasos 
    std::cout<<"El numero de pasos es: "<<count<<std::endl;

    return 0;
}