Gestión de Nóminas Empresariales
Este proyecto implementa un sistema para la gestión de empleados y nóminas dentro de una empresa, incluyendo la distinción entre trabajadores subcontratados y no subcontratados. El diseño del sistema está representado por el diagrama UML incluido.
Estructura del Proyecto
Clases Principales
Trabajador (Clase Base)
Clase genérica que representa a cualquier tipo de empleado.
Atributos:
nombre: Nombre del trabajador.
salario: Salario base del trabajador.
Métodos:
Métodos de acceso y modificación: getNombre(), setNombre(), getSalario(), setSalario().
TrabajadorSubcontratado (Hereda de Trabajador)
Representa a empleados que trabajan bajo un esquema de subcontratación.
Atributos Adicionales:
comision: Comisión del trabajador.
Métodos:
Métodos de acceso y modificación de la comisión: getComision(), setComision().
calcula(): Calcula el salario considerando comisiones.
TrabajadorNoSubcontratado (Hereda de Trabajador)
Representa a empleados contratados directamente por la empresa.
Atributos Adicionales:
extras: Cantidad de horas extra trabajadas.
Métodos:
Métodos de acceso y modificación de las horas extras: getHoras(), setHoras().
calcula(): Calcula el salario incluyendo horas extras.
Nomina
Clase que agrupa y gestiona a los empleados de la empresa.
Atributos:
TrabajadoresSubcontratados: Lista de objetos de tipo TrabajadorSubcontratado.
TrabajadoresNoSubcontratados: Lista de objetos de tipo TrabajadorNoSubcontratado.
Métodos:
agregarSubcontratado(TrabajadorSubcontratado): Agrega un trabajador subcontratado.
agregarNoSubcontratado(TrabajadorNoSubcontratado): Agrega un trabajador no subcontratado.
Métodos para mostrar listas de empleados.
Empresa
Representa la empresa y su relación con la nómina.
Atributos:
nombre: Nombre de la empresa.
direccion: Dirección de la empresa.
Nomina: Relación con una instancia de la clase Nomina.
Métodos:
Métodos de acceso para los datos de la empresa: getNombre(), getDireccion().
mostrarDetalles(): Muestra la información de la empresa y su nómina.
Diagrama UML
El diseño completo de las clases y sus relaciones se detalla en el archivo PV.jpg, incluido en este repositorio.
Archivos del Proyecto
Empresa.h: Define la clase Empresa.
Nomina.h: Define la clase Nomina.
Trabajador.h: Define la clase base Trabajador.
TrabajadorSubcontratado.h: Define la subclase TrabajadorSubcontratado.
TrabajadorNoSubcontratado.h: Define la subclase TrabajadorNoSubcontratado.
main.cpp: Contiene la lógica principal del programa.
PV.jpg: Diagrama UML que detalla la relación entre las clases.





# Implementación del diagrama UML

<img width="681" alt="Captura de Pantalla 2024-12-01 a la(s) 23 58 53" src="https://github.com/user-attachments/assets/c5bbcaad-2cd2-4f46-9fca-103352639c3e">

