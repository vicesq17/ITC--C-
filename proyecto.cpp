#include<iostream>
#include<string>
#include"ingresos.h"
#include"egresos.h"
#include"trabajador.h"
using namespace std;
int main(){

    Ingresos ing(123.456, 654.321, 567.890);
    cout<<"Ingresos:" << endl;
    cout<<"Dinero por cliente: "<<ing.get_cliente()<<endl;
    cout<<"Retorno de inversion: "<<ing.get_retorno()<<endl;
    cout<<"Bono de ingreso: "<<ing.get_bono()<<endl;
    
    ing.operabilidad();
    cout<<"Operabilidad neta" << ing.get_bono()<< endl;


    Egresos egr(123.456, 789, 345.678);
    cout<<"Egresos"<<endl;
    cout<<"Costo de operacion: "<<egr.get_operacion()<<endl;
    cout<<"Pago de servicios: "<<egr.get_servicios()<<endl;
    cout<<"Impuestos: "<<egr.get_impuestos()<<endl;
    cout<<"Suma de egresos: "<<egr.suma_egresos()<<endl;

    Trabajador tra("Jose", 123.456, 7);
    cout<<"Datos del trabajador"<<endl;
    cout<<"Nombre del trabajador: "<<tra.get_nombre()<<endl;
    cout<<"Salario del trabajador: "<<tra.get_salario()<<endl;
    cout<<"Meses que ha trabajado: "<<tra.get_meses()<<endl;

return 0;
}


