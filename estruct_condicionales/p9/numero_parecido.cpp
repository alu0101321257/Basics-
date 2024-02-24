#include <iostream>


//introducimos 3 numeros y debemos de compararlo si es igual al 4 o no

int main(){

    int n1; 
    int n2;
    int n3;
    int n4;

    std ::cout << "Introduce el perimer numero: " << std::endl;
    std ::cin >> n1;
    std ::cout << "Introduce el segundo numero: " << std::endl;
    std ::cin >> n2;
    std ::cout << "Introduce el tercer numero: " << std::endl;
    std ::cin >> n3;
    std ::cout << "Introduce el cuarto numero: " << std::endl;
    std ::cin >> n4;

    if (n1==n4 && n2==n4 && n3==n4){
        std ::cout << "Todos los numeros son iguales" << std::endl;
    }else if (n1==n4){
        std ::cout << "El primer numero es igual al 4" << std::endl;
    }else if (n2==n4){
        std ::cout << "El segundo numero es igual al 4" << std::endl;
    }else if (n3==n4){
        std ::cout << "El tercer numero es igual al 4" << std::endl;
    }else{
        std ::cout << "No hay ningun numero igual igual" << std::endl;
    }

    return 0;
}