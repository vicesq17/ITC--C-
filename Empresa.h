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

    std::string get_nombre(){
        return nombre;
    }
    std::string get_direccion(){
        return direccion;
    }
    
    void set_nombre(std::string nom){
        nombre = nom;
    }
    void set_direccion(std::string dir){
        direccion = dir;
    }

    void mostrar(){
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Direccion: " << direccion << std::endl;
        listaEmpleados.mostrar_c();
        listaEmpleados.mostrar_n();
    }

};

#endif
