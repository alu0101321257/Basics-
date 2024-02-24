#include<iostream>

template <class t1 , class t2>
class Ejemploplantilla{
    private : 
        t1 dato1 ; 
        t2 dato2 ;
    public: 
        //getters 
        Ejemploplantilla(t1 dato1 , t2 dato2 ){
            this->dato1 = dato1; 
            this->dato2= dato2; 
        } 

        //seters
        void setDato1(t1 dato1){
            this->dato1 = dato1; 
        }

        void setDato2(t2 dato2){
            this->dato2 = dato2; 
        }

        //getters 

        t1 getDato1(){
            return dato1; 
        }

        t2 getDato2(){
            return dato2; 
        }

        void mostrarDatos(){
            std::cout << "El dato 1 es: " << dato1 << std::endl ;
            std::cout << "El dato 2 es: " << dato2 << std::endl ; 
        }


};