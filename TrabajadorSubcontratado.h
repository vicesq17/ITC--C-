
#ifndef TRABAJADOR_SUBCONTRATADO_H
#define TRABAJADOR_SUBCONTRATADO_H

#include "Trabajador.h"

class TrabajadorSubcontratado: public Trabajador {
    private:
        float comision;
    public:
        TrabajadorSubcontratado(){
            nombre = "";
            salario = 0.0;
            comision = 0.0;
        }
        TrabajadorSubcontratado(std::string nom, float sal, float com){
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
            return salario;
        }
};
#endif
