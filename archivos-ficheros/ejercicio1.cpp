#include<iostream>
#include<fstream> // biblioteca para leer y escribir en ficheros
#include<string> // include the header file for the string type

void escribirFichero();
void leerFichero();

int main(){

    leerFichero(); 

    return 0 ; 
}

void escribirFichero(){
    std::string nom_fichero; 
    std::ofstream archivo; 
    std::string contenido; 

    std::cout << "Introduzca el nombre del archivo de texto que quieres escribir: " << std ::endl ; 
    std::getline(std::cin,nom_fichero); 
    archivo.open(nom_fichero.c_str(), std::ios::out);

    if (archivo.fail()) {
        // Si no se pudo abrir el archivo, imprime un mensaje de error.
        std::cout << "El archivo no se pudo abrir" << std::endl;
        // Sale de la función para evitar intentos de escritura en un archivo no abierto.
        return;
    }

    std::cout << "Introduce la infromacion que desea anadir al fichero " << nom_fichero << std :: endl ; 
    std :: getline(std::cin , contenido); 

    archivo << contenido; 
    archivo.close(); 
    
}

void leerFichero(){
    std::string nom_fichero; 
    std::ifstream archivo; 
    std::string contenido_arch;

    std::cout << "Introduzca el nombre del archivo de texto que quieres leer: " << std ::endl ; 
    std::getline(std::cin,nom_fichero); 
    archivo.open(nom_fichero.c_str(), std::ios::in);

    if (archivo.fail()) {
        // Si no se pudo abrir el archivo, imprime un mensaje de error.
        std::cout << "El archivo no se pudo abrir" << std::endl;
        // Sale de la función para evitar intentos de escritura en un archivo no abierto.
        return;
    }
    std::cout << "------------------------------------------------------------------------------" << std ::endl ;
    std::cout << "EL CONTNIDO DEL ARCHIVO ES: " << nom_fichero << " EL SIGUINETE:" << std ::endl ; 
    while (!archivo.eof()) {
        // Utiliza getline para leer una línea completa del archivo y la almacena en texto_archivo.
        std::getline(archivo, contenido_arch);
        // Imprime la línea leída en la consola.
        std::cout << contenido_arch << std::endl;
    }
    std::cout << "------------------------------------------------------------------------------" << std ::endl ;

    archivo.close(); 

}