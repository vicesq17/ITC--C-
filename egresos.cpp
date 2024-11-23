#include "Egresos.h"
Egresos::Egresos(){
    operacion=0.0;
    servicios=0;
    impuestos=0.0;
}

Egresos::Egresos(float op, int ser, float imp) : operacion(op),servicios(ser),impuestos(imp){ };

float Egresos::get_operacion(){
    return operacion;
}

int Egresos::get_servicios(){
    return servicios;
}

float Egresos::get_impuestos(){
    return impuestos;
}

void Egresos::set_operacion(float op){
    operacion=op;
}

void Egresos::set_servicios(int ser){
    servicios=ser;
}

void Egresos::set_impuestos(float imp){
    impuestos=imp;
}

float Egresos::suma_egresos(){
   return operacion+servicios+impuestos;
}