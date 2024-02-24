class Diaano{
    private:
        //atributos
        int dia ; 
        int mes ; 
    
    public: 
        //metodos 
        Diaano(int dia_ , int mes_){
            dia = dia_; 
            mes = mes_; 
        }

        Diaano(){
            dia = 0; 
            mes = 0; 
        }

        //getters 
        int get_dia();
        int get_mes(); 

        //setters
        void set_dia(int valor);
        void set_mes(int valor); 

        //otros métodos 
        // se pone bool porque va a devolver o verdadero o falso 
        bool comparar(Diaano& d );
        void verfecha(); 

};