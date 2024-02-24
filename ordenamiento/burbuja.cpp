#include <iostream >

int main(){

    int num[] ={4,1,2,3,5};
    int aux; 
    int cont= 0;

    //metodo bnurbuja de ordenacion 
    // si num[i] > num[i+1] entonces se intercambian los valores

    for (int i=0; i<5 ; i++){
        for(int j=0; j<5 ; j++){
            if(num[j]>num[j+1]){
                cont ++; 
                aux = num[j];
                num[j] = num[j+1];
                num[j+1] = aux;
            }
        }
    }
    
    std:: cout << "El arreglo ordenado usando el metodo burbuja es: " << std::endl;
    for (int i=0; i<5 ; i++){
        std::cout << num[i] << " ";
    }
    //para el metodo burbuja se necesita hacer n-1 pasada 
    std::cout << "El numero de pasos es: " << cont << std::endl;

    return 0;
}