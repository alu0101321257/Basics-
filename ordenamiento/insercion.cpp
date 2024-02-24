#include <iostream>

int main(){

    int num[] ={5,3,4,1,2};
    int aux; 
    int cont =0;
    int pos =0; 


    for(int i=0; i<5 ; i++){
        //posicion en la qu estamos 
        pos = i;     
        // contenido de esa posicion 
        aux = num[i];
        
        //mientras que la posicion sea mayor a 0 y el numero de la posicion anterior sea mayor al numero de la posicion actual
        while((pos > 0) && (num[pos-1]>aux)){
            num[pos]= num[pos-1];
            pos --;
            cont ++;
        }
        num[pos] = aux;
       
    }

    std:: cout <<"El array aordenado usando algoritmo de inserción es: "<< std:: endl ; 
    for(int i=0; i<5 ; i++){
        std::cout << num[i] << " ";
    }
    std::cout << std::endl;
    // el numero de pasos debe de ser n^2
    std::cout << "El numero de pasos es: " << cont << std::endl;




    return 0;
}