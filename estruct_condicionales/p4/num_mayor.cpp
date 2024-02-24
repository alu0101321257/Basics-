#include <iostream>

int main (){

    int n1;
    int n2;

    // programa que comprueba que número es mayor 
    std:: cout << "Dame el perimer  numero: " << std::endl;
    std:: cin >> n1;
    std:: cout << "Dame el segundo numero: " << std::endl;
    std:: cin >> n2;

    if(n1 > n2){
        std:: cout << n1 << " es mayor que " << n2 << std:: endl;
    }else if (n1 < n2){
        std:: cout << n2 << " es mayor que " << n1 << std:: endl;
    }else{
        std:: cout << n1 << " es igual a " << n2 << std:: endl;
    }
    
    return 0 ; 
}