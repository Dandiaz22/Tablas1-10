/* 
Date 07/03/2023
Author Daniel Alberto Diaz Balbuena
 */


 /*
Incluimos la librería standard imput-output para poder meter datos y nos devuelva en pantalla ya compilado el programa.
*/
#include <stdio.h>



/* 
Función principal main, declaramos variables de tipo entero que nos servirán para recorrer filas y columnas y que se multipliquen.
*/
int main() {
    
    int i, j;


/* 
Comienza el ciclo for, iniciaizando el valor en 1 y delimitando los parámetros para que sean los valores <=10 e incrementando el valor.
Se utiliza la funcion printf para imprimir en pantalla la tabla que se realiza dependiendo del valor de i que se este trabajando en cada ciclo.
*/
    for (i=1; i<=10;i++) {
        printf("Tabla %d\n",i);
        
        
/* 
Se utiliza ciclo for para hacer lo mismo que en el anterior, vamos aumentando los numeros del 1-10 para ser utilizados despues.
Se utiliza la funcion printf para imprimir la multiplicacion de ambos valores previamente establecidos, recorriendo cada numero de las tablas de multiplicar hasta agotarse en la tabla del 10.
Se utiliza la funcion printf para imprimir un espacio entre cada tabla.
*/
        for (j=1;j<=10;j++) {
            printf("%dx%d= %d\n",i,j,i*j);
        }
        printf("\n");
    }



/* 
Termina el codigo y devuelve 0.
*/
    return 0;
}

