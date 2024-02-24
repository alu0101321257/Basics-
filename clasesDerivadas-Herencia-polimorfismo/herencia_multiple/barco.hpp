#include<iostream>

class Barco{
    private: 
        std::string nombre ; 

    public: 
        Barco(std::string nombre){
            this->nombre = nombre; 
        }

        ~Barco(){}

        void despBarco(){
            std::cout << "El barco se desplaza por agua " << std::endl ; 
        }

        std::string getNombre(){
            return nombre; 
        }

}; 