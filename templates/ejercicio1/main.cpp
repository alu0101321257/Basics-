//GENERICIDAD(TEMPLATES)--> La genericidad es una propiedad que permite definir una clase o una funcion , sin especificar el tipo de 
//datos de uno o mas de sus miembros . De esta froma se puede cambiar la clase para adaptarla a diferentes usos sin tener que 
// reescribirla 

//PLANTILLAS DE FUNCION --> modelo de funcion que el compilador de c++ usará para construir diferentes versiones de la misma función 
// segun los tipos de datos que se especifiquen al invocar la misma , la platilla permite escribir funciones que difieren excliusivamente 
// en el tipo de dato que manejan 

// hay que crear una funcion para cualcular el mayor de dos enteros , que pasa los enteros pueden ser de tipo int , float double , por lo
// que habría que crear una función para cada uno de los tipos de datos , que pasa todo este prebajo nos lo podemos ahorrar con los
//templates 

#include<iostream>
// plantilla de funcion 
//t --> puede ser de tipo float , char , int ... 

//template <typename t , typename t2 > --> se puede poner class como typename y va a funcionar , aunque se suele usar typename cuando 
//se hace una plantilla de funcion y class cuando se trate de una plantilla de clase 
template <class t , class t2 >

t mayor(t dato1, t2 dato2 ){
    if( dato1 >= dato2){
        std::cout << "El dato 1: "<<dato1<<" es mayor que el dato 2: " << dato2 << std::endl ; 
    }else {
         std::cout << "El dato 2: "<<dato2<<" es mayor que el dato 1: " << dato1 << std::endl ; 
    }
}

int main(){
    std::cout << "\n"; 
    std::cout <<"-----------Clacular el valor mayor-----------"<<std::endl ; 
    mayor("aaaaaaa","aa"); 
    mayor(12.98,12.893);
    mayor(10,11); 
    mayor(555555555,333333); 
    // daría error si le paso dos tipos de datos diferentes como por ejemplo lo siguiente 
    //mayor(10.2,10); --> estod daria error porque le estoy pasando un flotante y un int , pero esto se puede revolver añadiendo otro
    //dato generico a la funcion es decir una vez hagamos (template <class t , class t2 >) y  (t mayor(t dato1, t2 dato2 ){}) ya no daría
    // error 

    std::cout << "\n"; 
    std::cout <<"-----------Una vez modificada la funcion -----------"<<std::endl ; 
    std::cout <<"-----Se pueden comparar distintos tipos de datos-----"<<std::endl ;
    mayor(10.2021,11); 




    return 0; 
}