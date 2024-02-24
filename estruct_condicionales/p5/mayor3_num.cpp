#include <iostream>

int main(){

    int n1; 
    int n2;
    int n3;

    std:: cout << "Introduce el perimer numero: " << std::endl;
    std:: cin >> n1;
    std:: cout << "Introduce el segundo numero: " << std:: endl;
    std:: cin >> n2;
    std:: cout << "Introduce el tercer numero: " << std:: endl;
    std:: cin >> n3;

    if(n1 > n2 && n1 > n3){
        std:: cout << "El numero mayor es: " << n1 << std:: endl;
    }else if (n2 > n1 && n2 > n3){
        std:: cout << "El numero mayor es: " << n2 << std:: endl;
    }else if (n3 > n1 && n3 > n2){
        std:: cout << "El numero mayor es: " << n3 << std:: endl;
    }else{
        std:: cout << "Los numeros son iguales" << std:: endl;
    }


    return 0; 
}