#include <iostream>


int main(){

    int m1[10][10];
    int col;
    int fil;

    std :: cout << "Introduce el numero de filas: " << std :: endl;
    std :: cin >> fil;
    std :: cout << "Introduce el numero de columnas: " << std :: endl;
    std :: cin >> col;

    
    //************Rellenar una matriz con la infromacion del usuario************//
    for(int i = 0; i < fil ; i++){
        for(int j = 0 ; j < col ; j++){
            std :: cout << "dame el valor de la posicion ["<<i<<"]["<<j<<"]"<< std :: endl;
            std :: cin >> m1[i][j]; 
        }
    }

    //************Imprimir la matriz************//
    std :: cout << std::endl;
    std:: cout << "La matriz es: " << std :: endl;
    for(int i = 0; i < fil ; i++){
        for(int j = 0 ; j < col ; j++){
            std :: cout << m1[i][j] << " ";
        }
        std :: cout << std :: endl;
    }

    //************Imprimir la diagonal principal************//
    std::cout << std:: endl; 
    std :: cout << "La diagonal principal es: " << std :: endl;
    for (int i = 0; i < fil; i++){
        for (int j = 0; j < col; j++){
            if (i == j){
                std :: cout << m1[i][j] << " ";
            }
        }
    }

    //************Pasar el contenido de una matriz m1 a una matriz m2 ************//
    int m2[2][2]= {{1,2},{3,4}};
    int m3[2][2];

    for(int i =0 ; i<2; i++){
        for(int j=0 ; j< 2 ; j++){
            m3[i][j] = m2[j][i];
        }
        std::cout << std::endl;
    }

    std::cout << "Imprimiendo matriz de copia" << std::endl;
    for(int i =0 ; i<2; i++){
        for(int j=0 ; j< 2 ; j++){
            std::cout << m3[i][j] << " ";
        }
        std::cout << std::endl;
    }

    //************Realizar la matriz traspuesta************//
    std :: cout<<"Realizar la matriz traspuesta" << std::endl;
    for(int i =0 ; i<2; i++){
        for(int j=0 ; j< 2 ; j++){
            std::cout << m2[j][i] << " ";
        }
        std::cout << std::endl;
    }

    //************Realizar la suma de matrices************//
    std :: cout<<"Realizar suma de matrices" << std:: endl;
    int m4[2][2]= {{2,2},{2,2}};
    
    for(int i =0 ; i<2; i++){
        for(int j=0 ; j< 2 ; j++){
            std:: cout << m4[i][j] + m2[i][j] << " ";
        }
        std::cout << std::endl;
    }

    //************Determinar si una matriz es simetrica ************//
    // Una matriz es simetrica si es cuadrada y si es igual a su traspuesta //

    std :: cout << "Determinar si una matriz es simetrica" << std :: endl;
    char flag='F';
    //comprobamos si es cuadrada (columnas= filas)
    if (col == fil){
        for(int i =0 ; i<fil; i++){
            for(int j=0 ; j< col ; j++){
                if(m1[i][j] == m1[j][i]){
                    flag = 'V';
                }
            }
        }
    }

    if (flag == 'V'){
        std::cout << "La matriz es simetrica" << std::endl;
    }
    else{
        std::cout << "La matriz no es simetrica" << std::endl;
    }
   

    return 0;
}