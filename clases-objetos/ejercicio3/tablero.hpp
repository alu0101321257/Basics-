#include<iostream>

class Tablero{
    private: 
        int x ;
        int y ; 
    
    public: 
        //constructor 
        Tablero(int x , int y ){
            this->x = x ; 
            this->y = y; 
        }

        //constructor por defecto
        Tablero(){}

        //Destructor
        ~Tablero(){}

        //Getters 
        int getX(){
            return x ; 
        }

        int getY(){
            return y ; 
        }

        //otros métodos 
        void moverArriba(int ); 
        void moverAbajo(int ); 
        void moverDerecha(int ); 
        void moverIzquierda(int); 


};