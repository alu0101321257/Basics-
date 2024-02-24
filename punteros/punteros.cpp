#include <iostream>
#include<stdlib.h > // para poder usar (new y delete) de los arrays dinámicos 

//Cuando usamos los puteros &n --> direccion de n 
//                          *n --> variable cuya direción esta almacenada en n  


//-------------Ejercicio4-------------//
//para intercambiar valores con punteros ponemos el tipo y * , le estaríamos pasando el valor de la variable 
void Intercambiar(float * , float * );


//-------------Ejercicio9-------------//
void sumarmatrix(int ** , int ** , int , int ); 


int main(){
    
    // imprimimos la direción de num 
    int num = 21 ;  
    std :: cout << "La direccion de num es: " << &num << std :: endl ; 

    // ahora hacemos lo mismo usando punteros 
    int *punt ; 
    punt = &num ; 
    std:: cout << "------Usamos punteros------"<<std::endl; 
    std:: cout << "El valor de num es: "<< *punt <<std :: endl; 
    std::cout << "La posicion de la memoria es:"<< punt <<std::endl; 



    //---------------------------------------------------------------------------------------------------------------------------------//
    //ejercicio 1 --> comprobar si un numero es par o impar con punteros 
    std::cout << std :: endl ; 
    std::cout<< "-------------Ejercicio1-------------"<< std::endl; 
    if (*punt%2 == 0){
        std :: cout << "El numero que se encuentra en la posicion " << punt << "es par" << std :: endl; 
    }else {
        std :: cout << "El numero "<< *punt <<" es impar ";
    }



    //---------------------------------------------------------------------------------------------------------------------------------//
    //ejercicio 2 --> recorrer e impimir un array 
    std::cout << std :: endl ; 
    std::cout<< "-------------Ejercicio2-------------"<< std::endl; 
    int array[]={1,2,3,4,5};
    int *p_array = array; // el puntero es a la primera dirección de memoria del array otra forma de ponerlo es :
    //int *p_array = &array[0];

    //recorremos el array 
    std :: cout << "Imprimiendo los valores de las posiciones del array"<< std :: endl ; 
    for(int i =0 ; i< 5 ; i++){
        std::cout<<"elemento del vector [" <<i<<"] " << *p_array++ <<std::endl; 
        // *p_array++ es para que pase a la siguiente dirección de memoria donde se encuentra el siguiente número
    }

    std ::cout << std::endl;  
    std :: cout << "Imprimiendo las posiciones de momoria del array" << std :: endl; 
    //si quisieramos mostrar las posiciones de memoria del array 
     for(int i =0 ; i< 5 ; i++){
        std::cout<<"elemento del vector [" <<i<<"] " << p_array++ <<std::endl; 
        // *p_array++ es para que pase a la siguiente dirección de memoria donde se encuentra el siguiente número
    } 



    //---------------------------------------------------------------------------------------------------------------------------------//
    //ejercicio 3 --> Elemento menor del array 
    std::cout << std :: endl ; 
    std::cout<< "-------------Ejercicio2-------------"<< std::endl; 
    int array1[]={4,2,8,3,5,9};
    int *p_array1 = array1; 
    int men=100; 

    for(int i=0; i<6 ; i++){
        if(*p_array1 < men){
            men = *p_array1;
        }
        *p_array1++; 
    }

    std :: cout << "El menor elemento del array es: " << men << std :: endl ; 



    //---------------------------------------------------------------------------------------------------------------------------------//
    //--------------ASIGNACIÓN DINAMICA DE ARRAYS--------------//
    //new --> Reserva el numero de bytes solicitados 
    //delete --> libera el bloque de bytes reservado 
    // la siganación dinámica sirve para que si por ejemplo tengamos un array[10] de 10 elementos y 
    //usemos solo 4 pues que las otras 6 posiciones no se malgasten en algo que no se este usando 

    //ejercicio 3 --> Elemento menor del array 
    //std::cout << std :: endl ; 
    //std::cout<< "-------------Ejercicio3-------------"<< std::endl; 
    //se van a pedir n  notas al ususario y almacenarlas en un arreglo dinámico 
    //int num_notas =0 ;
  
    //std:: cout <<"Cuantas notas vas a introducir: "<< std ::endl ; 
    //este valor será el tamaño del array donde iran todas las notas
    //std :: cin >> num_notas ; 

    //creamos el puntero al array con las dimensiones de antes 
    //int *array_notas = new int[num_notas]; 

    //ahora hay que meter las notas que nos de el usuario en el array 
    //for(int i=0 ; i < num_notas ; i++){
    //    std :: cout << "Introduce la nota " << i << ": "; 
    //    std :: cin >> array_notas[i]; 
    //}

    //ahora mostraremos las notas del usuario
    //for(int i =0 ; i < num_notas ; i++){
    //    std :: cout << array_notas[i] << " | "; 
    //}

    //ahora emilinamos las posiciones del array no utilizadas 
    //delete[] array_notas; 



    //---------------------------------------------------------------------------------------------------------------------------------//
    //ejercicio 4--> Intercambiar el valor de 2 variables usando punteros
    std::cout << std :: endl ; 
    std::cout<< "-------------Ejercicio4-------------"<< std::endl;

    float num1 = 20.8; 
    float num2 = 21.9 ; 

    std :: cout << "El primer numero es: " << num1 << std::endl ; 
    std :: cout << "EL segundo numero es: "<< num2 << std::endl ;

    //ahora cuando llamemos a la función intercambio le vamos a pasar la dirección de memoria de los numeros 
    Intercambiar(&num1,&num2); 

    std::cout <<"******Intercambio de los valores ******"<<std::endl; 
    std :: cout << "El primer numero es: " << num1 << std::endl ; 
    std :: cout << "EL segundo numero es: "<< num2 << std::endl ;



    //---------------------------------------------------------------------------------------------------------------------------------//
    //ejercicio 5--> hallar el maximo valor de un array con punteros 
    std::cout << std :: endl ; 
    std::cout<< "-------------Ejercicio5-------------"<< std::endl; 

    int array2[]={4,2,10,3,5,9};
    int *p_array2 = array2; 
    int mayor=0; 

    for (int i = 0; i < 6; i++){
        if(array2[i] > mayor){
        mayor = array2[i]; 
        }
    }
    std::cout << "EL elemento mayor del array es: " << mayor << std::endl; 
    

    //---------------------------------------------------------------------------------------------------------------------------------//
    //ejercicio 6--> ordenar un array usando punteros 
    std::cout << std::endl; 
    std::cout << "-------------Ejercicio6-------------" << std::endl; 
    int array3[] = {4,2,6,3,5,1};
    int *p_array3 = array3; 

    std::cout << "***Array sin ordenar***" << std::endl; 
    for(int i = 0; i < 6; i++) {
        std::cout << *(p_array3 + i) << " "; 
    }

    // Ordenamiento burbuja
    int aux; 
    //bucle que se usa para recorrer el array 
    for(int i = 0; i < 6; i++) {
        //bucle que se usa para realizar los cambios
        for(int j = 0; j < 5; j++) { // 6 - 1 = 5
            if(*(p_array3 + j) > *(p_array3 + j + 1)) {
                //p_array3 + j --> indica el 
                aux = *(p_array3 + j); 
                *(p_array3 + j) = *(p_array3 + j + 1); 
                *(p_array3 + j + 1) = aux; 
            }
        }
    }

    std::cout << std::endl; 
    std::cout << "***El array ordenado de menor a mayor***" << std::endl;
    for(int i = 0; i < 6; i++) {
        std::cout << *p_array3++ << " "; 
    }



    //---------------------------------------------------------------------------------------------------------------------------------//
    //ejercicio 7--> hallar un número usando punteros  
    std::cout << std :: endl ; 
    std::cout<< "-------------Ejercicio7-------------"<< std::endl; 
    int obj = 5;
    int array4[] = {4,2,6,3,5,1};
    int *p_array4 = array4; 
    int i =0; 
    char flag = 'f'; 

    //std :: cout << "Introduce el numero a buscar: " << std::endl ; 
    //std :: cin >> obj ; 
    
    while((i < 6 ) && (flag == 'f')){
        //se pone *p_array3 +i para que compruebe todas las posiciones , si solo ponemos *p_array solo comprobara la primera 
        if(*(p_array4+i) == obj) {
            flag = 't'; 
        }else{
            i++;
        } 
               
    }

    if(flag == 'f' ){
        std :: cout << "El numero " << obj << " no se encuentra en el array " << std :: endl ; 
    }else{
        std :: cout << "El numero " << obj << " se encuentra en la posicion " << i << std ::endl ; 
    }



    //---------------------------------------------------------------------------------------------------------------------------------//
    //ejercicio 8--> usando punteros rellenar una matriz nxm
    //**p_matriz --> *p_fila        1 2 3       *pfila apunta a --> 1
    //               *p_fila        4 5 6       *pfila apunta a --> 4
    //               *p_fila        7 8 9       *pfila apunta a --> 7 
    std::cout << std :: endl ; 
    std::cout<< "-------------Ejercicio8-------------"<< std::endl; 
    int col =0; 
    int fil=0; 
    std :: cout << "Introduce las columnas de la matriz: "; 
    std :: cin >> col ; 
    std ::cout << "Introduce las filas de la matriz: "; 
    std :: cin >> fil ; 

    int **p_matriz;
    int **p_matriz1;

    //reservando memoria para las filas  
    p_matriz = new int*[fil] ; 
    p_matriz1 = new int*[fil];

    //ahora reservamos memoria para las columnas 
    for(int i = 0 ; i< fil ; i++){
        p_matriz[i] = new int [col]; 
    }

    for(int i = 0 ; i< fil ; i++){
        p_matriz1[i] = new int [col]; 
    }


    std:: cout << "\n Introduciendo los valores de la matriz 1 \n" ; 
    for(int i =0 ; i < fil ; i++){
        for(int j=0 ; j < col ; j++){
            std :: cout << "Introduce el valor de la posicion [" << i <<"][" << j << "]" << std ::endl; 
            std ::cin >> *(*(p_matriz +i )+j) ; // que sería el p_matriz[i][j]
        }
    }
    std:: cout << "\n Introduciendo los valores de la matriz 2 \n" ; 
    for(int i =0 ; i < fil ; i++){
        for(int j=0 ; j < col ; j++){
            std :: cout << "Introduce el valor de la posicion [" << i <<"][" << j << "]" << std ::endl; 
            std ::cin >> *(*(p_matriz1 +i )+j) ; // que sería el p_matriz[i][j]
        }
    }

    // imprimimos la matriz 
    std::cout << "------Matriz 1 ------"<< std ::endl ; 
    for(int i=0; i< fil ; i++){
        for(int j=0; j<fil ; j++){
            std :: cout << *(*(p_matriz +i )+j);
        }
        std :: cout << std :: endl ; 
    }

    std::cout << "------Matriz 2 ------"<< std ::endl ; 
    for(int i=0; i< fil ; i++){
        for(int j=0; j<fil ; j++){
            std :: cout << *(*(p_matriz1 +i )+j);
        }
        std :: cout << std :: endl ; 
    }

    //---------------------------------------------------------------------------------------------------------------------------------//
    //ejercicio 9--> sumar dos matrices con punteros 
    sumarmatrix(p_matriz , p_matriz1 , fil , col);

    std::cout << "------Matriz sumada------"<< std ::endl ; 
    for(int i=0; i< fil ; i++){
        for(int j=0; j<fil ; j++){
            std :: cout << *(*(p_matriz1 +i )+j);
        }
        std :: cout << std :: endl ; 
    }

    //---------------------------------------------------------------------------------------------------------------------------------//
    //ejercicio 10-->  matriz traspuesta con punteros 

    std::cout << "------Matriz Traspuesta------"<< std ::endl ; 
    for(int i=0; i< fil ; i++){
        for(int j=0; j<fil ; j++){
            std :: cout << *(*(p_matriz +j )+i);
        }
        std :: cout << std :: endl ; 
    }


    return 0 ; 
}

//-------------Ejercicio4-------------//
//para intercambiar valores con punteros ponemos el tipo y * , le estaríamos pasando el valor de la variable 
void Intercambiar(float *p_num1 , float *p_num2 ){
    float aux =0; 

    aux = *p_num1; 
    *p_num1= *p_num2; 
    *p_num2 = aux; 

}

void sumarmatrix(int **p_matriz , int **p_matriz1 , int fil , int col){
    for(int i=0; i<fil ; i++){
        for(int j=0; j<col ; j++){
            *(*(p_matriz1 +i )+j) += *(*(p_matriz +i )+j);  

        }
    }

}
