#include<stdio.h>
#include<stdlib.h>


typedef struct nodo{


int dato;

struct nodo *sig;

}struct_nodo;

//nombre de la estructura 


void main()
{

//se declaran variables del tipo struct

struct_nodo *inicio,*reg1,*reg2;

//asigna memoria a las variables

inicio = (struct_nodo *)malloc(sizeof(struct_nodo));
reg1 = (struct_nodo *)malloc(sizeof(struct_nodo));
reg2 = (struct_nodo *)malloc(sizeof(struct_nodo));

//asigna valor a la variable dato de la estructura
inicio->dato=12;

reg1->dato=21;

reg2->dato=88;



//asigna los enlaces
inicio->sig = reg1;
reg1->sig = reg2;
reg2->sig = NULL;




struct_nodo *ptr;


for(ptr=inicio;ptr !=NULL ;ptr=ptr->sig)
{

	printf("Campo dato:%d\n",ptr->dato);
}





}
