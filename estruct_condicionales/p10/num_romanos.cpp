#include<iostream>

//transformar un numero a numero romano 

int main(){

    int numero; 
    std::cout << "Introduce el numero que deseas transfromar: "<< std::endl;
    std::cin >> numero;

    int unidades = numero / 1000;
    int centenas = (numero - unidades * 1000) / 100;
    int decenas = (numero - unidades * 1000 - centenas * 100) / 10;
    int millares = numero - unidades * 1000 - centenas * 100; 

    switch (millares) {
        case 1 : std::cout << "M"; break;
        case 2 : std::cout << "MM"; break;
        case 3 : std::cout << "MMM"; break;
    };

    switch (centenas) {
        case 1 : std::cout << "C"; break;
        case 2 : std::cout << "CC"; break;
        case 3 : std::cout << "CCC"; break;
        case 4 : std::cout << "CD"; break;
        case 5 : std::cout << "D"; break;
        case 6 : std::cout << "DC"; break;
        case 7 : std::cout << "DCC"; break;
        case 8 : std::cout << "DCCC"; break;
        case 9 : std::cout << "CM"; break;
    };

    switch(decenas) {
        case 1 : std::cout << "X"; break;
        case 2 : std::cout << "XX"; break;
        case 3 : std::cout << "XXX"; break;
        case 4 : std::cout << "XL"; break;
        case 5 : std::cout << "L"; break;
        case 6 : std::cout << "LX"; break;
        case 7 : std::cout << "LXX"; break;
        case 8 : std::cout << "LXXX"; break;
        case 9 : std::cout << "XC"; break;
    };
    switch(unidades) {
        case 1 : std::cout << "I"; break;
        case 2 : std::cout << "II"; break;
        case 3 : std::cout << "III"; break;
        case 4 : std::cout << "IV"; break;
        case 5 : std::cout << "V"; break;
        case 6 : std::cout << "VI"; break;
        case 7 : std::cout << "VII"; break;
        case 8 : std::cout << "VIII"; break;
        case 9 : std::cout << "IX"; break;
    };
    switch(unidades) {
        case 1 : std::cout << "I"; break;
        case 2 : std::cout << "II"; break;
        case 3 : std::cout << "III"; break;
        case 4 : std::cout << "IV"; break;
        case 5 : std::cout << "V"; break;
        case 6 : std::cout << "VI"; break;
        case 7 : std::cout << "VII"; break;
        case 8 : std::cout << "VIII"; break;
        case 9 : std::cout << "IX"; break;
    };


    return 0;
}