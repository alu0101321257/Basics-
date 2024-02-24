#include <iostream>
#include <queue> // Incluimos la librería que nos permite usar colas

/*
  Una cola es una estructura de datos que sigue el principio FIFO (First In, First Out),
  lo que significa que el primer elemento en ser añadido será el primero en ser removido.
  Las operaciones principales en una cola incluyen:
  - Enqueue (Añadir): Añade un elemento al final de la cola.
  - Dequeue (Eliminar): Elimina el elemento al frente de la cola.
  - Front (Frente): Accede al primer elemento de la cola sin eliminarlo.
  Las colas son útiles en situaciones donde necesitamos manejar datos en el orden exacto
  en que fueron recibidos, como en la administración de procesos en sistemas operativos,
  operaciones de impresión, etc.
*/

// Función para añadir elementos a la cola
void enqueue(std::queue<int>& q, int elemento) {
    q.push(elemento); // Añade el elemento al final de la cola
    std::cout << "Elemento " << elemento << " añadido a la cola." << std::endl;
}

// Función para eliminar elementos de la cola
void dequeue(std::queue<int>& q) {
    if (!q.empty()) { // Verifica si la cola no está vacía
        std::cout << "Elemento " << q.front() << " eliminado de la cola." << std::endl;
        q.pop(); // Elimina el elemento al frente de la cola
    } else {
        std::cout << "La cola está vacía, no se puede eliminar un elemento." << std::endl;
    }
}

// Función para mostrar los elementos de la cola
void showQueue(std::queue<int> q) { // Se pasa la cola por valor para no modificar la original
    std::cout << "Elementos en la cola: ";
    while (!q.empty()) { // Mientras la cola no esté vacía
        std::cout << q.front() << " "; // Muestra el elemento al frente
        q.pop(); // Elimina el elemento al frente para avanzar al siguiente
    }
    std::cout << std::endl;
}

int main() {
    std::queue<int> miCola; // Declara una cola de enteros

    // Añadiendo elementos a la cola
    enqueue(miCola, 10);
    enqueue(miCola, 20);
    enqueue(miCola, 30);

    // Mostrando los elementos de la cola
    showQueue(miCola);

    // Eliminando un elemento de la cola
    dequeue(miCola);

    // Mostrando los elementos de la cola después de eliminar
    showQueue(miCola);

    return 0;
}
