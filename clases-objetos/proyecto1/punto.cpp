// en el archivo punto.h se crea la clase y se hacen las declaraciones de los métodos , y despues en este fichero que tiene 
//el mismo nombre que la clase pero con diferente extensión es donde se va a escribir el contenido de cada una de esas funciones 
// que hayamos creado en el archivo punto.h 

//ahora debemos inluir la clase donde tenemos declarados los métodos 
#include "punto.h"

//cuando ponemos Punto:: es para indicar que ese método que vamos a escribir pertenece a la clase Punto 
void Punto::set_x(int valorx){
    x = valorx; 
}

void Punto::set_y(int valory){
    y = valory; 
}

int Punto::get_x(){
    return x ; 
}

int Punto::get_y(){
    return y ; 
}