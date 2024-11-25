#ifndef TRABAJADOR_H
#define TRABAJADOR_H

#include <string>

class Trabajador {
protected:
    std::string nombre;
    float salario;

public:
    Trabajador();
    Trabajador(std::string, float);
    
    float get_salario();
    std::string get_nombre();

    void set_nombre(std::string);
    void set_salario(float);
};

Trabajador::Trabajador(){
    nombre = "";
    salario = 0.0;
}

Trabajador::Trabajador(std::string nom, float num){
    nombre = nom;
    salario = num;
}

std::string Trabajador:: get_nombre(){
    return nombre;
}

float Trabajador:: get_salario(){
    return salario;
}

void Trabajador:: set_nombre(std::string nom){
    nombre = nom;
}
void Trabajador:: set_salario(float num){
    salario = num;
}

#endif
