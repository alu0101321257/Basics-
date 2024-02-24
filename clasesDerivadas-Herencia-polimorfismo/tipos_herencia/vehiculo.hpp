//guardian de inclusion multiple--> es para poder incluir la clase vehiculo en variarias subclases , en este caso tenemos dos subclases
//coche y deportivo , de no poner las siguientes dos lineas y la ultima #endif nos daria un error de redefinición de clases 
#ifndef VEHICULO_HPP
#define VEHICULO_HPP

#include<iostream>

class Vehiculo{
    private:
        std::string marca ; 
        std::string color ;

    protected: 
        std::string modelo; 
        std::string getModelo(){
            return modelo; 
        }

    public:
        Vehiculo(std::string marca , std::string color , std::string modelo ){
            this->marca = marca; 
            this->color= color; 
            this->modelo = modelo; 
        } 

        ~Vehiculo(){}

        std::string getMarca(){
            return marca; 
        }

        std::string getColor(){
            return color ; 
        }

        //para poder modificar los valores de los atributos de un vehiculo desde la clase coche , vamos a crear los stters , que al ser 
        //publicos se heredaran como publico y poermitira a los objetos de la clase coche poder modificar los valores 

        void setColor(std::string  nuevo_col){
            color = nuevo_col ; 
        }

        void setMarca(std::string nueva_marca){
            marca = nueva_marca; 
        }
}; 

#endif