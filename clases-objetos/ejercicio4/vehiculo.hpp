#include <iostream>

class Vehiculo{
    private: 
        float precio; 
        std::string modelo; 
        std::string marca; 

    public: 
        //constructor 
        Vehiculo(float precio , std::string modelo , std::string marca){
            this->precio = precio; 
            this->modelo= modelo;
            this->marca= marca;
        }
        //constructor por defecto
        Vehiculo(){}

        //destructor
        ~Vehiculo(){}

        //getters 
        float getPrecio(){
            return precio; 
        }
        
        std::string getModelo(){
            return modelo; 
        }

        std::string getMarca(){
            return marca; 
        }

        void mostrarDatos(){
            std::cout << "----Datos del vehiculo----"<< std::endl; 
            std::cout<< "El precio es: "<< precio << std ::endl ;
            std::cout<< "El modelo es:" << modelo << std::endl ;  
            std::cout<< "La marca es: "<< marca << std::endl ; 
        }

        static int masBarato(Vehiculo v1[], int n ){
            int indice ; 
            float precio; 
            precio = v1[0].getPrecio(); 

            for(int i =0 ; i<n ; i++){
                if(v1[i].getPrecio()<precio){
                    precio = v1[i].getPrecio();
                    indice = i ; 
                }
            }
            return indice; 
        }

}; 