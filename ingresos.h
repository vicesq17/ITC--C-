#include <iostream>
class Ingresos{
private:
    float cliente;
    float retorno;
    float bono;

public: 
    Ingresos();
    Ingresos(float cl, float re, float bo) : cliente(cl),retorno(re),bono(bo){};
    
    float get_cliente();
    float get_retorno();
    float get_bono();
    
    void set_cliente(float);
    void set_retorno(float);
    void set_bono(float);

    void operabilidad();


};

Ingresos::Ingresos(){
    cliente=0.0;
    retorno=0.0;
    bono=0.0;
}

float Ingresos::get_cliente(){
    return cliente;
}
float Ingresos::get_retorno(){
    return retorno;
}
float Ingresos::get_bono(){
    return bono;
}

void Ingresos::set_cliente(float cl){
    cliente=cl;

}
void Ingresos::set_retorno(float re){
    retorno=re;
}
void Ingresos::set_bono(float bo){
    bono=bo;
}

void Ingresos::operabilidad(){
    bono=cliente*retorno;

}

