#include "persona.hpp"
#include <iostream>
#include <fstream>

int main() {
    // Crear un objeto de Persona
    Persona persona("Juan", 25);

    // Serializar el objeto a JSON y guardarlo en un archivo
    json j = persona.serializar();
    std::ofstream archivoSalida("persona.json");
    archivoSalida << j.dump(4);  // Guardar el JSON con formato legible
    archivoSalida.close();

    std::cout << "Objeto serializado y guardado en persona.json\n";

    // Leer el archivo JSON y deserializarlo en un nuevo objeto
    std::ifstream archivoEntrada("persona.json");
    json jLeido;
    archivoEntrada >> jLeido;
    archivoEntrada.close();

    Persona personaLeida;
    personaLeida.deserializar(jLeido);

    std::cout << "Objeto deserializado:\n";
    personaLeida.mostrar();

    return 0;
}
