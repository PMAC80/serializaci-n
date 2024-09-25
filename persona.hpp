#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <nlohmann/json.hpp>  // Incluir la librería JSON

using json = nlohmann::json;

class Persona {
private:
    std::string nombre;
    int edad;

public:
    Persona();
    Persona(const std::string& nombre, int edad);

    // Métodos para serializar y deserializar
    json serializar() const;
    void deserializar(const json& j);

    void mostrar() const;
};

#endif  // PERSONA_H
