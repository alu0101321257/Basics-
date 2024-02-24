#include<iostream>
#include<fstream> // biblioteca para leer y escribir en ficheros 

void escribirFichero(); 
void leerFichero();
void anadirFichero(); 
int main(){
    //escribirFichero();
    leerFichero(); 
    anadirFichero();
    leerFichero();


    return 0 ; 
}

// Definición de la función escribirFichero
void escribirFichero() {
    // Crea un objeto ofstream para la escritura de archivos.
    std::ofstream archivo;

    // Intenta abrir el archivo "prueba.txt" en modo escritura.
    // ios::out abre el archivo para salida (escritura), sobrescribiendo el contenido existente.
    //se guardara el fichero en la misma carpeta donde se encuentre el ejecutable 
    archivo.open("prueba.txt", std::ios::out);
    
    //si queremos que se guarde en otra carpeta:
    //archivo.open("C:\Users\Javi\Desktop\pruebas\archivos-ficheros\prueba.txt", std::ios::out);

    // si queremos que el usuario introduzca el nombre del archivo 
    // std::string nombre ; 
    //std::cout << "Introduzca el nombre del archivo: " << std ::endl ; 
    //std::getline(std::cin,nombre); 
    //archivo.open(nombre.c_str(), std::ios::out);

    // Comprueba si hubo algún problema al abrir el archivo.
    if (archivo.fail()) {
        // Si no se pudo abrir el archivo, imprime un mensaje de error.
        std::cout << "El archivo no se pudo abrir" << std::endl;
        // Sale de la función para evitar intentos de escritura en un archivo no abierto.
        return;
    }

    // Escribe la cadena "hola mundo" en el archivo.
    // El operador << se utiliza para enviar la cadena al flujo del archivo, similar a como se usa con cout.
    archivo << "Hola mundo";
    archivo << "Escrito por javier lorenzo Ramallo"; 

    //Si queremos que el usuario nos introduzca la infromacion del archivo 
    //std::string contenido; 
    //std::cout << "Introduzca la infromacion del archivo " << nombre << std ::endl ; 
    //std::getline(std::cin, contenido); 
    //archivo << contendio ;  

    // Cierra el archivo.
    // Es importante cerrar el archivo para liberar el recurso y asegurar que todos los datos se hayan escrito correctamente.
    archivo.close();
}

// Definición de la función leerFichero
void leerFichero() {
    // Crea un objeto ifstream para la lectura de archivos.
    std::ifstream archivo;
    // Crea una variable de tipo string para almacenar el texto leído del archivo.
    std::string texto_archivo;

    // Intenta abrir el archivo "Holamundo.txt" en modo lectura.
    // ios::in abre el archivo para entrada (lectura).
    archivo.open("Holamundo.txt", std::ios::in);

    // Comprueba si hubo algún problema al abrir el archivo.
    if (archivo.fail()) {
        // Si no se pudo abrir el archivo, imprime un mensaje de error.
        std::cout << "El archivo no se pudo abrir" << std::endl;
        // Sale de la función para evitar intentos de lectura en un archivo no abierto.
        return;
    }

    // Lee el archivo hasta alcanzar el final del mismo.
    while (!archivo.eof()) {
        // Utiliza getline para leer una línea completa del archivo y la almacena en texto_archivo.
        std::getline(archivo, texto_archivo);
        // Imprime la línea leída en la consola.
        std::cout << texto_archivo << std::endl;
    }

    // Cierra el archivo.
    // Es importante cerrar el archivo para liberar el recurso.
    archivo.close();
}

//añadir contenido a un fichero 
void anadirFichero(){

    std::ofstream archivo; 
    std::string contenido ; 
    //Para modificar un fichero añadiendo infromación hay que poner en vez de OUT o IN APP en la siguinete línea 
    archivo.open("holamundo.txt",std::ios::app ); 
    if (archivo.fail()) {
        std::cout << "El archivo no se pudo abrir" << std::endl;
        return;
    }

    std::cout << "Introduce lo que quieras anadir al fichero: " << std ::endl ;
    std :: getline(std::cin,contenido); 

    archivo << contenido << std::endl ; 
    archivo.close();   

}
