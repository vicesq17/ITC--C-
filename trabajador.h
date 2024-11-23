#ifndef TRABAJADOR
#define TRABAJADOR

#include <string>
using namespace std;
class Trabajador{

private:
    string nombre;
    float salario;
    int meses;

public:
    Trabajador();
    Trabajador(string nom, float sal, int mes);

    string get_nombre();
    float get_salario();
    int get_meses();

    void set_nombre(string);
    void set_salario(float);
    void set_meses(int);

};
#endif

