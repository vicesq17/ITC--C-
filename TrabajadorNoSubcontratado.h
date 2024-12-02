#ifndef TRABAJADOR_NO_SUBCONTRATADO_H
#define TRABAJADOR_NO_SUBCONTRATADO_H

#include "Trabajador.h"
#include <string>

class TrabajadorDirecto: public Trabajador{
private:
    float extras;
public:
    TrabajadorDirecto(){
        nombre = "";
        salario = 0.0;
        extras = 0.0;
    }
    TrabajadorDirecto(std::string nom, float sal, float hor){
        nombre = nom;
        salario = sal;
        extras = hor;
    }

    float getHoras(){
        return extras;
    }
    void setHoras(float num){
        extras = num;
    }

    float calcula(){
        salario = salario*extras;
        return salario;
    }
};

#endif
