#include<iostream>
#include "vehiculo.hpp"

//herencia PUBLICA: 
// - Lo PUBLICO se hereda como PUBLIC 
// - Lo PROTECTED se hreda como PROTECTED 
// - Lo PRIVADO es INACCESIBLE 

//class Coche :  Vehiculo --> si no pusieramos el tipo de herencia que queremos hacer , c++ entenderá que estamos haciendo 
//una herencia de tipo privada (PRIVATE)
class Coche : public Vehiculo{
    private: 
        int num_puertas; 
    
    public: 
        Coche(int num_puertas , std::string marca , std::string color , std::string modelo) : Vehiculo(marca , color , modelo){
            this-> num_puertas = num_puertas; 
        }

        int getNum_puertas(){
            return num_puertas; 
        }

        ~Coche(){}

        //los metodos protected no se pueden usar con el objeto es decir en el main no vamos a poder hacer c1->getmodelo(), pero si podemos 
        //usar ese metodo para crear otro metodo en la parte publica de nuestro objeto que devuelva el modelo como el siguiente 

        std::string devolver_modelo(){
            std::string mod; 
            mod = getModelo();
            return mod; 
        }



}; 