#ifndef NOMINA_H
#define NOMINA_H

#include "TrabajadorNoSubcontratado.h"
#include "TrabajadorSubcontratado.h"
#include "Trabajador.h"
#include <iostream>
#include <string>

class Nomina {
private:
    std::string nombre;
    Trabajador obreroc[100];
    Trabajador obreron[100];
    int max_c;
    int max_n;

public:

    Nomina(){
        nombre = "";
        max_c = 0;
        max_n = 0;
    }   
    Nomina(std::string nom){
        nombre = nom;
        max_c = 0;
        max_n = 0;
    }

    void agrega_c(Cont obr);
    void agrega_n(No_cont obr);

    void mostrar_c();
    void mostrar_n();
};

void Nomina:: agrega_c(Cont obr){
    if (max_c < 100){
        obreroc[max_c] = obr;
        max_c++;
    }
}

void Nomina:: agrega_n(No_cont obr){
    if (max_n < 100){
        obreron[max_n] = obr;
        max_n++;
    }
}

void Nomina:: mostrar_c(){
    for(int i=0; i<max_c; i++){
        std::cout << "Nombre: " << obreroc[i].get_nombre() << std::endl;
    }
}

void Nomina:: mostrar_n(){
    for(int i=0; i<max_n; i++){
        std::cout << "Nombre: " << obreron[i].get_nombre() << std::endl;
    }
}

#endif
