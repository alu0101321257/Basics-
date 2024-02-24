#include <iostream>


class Persona {
    //Atributos
    private: 
        std::string nombre ; 
        int edad ; 
        int dni  ;

    //Metodos 
    public: 
        //constructor 1 
        Persona(std::string _nombre, int _edad){
            nombre = _nombre; 
            edad = _edad; 
        }
        //Sobrecarga de métdodos -->la vemos en estas dos funciones ya que estamos usando dos metodos que son iguales 
        //,pero se diferencian en que uno tiene mas paraámetros que el otro o en que esos parámetros qu etengan sean de distinto tipo 
        
        //constructor 2 
        Persona(int _dni ){
            dni = _dni; 
        }

        //Una sobrecarga de métodos incorrecta es la siguiente como vemos hay dos metodos que son iguales , pero que no pueden 
        //diferenciar los parámetros , en este caso c++ nos daría un error ya que no va a poder diferenciar cuando llamas a lso métodos
        void presentar(){
            std::cout<< "Yo soy " << nombre <<" y tengo " << edad ; 
        }

        void verDni(){
            std ::cout << "Mi dni es: " << dni << std ::endl ;  
        }

        //void presentar (){}

}; 