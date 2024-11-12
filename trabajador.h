#include <string>
using namespace std;
class Trabajador{

private:
    string nombre;
    float salario;
    int meses;

public:
    Trabajador();
    Trabajador(string nom, float sal, int mes):
    nombre(nom),salario(sal),meses(mes){};

    string get_nombre();
    float get_salario();
    int get_meses();

    void set_nombre(string);
    void set_salario(float);
    void set_meses(int);

};

Trabajador::Trabajador(){
    nombre="";
    salario=0.0;
    meses=0;
}

string Trabajador::get_nombre(){
    return nombre;
}
float Trabajador::get_salario(){
    return salario;
}
int Trabajador::get_meses(){
    return meses;
}

void Trabajador::set_nombre(string nom){
    nombre=nom;
}
void Trabajador::set_salario(float sal){
    salario=sal;
}
void Trabajador::set_meses(int mes){
    meses=mes;
}

