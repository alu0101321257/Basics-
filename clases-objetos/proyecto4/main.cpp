#include <iostream>
#include "alumno.h"


int main(){
    //Array de objetos estático 
    Alumno alumnos[4]; 
    //Array de objetos dinámico 
    Alumno* alumnos2 = new Alumno[2]; 

    //recorremos los arrays como si s etrataran de arrays normales 
    for(int i =0 ; i<2 ; i++){
        (alumnos2 +i ) -> pedirdatos(); 
        std::cout << std::endl ; 
    }

    //FORMA ESTATICA
    //for(int i =0 ; i<3 ; i++){
    //    alumnos[i].pedirdatos(); 
    //    std::cout << std::endl ; 
    //}

    std ::cout << "------Mostrando las notas------"<< std ::endl ;
    for(int i =0; i<2 ;i++){
        (alumnos2 +i)->mostrarnotas();
    }
   
    //DE FORMA ESTATICA 
    //std ::cout << "------Mostrando las notas------"<< std ::endl ;
    //for(int i =0; i<3 ;i++){
    //    alumnos[i].mostrarnotas();
    //    std ::cout << std ::endl ; 
    //}
    


    return 0 ; 
}