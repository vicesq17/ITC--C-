Sistema de Gestión de Nóminas y Empresas
Este proyecto es un programa interactivo diseñado para gestionar nóminas, trabajadores y empresas. Permite realizar diversas operaciones a través de un menú sencillo.

Lógica del Programa
El programa sigue un enfoque basado en diseño orientado a objetos, dividido en las siguientes partes principales:

Clases Principales
Empresa

Representa a una empresa.
Contiene atributos relacionados con su nombre y detalles.
Administra la lista de nóminas asociadas.
Nomina

Maneja la información sobre los pagos y trabajadores registrados en una empresa.
Se asocia con trabajadores para formar la estructura de pago.
Trabajador

Clase base que define los atributos y métodos generales de un trabajador, como nombre, salario y tipo.
Subclases:
TrabajadorSubcontratado: Extiende la funcionalidad de Trabajador para empleados subcontratados.
TrabajadorNoSubcontratado: Extiende la funcionalidad para trabajadores internos.
Funcionalidad Principal
Crear Nómina

Permite registrar una nómina específica dentro de una empresa.
Se asigna un nombre único para identificar la nómina.
Añadir Trabajador

Agrega trabajadores a la nómina con sus datos específicos (tipo de trabajador, nombre, salario, etc.).
Crear Empresa

Registra una nueva empresa en el sistema, asociándola con sus respectivas nóminas.
Mostrar Detalles de la Empresa

Despliega toda la información registrada, incluyendo las nóminas y trabajadores.
Salir

Finaliza la ejecución del programa.
Flujo General
Al iniciar el programa, se presenta un menú con opciones numeradas para que el usuario seleccione la operación deseada.
Según la opción seleccionada, se solicitan los datos necesarios y se procesan internamente a través de las clases.
La información se organiza dinámicamente, permitiendo al usuario interactuar y visualizar los datos registrados.

# Implementación del diagrama UML

El diagrama UML presentado representa la estructura principal del programa, mostrando las relaciones entre las tres clases fundamentales: __Trabajador__, __Ingresos__ y __Egresos__. Este diseño sigue un enfoque modular que permite una alta cohesión y bajo acoplamiento entre los componentes. Estas son las clases que corresponden:

__Trabajador__: Se encarga de representar a los empleados de la empresa y sus datos básicos, vinculándolos directamente con los registros de ingresos y egresos.
__Ingresos__: Gestiona los datos relacionados con los ingresos de la empresa, como los bonos y retornos, permitiendo calcular la rentabilidad de manera precisa.
__Egresos__: Administra los gastos generales de la empresa, como costos de operación e impuestos, necesarios para analizar el balance financiero.

![Captura de pantalla 2024-11-19 a la(s) 11 53 27 p m](https://github.com/user-attachments/assets/cccc13d2-0cb3-4c60-a3d2-38fb7d785e82)

