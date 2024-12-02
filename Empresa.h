#ifndef EMPRESA_H
#define EMPRESA_H

#include <string>
#include <iostream>
#include "Nomina.h"

class Empresa {
private:
    std::string nombre;
    std::string direccion;
    Nomina listaEmpleados;

public:
    Empresa(){
        nombre = "";
        direccion = "";
        listaEmpleados = Nomina();
    }
    
    Empresa(std::string nom, std::string dir, Nomina nomina){
        nombre = nom;
        direccion = dir;
        listaEmpleados = nomina;
    }

    std::string getNombre(){
        return nombre;
    }
    std::string getDireccion(){
        return direccion;
    }

    Nomina getNomina() {
        return listaEmpleados;
    }

    void mostrarDetalles(){
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Direccion: " << direccion << std::endl;
        listaEmpleados.mostrarSubcontratados();
        listaEmpleados.mostrarNoSubcontratados();
    }
};
#endif

