#ifndef TRABAJADOR_H
#define TRABAJADOR_H

#include <string>

class Trabajador {
    protected:
        std::string nombre;
        float salario;
    public:
        Trabajador();
        Trabajador(std::string nom, float num);
        float getSalario();
        std::string getNombre();
        void setSalario(float num);
};

Trabajador::Trabajador(){
    nombre = "";
    salario = 0.0;
}

Trabajador::Trabajador(std::string nom, float num){
    nombre = nom;
    salario = num;
}

std::string Trabajador:: getNombre(){
    return nombre;
}

float Trabajador:: getSalario(){
    return salario;
}

void Trabajador:: setSalario(float num){
    salario = num;
}
#endif

