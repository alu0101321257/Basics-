#include <iostream>
#include "tablero.hpp"

void Tablero::moverArriba(int n){
    y += n;  

}
void Tablero::moverAbajo(int n  ){
    y -= n; 

}
void Tablero::moverDerecha(int n ){
    x+=n; 

} 
void Tablero::moverIzquierda(int n ){
    x-=n; 
}