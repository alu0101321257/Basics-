#include <iostream>
#include "padre1.hpp"
#include "padre2.hpp"
// lo de abajo es lo mismo que ponerlo asi --> class ClaseHija : public ClasePadre1 , public ClasePadre2 { , cuando el tipo de herencia
// es el mismo para ambas clases con ponerlo una sola vez es suficiente
class ClaseHija : public ClasePadre1 , ClasePadre2 {
    protected: 
        int x ; 
    
    public: 
        // para qu no haya errores con los nombres de la variable debo de cambiar los nombres a las variables 
        //ClaseHija(int x , int x , int x ) : ClasePadre1(x) , ClasePadre2(x){ --> asi sería como lo declarariamos de froma normal, pero 
        // daría error hay que hacerlo de la siguiente maner a
        ClaseHija(int x1 , int x2 , int x ) : ClasePadre1(x1) , ClasePadre2(x2){
            this-> x = x ; 
        }
        
        // si hacemos un metodo getx - ¿que x obtendremos? ya que tanto las dos clases padres como la hija que hereda de las dos clases 
        //padre tienen un atributo que es la x , podría parecer una abiguedad , pero no c++  obtine la x de la clase hija , ya que si
        //quisieramos la de la clase padre1 deberiamos de usar x1 y si queremos la x de la clase padre 2 deberiamos de usar x2 
        int getx( ){
            // si queremos acceder al valor de la x de la clasePadre1 debemos de hacer 
            // return ClasePadre1::x 
            // lo mismo seria para la clase padre 2 hariamos --> return ClasePadre2::x
            return x ; 
        }

        ~ClaseHija(){

        }

        // ahora hemos creado metodos getX() en todas las clases , y que pasaria si queremos hacer un metodo como el siguiente que te 
        // devuelva el valor de la x de la clase padre1 deberemos de hacer lo siguiente 

        int devolverx(){
            int devolver ; 
            devolver = ClasePadre1::getX(); 
            return devolver; 
        }



} ; 