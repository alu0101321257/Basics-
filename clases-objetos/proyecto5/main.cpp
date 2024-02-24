#include <iostream>
#include "perro.h"


int main (){
    Perro perro1("kemba" , "Pastor") ; 
    // un objeto de tipo estático no hace fata destruirlo porque automáticamente cuando el programa termina de ejecutarse esa memoria
    //usada se libera 
    perro1.mostrardatos();
    perro1.jugar();
    
    // en cambio para los objetos de tipo dinámico si hace fata eliminar y liberar esa memoria usada para ello usamos DELETE 
    Perro* perro2 = new Perro("Milu" , "Golden"); 
    perro2->mostrardatos();   
    delete perro2; 

    // una vez eliminado los objetos en caso de querer volver a usarlos ya no podremos usarlos de nuevo ya que estariamos intentado 
    //acceder a un objeto que ya hemos eliminado por lo que c++ te dara un error es decir una vez hecho delete perro2 , ya no podremos 
    //hacer perro2->mostrar datos 

    //Autorrefernciar a los objetos de una clase THIS --> 


    return 0 ; 
}