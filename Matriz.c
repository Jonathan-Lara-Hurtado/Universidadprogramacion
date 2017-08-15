#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "lara.h"
/*

Alumno:Jonathan Abimael Lara Hurtado

Este programa depende de la libreria lara.h

*/

void main(){

int **A,**B,**C,**D;
int n=3,m=4;

A=ReservaMatriz(n,m);
B=ReservaMatriz(n,m);
C=ReservaMatriz(n,m);

A=MatrizAleatoria(n,m);
B=MatrizAleatoria(n,m);

C=SumaMatrizpares(A,B,n,m);

D=RestaMatrizpares(A,B,n,m);

printf("Matriz A:\n");
imprimirMatriz(A,n,m);
printf("\n");

printf("Matriz B:\n");
imprimirMatriz(B,n,m);
printf("\n");

printf("Resultado de la suma de la Matriz A y B:\n");
imprimirMatriz(C,n,m);
printf("\n");

printf("Resultado de la resta de la Matriz A y B:\n");
imprimirMatriz(D,n,m);
printf("\n");


//fibonacci

int k=6;
int r;

r=Fibonacci(k);
printf("El resultado de la serie de fibonacci es:%d\n",r);


}

