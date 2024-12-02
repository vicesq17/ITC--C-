Sistema de Gestión de Nóminas y Empresas
Este programa organiza empresas, nóminas y trabajadores mediante un diseño orientado a objetos.

Clases Principales
Empresa: Administra los datos de la empresa y contiene una lista de nóminas.
Nomina: Gestiona trabajadores y calcula los salarios registrados.
Trabajador: Clase base para empleados con atributos generales como nombre y salario.
TrabajadorSubcontratado: Extiende Trabajador para empleados externos con características específicas.
TrabajadorNoSubcontratado: Extiende Trabajador para empleados internos con beneficios adicionales.
# Clases y Relaciones
#Empresa

Relación: Una empresa contiene múltiples nóminas.
Rol: Administra los datos generales y la lista de nóminas asociadas.
Nomina

Relación: Una nómina contiene una lista de trabajadores.
Rol: Gestiona los salarios y trabajadores asociados a la empresa.
Trabajador (Clase Base)

Relación: Es la clase base para todas las subclases de trabajadores.

Rol: Define atributos comunes como nombre y salario.

#Subclases:

TrabajadorSubcontratado: Representa empleados externos con características específicas, como tarifas por hora.
TrabajadorNoSubcontratado: Representa empleados internos con beneficios adicionales.
Relaciones Generales
Composición:
Una Empresa tiene una lista de Nominas.
Una Nomina tiene una lista de Trabajadores.
Herencia:
Trabajador es la clase base y tiene dos subclases: TrabajadorSubcontratado y TrabajadorNoSubcontratado.



# Implementación del diagrama UML

![Uploading Captura de Pantalla 2024-12-01 a la(s) 23.52.55.png…]()


![Captura de pantalla 2024-11-19 a la(s) 11 53 27 p m](https://github.com/user-attachments/assets/cccc13d2-0cb3-4c60-a3d2-38fb7d785e82)

