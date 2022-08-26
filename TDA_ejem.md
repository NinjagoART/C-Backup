# Tipos Abstractos de Datos (TAD)

Conjunto de datos con entidad propia (identidad definida) y funciones primitivas (operaciones básicas) aplicables sobre esos datos

* Una abstracción es la simplificación de un objeto o de un proceso de la realidad en la que sólo se consideran los aspectos más relevantes.
* La abstracción se utiliza por los programadores para dar sencillez de expresión al algoritmo.
* La abstracción tiene dos puntos de vista en programación:  
  1. Funcional
  1. De datos
  
  Las dos propiedades de procedimientos mencionados anteriormente generalizacion y encapsulamiento se aplican a TADs  
TADs son generalizaciones de tipos primitivos de datos (int, double, char) del mismo modo que procedimientos son generalizaciones de operaciones primitivas

## Tipos de abastracción:
* Abstracción final:  
  1. Permite dotar a la aplicación de
operaciones que no están definidas en el
lenguaje en el que se está trabajando.
  1.  Se corresponden con el mecanismo del
subprograma (acción que se realiza y
argumentos a través de los cuales toma
información y devuelve resultados).
  1. Es irrelevante cómo realiza la acción y no
importa su tiempo de ejecución.

* Las abstracciones de datos (= Clase):
  1. Permiten utilizar nuevos tipos de datos que se definirán especificando sus posibles valores y las operaciones que los manipulan. 

Las dos propiedades de procedimientos mencionados anteriormente generalización y encapsulamiento se aplican a TADs:

**Ejemplo (Operaciones en Set)**
* Algunas de las operaciones que se pueden aplicar al TAD SET son:
  1. Makenull(A). Inicializa el conjunto A al conjunto vacio.
  1. Add elem(A,a). Agrega el elemento a al conjunto A.
  1. Union(A,B,C). Toma dos sets A y B y asigna la unión de A y B al conjunto C.
  1. Size(A). Toma un conjunto A y devuelve un entero cuyo valor es la cantidad de elementos de A.

## Tipos de Datos de TDA
- El TDA entero tiene como posibles valores de los datos el conjunto {-1, -2, ..., ∞} ∪ {0, 1, 2, ..., ∞}, y como operaciones la suma, la resta, la multiplicación y la división entera.
- El TDA real tiene como tipo el conjunto de los puntos de la recta real (Z+Q+I) y como operaciones la suma, la resta, la
multiplicación y la división. 
- El TDA Booleano tiene como conjunto de valores {True, False} y como operaciones las definidas por el álgebra de Boole (AND, OR, NOT).
- El TDA carácter tiene como tipo el conjunto de caracteres definido por un alfabeto dado y como operaciones todos los operadores relacionales (<, >, =, <>, ≥, ≤)

## Ejemplo de TDA:
* **TAD Cadena de caracteres**
  * Lista ordenada de caracteres
* **TAD Número complejo**
  * Número complejo, con parte real y parte imaginaria.
* **TAD Conjunto**:
  * Colección de elementos no repetidos
* *Algunos otros TAD*
  * TAD Pila 
  * TAD Cola
  * TAD Lista enlazada
  * TAD Árbol
  * TAD Grafo
