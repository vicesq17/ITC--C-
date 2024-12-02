Gestión de Nóminas Empresariales
Este repositorio implementa un sistema para la gestión de empleados y nóminas dentro de una empresa. El sistema incluye la distinción entre trabajadores subcontratados y no subcontratados. Su diseño está representado en un diagrama UML incluido en este repositorio.

Estructura del Proyecto
Clases Principales
1. Trabajador (Clase Base)
Descripción: Clase genérica que representa a cualquier tipo de empleado.
Atributos:
nombre (string): Nombre del trabajador.
salario (float): Salario base del trabajador.
Métodos:
getNombre(), setNombre(): Métodos para acceder y modificar el nombre.
getSalario(), setSalario(): Métodos para acceder y modificar el salario.
2. TrabajadorSubcontratado (Hereda de Trabajador)
Descripción: Representa a empleados que trabajan bajo un esquema de subcontratación.
Atributos Adicionales:
comision (float): Comisión del trabajador.
Métodos:
getComision(), setComision(): Métodos para acceder y modificar la comisión.
calcula(): Calcula el salario considerando comisiones.
3. TrabajadorNoSubcontratado (Hereda de Trabajador)
Descripción: Representa a empleados contratados directamente por la empresa.
Atributos Adicionales:
extras (float): Cantidad de horas extra trabajadas.
Métodos:
getHoras(), setHoras(): Métodos para acceder y modificar las horas extras.
calcula(): Calcula el salario incluyendo horas extras.
4. Nomina
Descripción: Clase que agrupa y gestiona a los empleados de la empresa.
Atributos:
TrabajadoresSubcontratados (array): Lista de trabajadores subcontratados.
TrabajadoresNoSubcontratados (array): Lista de trabajadores no subcontratados.
Métodos:
agregarSubcontratado(TrabajadorSubcontratado): Agrega un trabajador subcontratado.
agregarNoSubcontratado(TrabajadorNoSubcontratado): Agrega un trabajador no subcontratado.
Métodos para mostrar las listas de empleados.
5. Empresa
Descripción: Representa la empresa y su relación con la nómina.
Atributos:
nombre (string): Nombre de la empresa.
direccion (string): Dirección de la empresa.
Nomina: Relación con una instancia de la clase Nomina.
Métodos:
getNombre(), getDireccion(): Métodos para acceder al nombre y la dirección.
mostrarDetalles(): Muestra la información de la empresa y su nómina.
Diagrama UML
El diseño completo de las clases y sus relaciones se detalla en el archivo PV.jpg, que se encuentra incluido en este repositorio.

Archivos del Proyecto
Empresa.h: Define la clase Empresa.
Nomina.h: Define la clase Nomina.
Trabajador.h: Define la clase base Trabajador.
TrabajadorSubcontratado.h: Define la subclase TrabajadorSubcontratado.
TrabajadorNoSubcontratado.h: Define la subclase TrabajadorNoSubcontratado.
main.cpp: Contiene la lógica principal del programa.
PV.jpg: Diagrama UML que detalla las relaciones entre las clases.





# Implementación del diagrama UML


<img width="756" alt="Captura de Pantalla 2024-12-02 a la(s) 0 37 58" src="https://github.com/user-attachments/assets/b99496b0-90cf-46da-81b6-366a3714fd4e">

