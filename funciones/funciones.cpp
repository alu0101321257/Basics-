#include <iostream>
//*************FUNCION1*************//
//plantillas de funcion --> para cuando no sabemos que tipo de dato vamos a pasarle 
template <class tipod>
void valorAbsoluto(tipod numero);


//*************FUNCION2*************//
void mult(float num1 , float num2); 


//*************FUNCION3*************//
template <class tipoc>
void cuadrado(tipoc numero1);


//*************FUNCION4*************//
void parteFraccion(float num5);


//*************FUNCION5*************//
template <class temp>
temp max(temp num1 , temp num2 , temp num3);

//*************FUNCION6*************//
//Paso por referencia --> no se le pasa el valor sino que se le pasa la direccion de memoria donde esta ese valor 
void valornum(int&,int&);

//*************FUNCION7*************//
//cambiar el valor de dos varaibles
void cambiovalor(int&,int&);

//*************FUNCION8*************//
//dar la vuelta de un cajero 
void cambio( int , int& , int& , int& , int& , int& , int& ); 

//*************FUNCION9*************//
//paso de parámetros tipo vector 
void vectorcuadrado(int vect[], int );
void mostrarvect(int vect[],int);

//*************FUNCION10*************//
void sumavect(int vect[], int);

//*************FUNCION11*************//
//pasar parametro tipo matriz --> siempre hay que poner el numero de columnas que tiene , las filas no son obligatorias  
void mostrarmatriz(int matrix[][3], int , int);
void matrizcuadrada(int matrix [][3], int , int); 

//*************FUNCION12*************//
//determinar si una matriz es siempretica 
void matrizsim(int matrix[][3],int , int); 

//*************FUNCION13*************//
//obtener el menor elemento de una matriz 
void menelemento(int matrix[][3],int , int); 

//*************FUNCION14*************//
//factorial de un numero (con recursividad --> que la funcion se llame a si misma)
int factorial (int); 

//*************FUNCION15*************//
//serie fibbonacci  (con recursividad --> que la funcion se llame a si misma)
int fibbonacci(int); 

