#ifndef TRABAJADOR_NO_SUBCONTRATADO_H
#define TRABAJADOR_NO_SUBCONTRATADO_H

#include "Trabajador.h"
#include <string>

class No_cont : public Trabajador {
private:
    float extras;

public:
    No_cont(){
        nombre = "";
        salario = 0.0;
        extras = 0.0;
    }
    No_cont(std::string nom, float sal, float hor){
        nombre = nom;
        salario = sal;
        extras = hor;
    }

    float get_horas(){
        return extras;
    }
    void set_horas(float num){
        extras = num;
    }

    float calcula(){
        salario = salario*extras;
    }
};

#endif
