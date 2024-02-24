#include <iostream>


int main(){

    int n; 
    int x=0; 
    int y=1;
    int z=1; 

    std :: cout << "introduce el numero de veces que quires que se realice la serie fibonacci" << std :: endl;
    std :: cin >> n;
    std :: cout << "Serie fibonacci de tamaño " << n << std :: endl;
    for(int i=1; i<=n; i++){
        z=x+y;
        std::cout<<z<<" ";
        x=y;
        y=z;
    }
    std :: cout << std :: endl;
    return 0;

    return 0;
}