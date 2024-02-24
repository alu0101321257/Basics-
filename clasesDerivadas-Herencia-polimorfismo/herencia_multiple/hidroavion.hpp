#include <iostream>
#include "barco.hpp"
#include "avion.hpp"
// la clase hidroavion tiene herencia multiple y publica , la siguiente clase heredara de barco y de avion 
class Hidroavion : public Barco , public Avion{
    private : 
        std::string codigo ; 
    
    public: 
        //hay que añadirlo con el orden que pusimos la herencia en la declaracion de la clase 
        Hidroavion(  std::string nombre , std::string modelo  , std::string codigo ) : Barco(nombre), Avion(modelo){
            this->codigo = codigo; 
        }
        ~Hidroavion(){}

        std::string getCodigo(){
            return codigo; 
        }

        void mostrarDatos(){
            std::cout << "El nombre del hidroavion es: " << getNombre() << std ::endl ;
            std::cout << "El modelo del hidroavion es: " << getModelo() << std ::endl ;
            std::cout << "El codigo del hidroavion es: " << codigo << std::endl ; 

        }

}; 