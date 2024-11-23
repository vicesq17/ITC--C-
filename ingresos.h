#ifndef INGRESOS
#define INGRESOS
#include <iostream>
class Ingresos{
private:
    float cliente;
    float retorno;
    float bono;

public: 
    Ingresos();
    Ingresos(float cl, float re, float bo);
    float get_cliente();
    float get_retorno();
    float get_bono();
    void set_cliente(float);
    void set_retorno(float);
    void set_bono(float);
    void operabilidad();
};
#endif 
