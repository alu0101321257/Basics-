#include <iostream>

class Perro {

    private:
        std::string nombre ;
        std::string raza ; 
        int edad ; 
        std::string apodo; 

    public: 
        //constructor 
        Perro(std::string _nombre , std ::string _raza){
            nombre = _nombre ; 
            raza = _raza ; 
        }   

        //constructor 2 
        //como vemos en este segundo contructor hay una colision entre varaibles en el caso de no usar la autorreferencia this  
        //ya que c++ no va a saber a que variable apodo o edad nos estamos refiriendo a la variable apodo o edad de la clase o a la 
        //variable apodo y edad que le pasamos como parametro a el constructor. 

        //THIS va a ayudar a c++ a diferenciar a los miembros de la clase , cuando sepamos que variable es la del atributo de la clase 
        //le ponemos el this -> delante del atributo y c++ entenderá que esa variable que le pones el this delante es un atributo de la 
        //clase  
        Perro(std::string apodo , int edad){
            //no se puede poner 
            //apodo = apodo; 
            //edad = edad;
            this->apodo = apodo; 
            this -> edad = edad;
        }



        //destructor 
        ~Perro(){}

        //otros metodos 

        void mostrardatos(); 
        void jugar(); 

}; 