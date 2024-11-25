#ifndef TRABAJADOR_SUBCONTRATADO_H
#define TRABAJADOR_SUBCONTRATADO_H

#include "Trabajador.h"

class Cont: public Trabajador {
private:
    float comision;

public:
    Cont(){
        nombre = "";
        salario = 0.0;
        comision = 0.0;
    }
    Cont(std::string nom, float sal, float com){
        nombre = nom;
        salario = sal;
        comision = com;
    }

    float get_comision(){
        return comision;
    }

    void set_comision(float num){
        comision = num;
    }

    float calcula(){
        salario = salario + comision;
    }

};

#endif
