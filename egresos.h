#include <iostream>
class Egresos{
private:
    float operacion;
    int servicios;
    float impuestos;
public:
    Egresos();
    Egresos(float op, int ser, float imp):
    operacion(op),servicios(ser),impuestos(imp){ };
   
    float get_operacion();
    int get_servicios();
    float get_impuestos();

    void set_operacion(float);
    void set_servicios(int);
    void set_impuestos(float);

    float suma_egresos();
};

Egresos::Egresos(){
    operacion=0.0;
    servicios=0;
    impuestos=0.0;
}

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
