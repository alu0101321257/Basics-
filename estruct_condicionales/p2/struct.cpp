#include <iostream>

// usando structs 

struct persona{
    int edad;
    char nombre[20];
    char sexo[1];
    double altura; 
};
void imprimir(persona &persona);

int main(){
    persona persona1; 
    std::cout << "Ingrese su edad: ";
    std::cin >> persona1.edad;
    std::cout << "Ingrese su nombre: ";
    std::cin >> persona1.nombre;
    std::cout << "Ingrese su sexo[m/f]: ";
    std::cin >> persona1.sexo;
    std::cout << "Ingrese su altura: ";
    std::cin >> persona1.altura;

    std::cout << "********** los datos introducidos **********" << std::endl;
    imprimir(persona1);

    return 0;
}

void imprimir(persona &persona){
    std::cout << "Su edad es: " << persona.edad << '\n';
    std::cout << "Su nombre es: " << persona.nombre << '\n'; 
    std::cout << "Su sexo es: " << persona.sexo << '\n'; 
    std::cout << "Su altura es: " << persona.altura << '\n';
}
