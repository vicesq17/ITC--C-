#include 'Ingresos.h'

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
    bono = cliente*retorno;

}