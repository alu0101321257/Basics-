#include <iostream>

//funcion que calcula el iva de tu producto
int main(){

    double precioSinIva=0;
    double porcentajeIva=0;
    double preciofinal=0; 
    double iva = 0;

    std::cout << "Ingrese el precio de tu producto sin iva : ";
    std::cin >> precioSinIva; 
    std::cout << "Ingrese el porcentaje de iva : ";
    std::cin >> porcentajeIva; 

    
    iva = precioSinIva * (porcentajeIva / double(100));

    preciofinal = precioSinIva + iva; 

    std::cout << "El precio con iva es : " << preciofinal << std::endl;

    return 0;
}
