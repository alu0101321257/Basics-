#include<iostream>

class Expediente{
    private: 
        int num_expediente; 
    public: 
        //constructor 
        Expediente(int num_expediente){
            this-> num_expediente = num_expediente; 
        }

        //constructor por defecto 
        Expediente(){

        }

        //destructor
        ~Expediente(){}

        //getters 
        int getNroExpe(){
            return num_expediente; 
        }


};