#include <iostream>
// array de objetos --> en este tipo de clases no se crea el constructor al que estamos acostumbrados sino que se usa 
//el constructor por defecto 
class Alumno{
    private: 
        float nota1; 
        float nota2; 
        float media;

    public:      
    //constructor por defecto no hace falta ponerlo , lo pone c++ automaticamente pero se pude poner y es el siguinete 
    Alumno(){

    }
    void pedirdatos();
    void mostrarnotas(); 
};