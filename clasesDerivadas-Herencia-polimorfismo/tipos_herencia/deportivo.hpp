//herencia PRIVADA 
// - Lo PUBLICO se hereda como PRIVATE 
// - Lo PROTECTED se hereda como PRIVATE 
// - Lo PRIVADO es INACCESIBLE 
#include<iostream>
#include "vehiculo.hpp"

class Deportivo : private Vehiculo {
    private: 
        int cilindrada ; 
    
    public:
        Deportivo(std::string marca , std::string color , std::string modelo , int cilindrada): Vehiculo(marca , color , modelo){
            this->cilindrada=cilindrada; 
        }

        ~Deportivo(){}

        int getCilindrada(){
            return cilindrada; 
        }

        std::string devolverMarca(){
            std::string mar ; 
            mar = getMarca(); 
            return mar; 
        }


}; 

//podría parecer que las clases con herencia PROTECTED y PRIVATE , son iguales , y quizas en esta clase que hemos creado si , pero si 
//decidimos crear nuevas clases hijas tanto de Deportivo que tiene herencia privada , como de furgoneta que tiene herencia protegida ,
// nos daremos cuenta que ahi cambian las cosas. 

// En el caso de la clase deportivo , si creamos una nueva clase hija de deportivo , esta nueva clase no podrá usar los metodos de la 
//clase vehiculo ya que la herencia es privada , pero en cambio si creamos una hija de la clase furgoneta , esta clase hija si podrá 
//usar los metodos de la clase vehiculo debido a la herencia protected 