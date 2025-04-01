#include<stdio.h>
int cuadradoNum(int a);
void cuadradoSinRetorno(int a);
void datosVariable(int *a);
void invertir(int *a, int *b);
void orden(int *a, int *b);

int main(){
    int var1=2, var2=3, x=9, y=7,  cuadrado;

// CALCULAR EL CUADRADO DE UN NUMERO   
    cuadrado=cuadradoNum(var1);  
    printf("\nEl cuadrado de la variable1= %d es %d\n", var1, cuadrado);
    cuadrado=cuadradoNum(var2);
    printf("\nEl cuadrado de la variable2= %d es %d\n", var2, cuadrado);
    
    cuadradoSinRetorno(var1);
    cuadradoSinRetorno(var2);

// AL RECIBIR UNA VARIABLE MOSTRAR CONTENIDO Y DIRECCION DE MEMORIA
    datosVariable(&var1);
    datosVariable(&var2);

// INVERTIR VALORES ENTRE a Y b
    invertir(&var1,&var2);
    printf("\nLos contenidos de las variables 1 y 2 invertidos entre si son:  %d y %d respectivamente\n", var1,var2);
// ORDENAR VALORES, COLOCAR EN a EL MENOR VALOR Y EN b EL MAYOR    
    orden(&var1,&var2);
    printf("\nLos contenidos de las variables 1 y 2 ordenadas de menor a mayor son:  %d y %d respectivamente\n", var1,var2);
    return 0;
}

//a) Haga una función que devuelva el cuadrado de un número
int cuadradoNum(int a){
    return a*a;
}


//b) Haga la función anterior, pero devolviendo un tipo void
void cuadradoSinRetorno(int a){
    int cuadrado;
    cuadrado=a*a;
    printf("\nEl cuadrado de la variable= %d es %d (con funcion tipo void)\n", a, cuadrado);
    return;
}


//c) Al recibir una variable muestre por pantalla la dirección y el contenido de la variable
void datosVariable(int *a){
    printf("\nEl contenido de la variable es %d\n", *a);
    printf("\nLa direccion de memoria de la variable es %d\n", a);
    return;
}

/*d) Dado dos parámetros de entrada, deberá invertir los valores entre ambos.
void Invertir(a,b) deberá devolver el valor de a en la
variable b, y el valor de b el valor de a
*/
void invertir(int *a, int *b){
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
    return;
}


/*e) Dado dos parámetros de entrada, deberá devolverlos de forma ordenada, en el primer parámetro el menor y en el segundo el mayor.
void orden(a,b) deberá devolver en el valor de a el valor más
chico, y en el valor de b el valor más grande*/
void orden(int *a, int *b){
    int aux;
    if (*b<*a)
    {
        aux=*a;
        *a=*b;
        *b=aux;
    }
    return;
}

//f) Utilice las funciones anteriores para leer pares de valores e imprimirlos por pantalla.
