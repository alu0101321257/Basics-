//declaración de una clase para representar un punto en el eje x e y 
//la extension .h --> se refiere a un archivo de cabecera , nos servira para crear la clase 
//los MIEMBROS de una clase son los ATRIBUTOS y los METODOS 

class Punto{
    //ATRIBUTOS de la clase --> características de la clase 
    //los atributos se pondrán encapsulados con la palabra private 
    private: 
        int x ; 
        int y ; 

    //METODOS 
    public: 
        //método constructor tiene el mismo nombre que la clase y nos sirve para inicializar los atributos de la clase 
        //METODO CONSTRUCTOR 1
        Punto(int _x , int _y ){
            // estamos diciendo que el x e y  de private van a tener el valor de _x e _y que le pasemosen el método ya que al 
            //ser x e y private hay que acceder a esas variables usando métdoos de la misma clase, y este que estamos creando lo es 
            x = _x ; 
            y = _y ; 
        } 

        //pueden haber varios metodos constructores por ejemplo el siguiente sinicializa las variables x e y a 0
        //METODO CONSTRUCTOR 2
        Punto(){
            x = 0 ; 
            y = 0 ; 
        }

        //funcion para dar el valor a x e y (SETTERS)
        void set_x(int valorx);
        void set_y(int valory); 

        //funciones pra obtener el valor de x e y (GETTERS)
        int get_x();
        int get_y(); 

        //METODO DESTRUCTOR --> es una función especial que se llama automáticamente cuando un objeto está a punto de ser destruido 
        //o eliminado de la memoria. Su principal propósito es liberar recursos que el objeto haya adquirido durante su ciclo de vida, 
        //como memoria, conexiones de red o archivos, para prevenir fugas de recursos.
        ~Punto(){
            //no hace nada 
        }
};


