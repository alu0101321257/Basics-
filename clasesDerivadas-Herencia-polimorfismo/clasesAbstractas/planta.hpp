#include <iostream>
#include "servivo.hpp"
// cuando heredamos de una clase abstracta heredamos todos sus métodos , la mayoría de estos metodos que va a heredar la clase hija 
// de la clase abastracta suelen ser metodos virtual , y si queremos que la clase hija no sea abstracta tambien , la clase hija debera 
// de implementar todos los metodos vitual de la clase abstracta padre 
class Planta: public Servivo{
    public: 
        void alimentarse (){
            std:: cout<< "Las plantas se alimentan mediante fotosintesis"<< std:: endl;  
        }


}; 