#include <iostream>

class Personaje{

    friend void modificar(Personaje & , int , int ); 

    private: 
        int ataque ; 
        int defensa; 

    public: 
        //constructor 
        Personaje(int ataque , int defensa){
            this-> ataque = ataque ; 
            this-> defensa = defensa; 
        }

        //constructor por defecto 
        Personaje(){

        }

        //destructor 
        ~Personaje(){

        }

        //getters
        int getDefensa(){
            return defensa; 
        } 

        int getAtaque(){
            return ataque; 
        }

        //metodos 
        void mostrarDatos(){
            std:: cout << "La fuerza de ataque es: " << ataque << std::endl ; 
            std ::cout << "La fuerza de defensa es: " << defensa<< std::endl ;  
        }


}; 

