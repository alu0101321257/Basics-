#include <iostream>
#include <stack> // Incluimos la biblioteca para usar pilas

using namespace std;

// Función para añadir elementos a la pila
void pushElement(stack<int>& pila, int elemento) {
    pila.push(elemento); // Añade el elemento a la pila
    cout << "Elemento " << elemento << " anadido a la pila." << endl;
}

// Función para quitar elementos de la pila
void popElement(stack<int>& pila) {
    if (!pila.empty()) { // Verifica si la pila no está vacía
        cout << "Elemento " << pila.top() << " quitado de la pila." << endl;
        pila.pop(); // Quita el elemento superior de la pila
    } else {
        cout << "La pila está vacia, no se puede quitar un elemento." << endl;
    }
}

// Función para mostrar los elementos de la pila
void showStack(stack<int> pila) { // Se pasa la pila por valor para no modificar la original
    cout << "Elementos en la pila: ";
    while (!pila.empty()) { // Mientras la pila no esté vacía
        cout << pila.top() << " "; // Muestra el elemento superior
        pila.pop(); // Quita el elemento superior de la pila
    }
    cout << endl;
}

int main() {
    stack<int> miPila; // Declara una pila de enteros

    // Añadiendo elementos a la pila
    pushElement(miPila, 10);
    pushElement(miPila, 20);
    pushElement(miPila, 30);

    // Mostrando los elementos de la pila
    showStack(miPila);

    // Quitando un elemento de la pila
    popElement(miPila);

    // Mostrando los elementos de la pila después de quitar un elemento
    showStack(miPila);

    return 0;
}
