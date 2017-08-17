#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct Alumno{


float promedio;
char nombre[120];
int edad,grupo;




}Alumno;




void main(){





Alumno Lista[3];

Lista[0].promedio=87.2;

strcpy(Lista[0].nombre,"jonathan");

Lista[0].edad=20;
Lista[0].grupo=03;





printf("%s\n",Lista[0].nombre);
printf("%f\n",Lista[0].promedio);

printf("%d\n",Lista[0].edad);

printf("%d\n",Lista[0].grupo);





}
