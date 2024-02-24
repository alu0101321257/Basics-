#include<iostream>
#include"alumno.h"


    void Alumno::pedirdatos(){
        std ::cout << "Introduce la primera nota: " << std ::endl ; std :: cin >>nota1; 
        std ::cout << "Introduce la segunda nota: " << std ::endl ; std :: cin >>nota2; 

    }
    void Alumno::mostrarnotas(){
        std ::cout << "La primera nota es: " << nota1 << std ::endl ; 
        std ::cout << "La segunda nota es: " << nota2 << std ::endl ;
        std ::cout << "Tu media es: "<< (nota1+nota2)/2 << std ::endl ; 
    } 