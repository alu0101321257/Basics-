#include <iostream>
#include <fstream>

// Función para abrir un archivo .dat
std::fstream abrirArchivo(const char* nombreArchivo) {
    // Se utiliza std::ios::in | std::ios::out | std::ios::app para permitir lectura,
    // escritura y añadir al final del archivo.
    std::fstream archivo(nombreArchivo, std::ios::in | std::ios::out | std::ios::app);

    // Verificar si la apertura del archivo fue exitosa.
    if (!archivo.is_open()) {
        std::cerr << "Error al abrir el archivo." << std::endl;
    }

    // Devolver el objeto std::fstream que representa el archivo.
    return archivo;
}

// Función para añadir información al archivo
void agregarInformacion(std::fstream& archivo, const std::string& informacion) {
    // Escribir la información en el archivo, seguido por un salto de línea.
    archivo << informacion << std::endl;
}

int main() {
    const char* nombreArchivo = "archivo.dat";

    // Abrir el archivo utilizando la función abrirArchivo.
    std::fstream archivo = abrirArchivo(nombreArchivo);

    // Verificar si el archivo está abierto correctamente.
    if (archivo.is_open()) {
        // Añadir información al archivo llamando a la función agregarInformacion.
        agregarInformacion(archivo, "Primera línea de información");
        agregarInformacion(archivo, "Segunda línea de información");

        // Cerrar el archivo después de añadir la información.
        archivo.close();

        // Mensaje indicando que la información se ha agregado correctamente.
        std::cout << "Información agregada correctamente al archivo " << nombreArchivo << std::endl;
    }

    // Devolver 0 para indicar una ejecución sin errores.
    return 0;
}
