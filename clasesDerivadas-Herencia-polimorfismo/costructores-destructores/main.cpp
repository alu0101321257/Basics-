// constructores y destructores en clases derivadas 
#include <iostream>
#include "clasehija.hpp"

int main(){
    ClaseHija* h1 = new ClaseHija(1,2); 

    // si ejecutamos veremos que primero se ejecuta el constructor de la clase base y despues el constructor de la clase hija  
    // aunque estemos creando un objeto de la clase hija . Esto es porque cuando se llama a el constructor de la clase hija , el primer 
    // valor que hay que inicializar son los valores de la clase base o padre , por lo que se va a el constructor de la clase base para
    //poder inicializar este valor y despues se usa el constructor de la clase hija para inicializar los valores de la clase hija , que 
    // estan colocados despues 

    delete h1;

    return 0 ; 
}