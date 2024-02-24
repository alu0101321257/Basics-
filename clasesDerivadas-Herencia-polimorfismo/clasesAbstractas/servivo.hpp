#ifndef SERVIVO_HPP
#define SERVIVO_HPP
#include <iostream>
// clase abstracta 
class Servivo {
    public: 
        
        // la funcion virual es una funcion que necistamos definir en la clase abstacta , pero que no vamos a definir todavia 
        // porque es algo muy generico, desde que usemos el virtual , se sobreentiende que la clase es abstracta 
        virtual void alimentarse()= 0 ; 
        



}; 
#endif 