int main (){
    //*************FUNCION1*************
    int numero1 = 1; 
    float numero2 = 3.14;
    double numero3 = 123.11234;
    //como hemos creado un template dará igual el tipo de dato que le pasemos 
    std::cout << std :: endl ; 
    std::cout<< "-------------FUNCION1-------------"<< std::endl; 
    valorAbsoluto(numero1);
    valorAbsoluto(numero2);
    valorAbsoluto(numero3);

    //*************FUNCION2*************
    float num2 = 2.10;
    float num3 = 2.10;
    std::cout << std :: endl ; 
    std::cout<< "-------------FUNCION2-------------"<< std::endl; 
    mult(num2, num3);

    //*************FUNCION3*************
    std::cout << std :: endl ; 
    std::cout<< "-------------FUNCION3-------------"<< std::endl; 
    float num4 = 4.4; 
    cuadrado(num4); 

    //*************FUNCION4*************
    std::cout << std :: endl ; 
    std::cout<< "-------------FUNCION4-------------"<< std::endl; 
    float flotante = 3.141626; 
    parteFraccion(flotante);

    //*************FUNCION5*************
    std::cout << std :: endl ; 
    std::cout<< "-------------FUNCION5-------------"<< std::endl; 
    int dato1 = 3;
    int dato2 = 4;
    int dato3 = 5; 
    float f1 = 0.1;
    float f2 = 0.5;
    float f3 = 0.2;
    std::cout<< "El entero mayor es " << max(dato1,dato2,dato3) << std :: endl ; 
    std::cout << "El flotante mayor es " << max(f1,f2,f3) << std::endl; 

    //*************FUNCION6*************
    std::cout << std :: endl ; 
    std::cout<< "-------------FUNCION6-------------"<< std::endl; 
    int a =0;
    int b=1;

    //std::cout<< "Dame dos numeros: "<<std::endl ;
    //std::cin>>a>>b; 
    valornum(a,b);
    std::cout<<"los numeros cambiados son : " << a << " " << b << std::endl;  

    //*************FUNCION7*************
    std::cout << std :: endl ; 
    std::cout<< "-------------FUNCION7-------------"<< std::endl; 
    int c= 20 ; 
    int d = 10;
    std::cout<<"El valor de c es "<< c <<" el valor d es " << d << std ::endl ; 
    cambiovalor(c,d); 

    //*************FUNCION8*************
    std::cout << std :: endl ; 
    std::cout<< "-------------FUNCION8-------------"<< std::endl; 
    int valor = 545; 
    int cien; 
    int cincuenta; 
    int veinte; 
    int diez; 
    int cinco; 
    int uno; 

    //std:: cout << "Introduce el valor a cambair: " <<std::endl ;
    //std:: cin >> valor ; 

    std:: cout << "El cambio de " << valor << " es : " << std:: endl ; 
    cambio(valor , cien, cincuenta,veinte,diez,cinco,uno); 
    std :: cout << "Billetes de cien: " << cien << std::endl; 
    std :: cout << "Billetes de cincuenta: " << cincuenta << std::endl; 
    std :: cout << "Billetes de veinte: " << veinte << std::endl; 
    std :: cout << "Billetes de diez: " << diez << std::endl; 
    std :: cout << "Billetes de cinco: " << cinco << std::endl; 
    std :: cout << "Billetes de uno: " << uno << std::endl; 

    //*************FUNCION9*************//
    std::cout << std :: endl ; 
    std::cout<< "-------------FUNCION9-------------"<< std::endl; 
    const int tam = 5 ; 
    int vect[tam]= {1,2,3,4,5}; 

    vectorcuadrado(vect,tam );
    mostrarvect(vect,tam);

    //*************FUNCION10*************//
    std::cout << std :: endl ; 
    std::cout<< "-------------FUNCION10-------------"<< std::endl; 
    const int tam1 = 5 ; 
    int vectd[tam1]= {2,2,2,2,2};
    sumavect(vectd,tam1);

    //*************FUNCION11*************//
    std::cout << std :: endl ; 
    std::cout<< "-------------FUNCION11-------------"<< std::endl;
    const int fil = 2 ; 
    const int col = 3 ; 
    int matrix[fil][col]= {{1,2,3},{4,5,6}}; 
    mostrarmatriz(matrix, fil, col);
    matrizcuadrada(matrix,fil,col);
    mostrarmatriz(matrix, fil, col);

    //*************FUNCION12*************//
    std::cout << std :: endl ; 
    std::cout<< "-------------FUNCION12-------------"<< std::endl;
    //vamos a usar la matriz de antes matrix 
    int filt = 3 ;
    
    int matrixt[filt][col]={{1,1,1},{1,1,1},{1,1,1}};
    matrizsim(matrix , fil , col );
    mostrarmatriz(matrix, fil , col);
    matrizsim(matrixt , filt , col );    
    mostrarmatriz(matrixt, filt , col);

    //*************FUNCION13*************//
    std::cout << std :: endl ; 
    std::cout<< "-------------FUNCION13-------------"<< std::endl;
    //vamos a usar la matriz de antes matrix 
    mostrarmatriz(matrix, fil , col);
    menelemento(matrix , fil , col);

    //*************FUNCION14*************//
    std::cout << std :: endl ; 
    std::cout<< "-------------FUNCION14-------------"<< std::endl;
    int num6 = 5 ; 
    std :: cout << "El factorial de " << num6 << " es: " << factorial(num6) << std :: endl ; 

    //*************FUNCION14*************//
    std::cout << std :: endl ; 
    std::cout<< "-------------FUNCION14-------------"<< std::endl;
    //ahora hay que conseguir que te de toda la serie para ello 
    int elemento = 10 ; 

    // do{
    //     std :: cout << "Introduce el nuemro de elementos: " << std ::endl; 
    //     std :: cin >> elemento; 
    // }while (elemento <= 0 ); 
    
    std :: cout << "Serie Fibonacci para " << elemento ; 
    for(int i =0; i<elemento; i++){
        std :: cout << fibbonacci(i) << " , "; 
    }
    
   
     

    return 0; 
}

//*************FUNCION1*************
template <class tipod>
void valorAbsoluto(tipod numero){
    if(numero < 0){
        numero = numero*-1;
    }
    std :: cout << "El valor absoluto del numero es: " << numero << std::endl; 
}

//*************FUNCION2*************
void mult(float num1 , float num2){

    float num3 = 0 ; 
    num3= num1 *num2; 

    std::cout<< "El resultado de la multiplicacion es " << num3 << std :: endl;  
}

//*************FUNCION3*************
template <class tipoc>
void cuadrado(tipoc numero1){
    float result= numero1*numero1; 
    std::cout<< "El resultado es "<< result << std :: endl ; 
}

