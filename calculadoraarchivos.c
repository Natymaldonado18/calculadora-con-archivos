#include <stdio.h>
#include "operaciones.h"
// calculadora con archivos por: John Morales y Nathalia Maldonado

void resultadossuma (int sumatoria) {
printf("la suma es: %d",  sumatoria);
}

void resultadosresta ( int restatoria) {
printf("la resta es %d", restatoria);
}

void resultadosmultiplica ( float divisitoria) {
printf("la resta es %f", divisitoria);
}

void resultadosdivide ( int multiplicatoria) {
printf("la resta es %d", multiplicatoria);
}

int main() 
{
    int num1, num2, opcion;
    int suma, resta, multiplicacion, division;
    printf ("Leer numero 1:   ");
    scanf ("%d", &num1);
    printf ("Leer numero 2:   ");
    scanf ("%d", &num2);


    printf ("MENU DE OPERACIONES BASICAS\n");
    printf("1.- Suma\n");
    printf("2.- Resta\n");
    printf("3.- Multiplicacion\n");
    printf("4.- Division\n");
    printf("5.- salir\n");
    printf("escoja una opcion:\n");
    scanf ("%d", &opcion);

switch (opcion) {
case 1:
   suma = sumar (num1, num2);
   resultadossuma (suma);
    break;
case 2:
  resta = restar(num1, num2);
  resultadosresta (resta);
  break;
case 3:
  multiplicacion = multiplicar(num1, num2);
  resultadosmultiplica (multiplicacion);
  break;
case 4:
  division  = dividir(num1, num2);
  resultadosdivide (division);
  break;
case 5:
default:
    break;
}
 
}