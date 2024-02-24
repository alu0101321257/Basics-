#include<iostream>
#include "expediente.hpp"
#include "direccion.hpp"

//la clase estudiante es una clase COMPUESTA , ya que entre los atributos de la misma hay objetos de otras clases , en este caso el
//expediente y la direccion  

class Estudiante{
    private: 
        std::string nombre; 
        float nota_media;
        Expediente exp ; 
        Direccion dir ;  

    public:
        //Constructor 
        Estudiante(std::string nombre , float nota_media ,int num_expediente, std::string direccion) : exp(num_expediente) , dir(direccion){
            this-> nombre = nombre; 
            this -> nota_media = nota_media; 

        } 
        void mostrardatos(){
            std::cout << "Nombre alumno: " << nombre << std::endl ; 
            std::cout << "Nota media: " << nota_media << std ::endl; 
            std::cout << "Direccion: " << dir.getDireccion() <<std::endl ; 
            std::cout << "Numero expediente: " << exp.getNroExpe() <<  std::endl ; 
        }


};