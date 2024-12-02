#include <iostream>
#include <string>
#include "Empresa.h"
#include "Nomina.h"
#include "Trabajador.h"
#include "TrabajadorSubcontratado.h"
#include "TrabajadorNoSubcontratado.h"

void Menu() {
    std::cout << "Sigue los siguientes pasos en orden para crear una empresa!\nIngresa el num. de operación:\n"
         << "1. Crea una nueva empresa\n"
         << "2. Añade un trabajador al sistema\n"
         << "3. Mostrar detalles de la empresa\n"
         << "4. Salir" << std::endl;
}

int main() {
    Empresa empresas[100];
    Menu();
    std::string ent;
    std::cin >> ent;
    int nEmps = 0;
    int nNoms = 0;
    do {

        if (ent=="1") {
            std::string nomEmp;
            std::cout << "Ingresa el nombre de la empresa " << std::endl;
            std::cin >> nomEmp;
            std::string dirEmp;
            std::cout << "Ingresa la dirección de la empresa " << std::endl;
            std::cin >> dirEmp;
            std::string nomnom;
            std::cout << "Ingresa el nombre de esta nómina " << nomnom << std::endl;
            std::cin >> nomnom;
            Nomina nominaaa(nomnom);
            nEmps = nEmps + 1;
            empresas[nEmps] = Empresa(nomEmp, dirEmp, nominaaa);
            std::cin >> ent;
        }
        else if (ent=="2") {
            bool tipoT;
            std::cout << "Es subcontratado (Ingresa 0) o trabajador directo (Ingresa 1)?" << std::endl;
            std::cin >> tipoT;
            std::string nomTra;
            std::cout << "Ingresa un solo nombre (SIN ESPACIOS NI CARACTERES EXTRAÑOS) para tu trabajador" << std::endl;
            std::cin >> nomTra;
            int nEmpTra;
            std::cout << "Ingresa el número de empresa para " << nomTra << std::endl;
            std::cin >> nEmpTra;
            float salTra;
            std::cout << "Ingresa el salario para " << nomTra << std::endl;
            std::cin >> salTra;
            if (tipoT) {
                float extHrs;
                std::cout << "Ingresa las horas extras que trabajará " << nomTra << std::endl;
                std::cin >> extHrs;
                empresas[nEmpTra].getNomina().agregarNoSubcontratado(TrabajadorDirecto(nomTra, salTra, extHrs));
            }
            else {
                float comTra;
                std::cout << "Ingresa la comisión determinada para " << nomTra << std::endl;
                std::cin >> comTra;
                empresas[nEmpTra].getNomina().agregarSubcontratado(TrabajadorSubcontratado(nomTra, salTra, comTra));
            };
            std::cin >> ent;
        }
        else if (ent=="3") {
            int NempMD;
            std::cout << "Ingresa el número de la empresa para consultar sus detalles "<<std::endl;
            std::cin >> NempMD;

            empresas[NempMD].mostrarDetalles();
            std::cin >> ent;
        }
    } while (ent != "4");
    return 0;
}
