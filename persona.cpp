#include "persona.hpp"
#include <iostream>

// Constructor por defecto
Persona::Persona() : nombre(""), edad(0) {}

// Constructor con parámetros
Persona::Persona(const std::string& nombre, int edad) : nombre(nombre), edad(edad) {}

// Serializar el objeto Persona a JSON
json Persona::serializar() const {
    json j;
    j["nombre"] = nombre;
    j["edad"] = edad;
    return j;
}

// Deserializar desde JSON y asignar los valores al objeto Persona
void Persona::deserializar(const json& j) {
    nombre = j.at("nombre").get<std::string>();
    edad = j.at("edad").get<int>();
}

// Mostrar los datos del objeto Persona
void Persona::mostrar() const {
    std::cout << "Nombre: " << nombre << ", Edad: " << edad << std::endl;
}
