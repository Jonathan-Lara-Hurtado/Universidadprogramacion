#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct Alumno{


float promedio;
char nombre[120];
int edad,grupo;




}Alumno;




void main(){




Alumno *Registro;
//struc con apuntador 
Registro=(Alumno*)malloc(sizeof(Alumno));
Registro->promedio=7.5;
strcpy(Registro->nombre,"Juan");
Registro->edad=21;
Registro->grupo=3;


Alumno Lista[3];



Lista[0].promedio=87.2;

strcpy(Lista[0].nombre,"jonathan");

Lista[0].edad=20;
Lista[0].grupo=03;

int n=0;



printf("%s\n",Lista[0].nombre);
printf("%f\n",Lista[0].promedio);

printf("%d\n",Lista[0].edad);

printf("%d\n",Lista[0].grupo);


printf("impresion de apuntador struct\n");

printf("%s\n",Registro[0].nombre);
printf("%f\n",Registro[0].promedio);

printf("%d\n",Registro[0].edad);

printf("%d\n",Registro[0].grupo);






}
