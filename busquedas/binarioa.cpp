#include <iostream>

//busqueda binaria de un elemento en un arreglo
//la diferencia con la busqueda secuencial es que en la busqueda binaria se requiere que el arreglo este ordenado

int main(){

    int arreglo[]={1,2,3,4,5,6};
    int sup =6; 
    int inf =0; 
    int mitad=0;
    int dato =0; 
    char flag = 'F';

    std::cout<<"Introduce el dato a buscar"<<std::endl; 
    std::cin >> dato; 

    //algoritmo de busqueda binaria 

    while (inf <= sup){
        mitad= (inf+sup)/2 ; 

        if(arreglo[mitad]== dato){
            flag = 'V';
            //para salir del bucle while ya que encontramos el dato
            break; 
        }
         if (arreglo[mitad] > dato) {
            sup = mitad - 1;
        }
        if (arreglo[mitad] < dato) {
            inf = mitad + 1;
        }
    }

    if (flag=='V'){
        std :: cout << "El valor " << dato << " se ha encontrado en la posicion " << mitad << std::endl;
    }else{
        std :: cout << "El valor " << dato << " no se ha encontrado "<< std::endl; 
    }



    return 0;
}