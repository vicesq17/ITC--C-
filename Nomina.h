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
        Trabajador TrabajadoresSubcontratados[100];
        Trabajador TrabajadoresNoSubcontratados[100];
        int cantidadSubcontratados;
        int cantidadNoSubcontratados;
    public:
        Nomina(){
            nombre = "";
            cantidadSubcontratados = 0;
            cantidadNoSubcontratados = 0;
        }   
        Nomina(std::string nom){
            nombre = nom;
            cantidadSubcontratados = 0;
            cantidadNoSubcontratados = 0;
        }

        void agregarSubcontratado(TrabajadorSubcontratado obr);
        void agregarNoSubcontratado(TrabajadorDirecto obr);

        void mostrarSubcontratados();
        void mostrarNoSubcontratados();
};

void Nomina::agregarSubcontratado(TrabajadorSubcontratado obr){
    if (cantidadSubcontratados < 100){
        TrabajadoresSubcontratados[cantidadSubcontratados] = obr;
        cantidadSubcontratados++;}
}

void Nomina::agregarNoSubcontratado(TrabajadorDirecto obr){
    if (cantidadNoSubcontratados < 100){
        TrabajadoresNoSubcontratados[cantidadNoSubcontratados] = obr;
        cantidadNoSubcontratados++;}
}

void Nomina::mostrarSubcontratados(){
    for(int i=0; i<cantidadSubcontratados; i++){
        std::cout << "Nombre: " << TrabajadoresSubcontratados[i].getNombre() << std::endl;}
}

void Nomina::mostrarNoSubcontratados(){
    for(int i=0; i<cantidadNoSubcontratados; i++){
        std::cout << "Nombre: " << TrabajadoresNoSubcontratados[i].getNombre() << std::endl;}
}
#endif