//*************FUNCION4*************//
void parteFraccion(float num5){
    int entero = num5; 
    float result = num5 -entero; 

    std :: cout << "La parte fraccionaria es " << result << std :: endl ; 
}

//*************FUNCION5*************//
template <class temp>
temp max(temp num1 , temp num2 , temp num3){
    temp max; 
    if((num1 >= num2) && (num1>=num3)){
        max = num1 ; 
    }else {

        if((num2 < num1) && (num2 > num3 )){
            max = num2; 
        }else{
            max = num3; 
        }
    }    
    return max ; 

}

//*************FUNCION6*************//
//El &indica la dirección de la memoria 
void valornum(int& a,int& b ){
    //imprimiendo los valores
    std :: cout << "El valor del numero a es: " << a << std::endl; 
    std :: cout << "El valor del numero b es: " << b << std::endl;
    //cambiando los valores
    a = 100;
    b = 101;

}

//*************FUNCION7*************//
//cambiar el valor de dos varaibles
void cambiovalor(int& c,int& d){
    int aux = 0 ; 
    c = aux ; 
    c = d ; 
    d = aux ; 

    std :: cout << "El nuevo valor de c es  " << c << " el nuevo valor de d es " << d << std :: endl ; 

        
}

//*************FUNCION8*************//
//dar la vuelta de un cajero 
void cambio( int valor , int& cien, int& cincuenta , int& veinte , int& diez, int& cinco , int& uno ){
    
    cien = valor/100; 
    valor %= 100; 
    cincuenta = valor/50; 
    valor %= 50 ; 
    veinte = valor /20; 
    valor %= 20;
    diez = valor/10; 
    valor %=10; 
    cinco= valor/5; 
    uno= valor%5; 

}

//*************FUNCION9*************//
void vectorcuadrado(int vect[], int tam ){
    for(int i=0; i<5;i++){
        vect[i]=vect[i]*vect[i];
    }
}

void mostrarvect(int vect[], int tam){
    for(int i =0 ; i<5;i++){
        std::cout << vect[i] << " " ; 
    }
}

//*************FUNCION10*************//
void sumavect(int vect[], int tam){
    int suma =0; 
    for(int i =0 ; i<5 ; i++){
        suma += vect[i];
    }

    std :: cout << "La suma de los elementos del vector es : " << suma << std::endl ; 
}

//*************FUNCION11*************//

void mostrarmatriz(int matrix[][3], int fil, int col){
    for(int i =0 ; i<fil ; i++){
        for(int j =0 ; j<col ; j++){
            std::cout<<matrix[i][j] << " "; 
        }
        std :: cout<< std::endl; 
    }

}
void matrizcuadrada(int matrix [][3], int fil, int col){
     for(int i =0 ; i<fil ; i++){
        for(int j =0 ; j<col ; j++){
            matrix[i][j]= matrix[i][j]*matrix[i][j]; 
        }
        std :: cout<< std::endl; 
    }

}

//*************FUNCION12*************//
//determinar si una matriz es siempretica 
void matrizsim(int matrix[][3],int fil, int col){
    int cont = 0 ; 
    if(fil==col){
        for(int i =0; i<fil; i++){
            for(int j =0; j<col; j++){
                if (matrix[i][j]==matrix[j][i]){
                    cont ++; 
                }

            }
        }
    }
    if (cont == fil*col){
        std::cout<< "La matriz es simetrica" << std ::endl; 
    }else{
        std::cout << "La matriz no es simetrica" << std::endl; 
    }
   

}

//*************FUNCION13*************//
//obtener el menor elemento de una matriz 
void menelemento(int matrix[][3],int fil, int col){
    int men = 100; 
    for(int i = 0; i<fil ; i++){
        for (int j=0; j<col; j++){
            if(matrix[i][j]<men){
                men=matrix[i][j]; 
            }
        }
    } 
    std::cout << "El elemento mas pequeno de la matriz es " << men << std ::endl; 
}

//*************FUNCION14*************//
//factorial de un numero (con recursividad --> que la funcion se llame a si misma)
int factorial (int num ){
    if (num == 0 ){
        num = 1; 
    }else{
        num = num * factorial(num-1); 
    }
  return num ; 
}

//*************FUNCION15*************//
//serie fibbonacci  (con recursividad --> que la funcion se llame a si misma)
int fibbonacci(int num){
    if (num < 2 ){
        return num ; 
    }else {
        return fibbonacci(num -1) + fibbonacci(num -2) ; 
    }

}
