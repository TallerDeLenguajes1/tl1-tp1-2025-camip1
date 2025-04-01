# tp1 - Perez Milagros Camila 
## Archivo .gitignore - Punto 2.2.a

### ¿Qué es un archivo .gitignore?

Un archivo  `.gitignore`  es un archivo de configuración utilizado en Git para indicar al sistema de control de versiones qué archivos o directorios deben ignorarse cuando los cambios se ponen en escena o se envían.

### ¿Por qué es conveniente usarlo?

Evita que los archivos innecesarios como los temporales, los generados por el sistema o los relacionados con la construcción abarroten tu repositorio. Mantener limpio tu repositorio facilita la colaboración y garantiza que sólo se haga un seguimiento de los archivos esenciales.

Crear un archivo `.gitignore` en el directorio raíz del repositorio permite indicarle a Git qué archivos y directorios ignorar cuando se realiza una confirmación.

### Configuración del archivo

Para crear un archivo `.gitignore` local:
- Crea un archivo de texto y asígnale el nombre **".gitignore"** (recuerda incluir el `.` al principio). 
- Edita este archivo según sea necesario. Cada nueva línea debe incluir un archivo o carpeta adicional que quieras que Git lo ignore.

## Punto 2.3.c

_Revise los archivos subidos en su repositorio de github. ¿Qué archivos ve? ¿Cuál cree que no hace falta que esté?_

En el repositorio hay un archivo .gitignore, README.md, tp1_1.c y un ejecutable. No seria necesario tener en el repositorio los ejecutables, es mejor almacenar el código fuente y permitir que otros usuarios lo compilen en su propia máquina.

## Punto 2.3.g

_Si resolvió correctamente los apartados 2 y 3 del punto anterior notará que el resultado es el mismo. ¿a qué se debe? ¿Qué obtiene en el
punto 4? ¿Es igual a los anteriores? ¿Por qué?_

En los apartados **2** y **3** obtenemos los mismos resultados pues un puntero es una variable que contiene la dirección de memoria de otra variable, en este caso de **variable**, por lo tanto al mostrar la dirección de memoria almacenada en el puntero obtenemos el mismo resultado que al obtener y mostrar la dirección de memoria de **variable** a partir del operador de direccion `&`.
Por otra parte, en el apartado **4** obtenemos una direccion de memoria diferente ya que esta es la dirección de memoria propia del puntero **punt**, distinta a la de la variable a la que apunta, donde se almacena como cualquier otra variable. 


[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)
