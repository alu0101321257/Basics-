#include<iostream>

class Estatico{
    private : 
        // los atributos de modo estatico no se pueden inicializar dentro de la clase hay que hacerlo fuera
        static int contador ; 

    public :
    // vamos a hacer un contador que cuente el numero de veces que se crea un objeto de la clase estatico 
    Estatico(){
        contador ++ ; 
    } 

    // getter 
    int getCont(){
        return contador; 
    }

    //metodo estatico 
    static int sumar(int a , int b ){
        int suma ; 
        suma= a + b ; 
        return suma ; 
    }

} ;