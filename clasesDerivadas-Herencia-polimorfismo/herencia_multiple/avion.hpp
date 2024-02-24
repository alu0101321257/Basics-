#include <iostream>

class Avion{
    private: 
        std::string modelo ;
    public: 
        Avion(std::string modelo){
            this->modelo = modelo ; 
        }

        ~Avion(){}

        void despAvion(){
            std::cout << "El avion se desplaza por aire"<< std ::endl ; 
        }

        std::string getModelo(){
            return modelo; 
        } 



}; 