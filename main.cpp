#include <iostream>
#include <string>
#include "Empresa.h"
#include "Nomina.h"
#include "Trabajador.h"
#include "TrabajadorSubcontratado.h"
#include "TrabajadorNoSubcontratado.h"

int main() {
    Nomina nomina("Nombre");
    Empresa empresa("Tech Solutions", "Calle Falsa 123", nomina);

    No_cont t1("Alice", 3000.0, 500.0);
    Cont t2("Bob", 3500.0, 1000.0);

    nomina.agrega_c(t2);
    nomina.agrega_n(t1);

    empresa.mostrar();

    return 0;
}
