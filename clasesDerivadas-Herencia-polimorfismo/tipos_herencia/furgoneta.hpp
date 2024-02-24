#include <iostream>
#include"vehiculo.hpp"
//herencia PROTECTED 
// -Lo PUBLICO se hereda como PROTECTED 
// -Lo PROTECTED se hereda como PROTECTED 
// -Lo PRIVADO es INACCESIBLE 

class Furgoneta : protected Vehiculo{
    private: 
        int carga ; 


    public: 
        Furgoneta(std::string marca , std::string color , std::string modelo, int carga) : Vehiculo(marca,color,modelo){
            this->carga=carga; 
        }

        int getCarga(){
            return carga; 
        }

        std::string devolvermarca(){
            std::string  mar; 
            mar = getMarca(); 
            return mar ; 
        }

        std::string devolverModelo(){
            std::string  mod; 
            mod = getModelo(); 
            return mod; 
        }
};