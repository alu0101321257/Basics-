#include <iostream>

//busqueda secuencial de un elemento en un arreglo

int main(){

    int arreglo[10] = {1,2,3,4,5,6,7,8,9,10};
    int elemento = 0;

    std::cout << "Ingrese el elemento a buscar: ";
    std::cin >> elemento;

    for(int i = 0; i < 10; i++){
        if(arreglo[i] == elemento){
            std::cout << "El elemento " << elemento << " se encuentra en la posicion " << i << std::endl;
            break;
        }else if(i == 9){
            std::cout << "El elemento " << elemento << " no se encuentra en el arreglo" << std::endl;
        }
    }
    return 0;
}