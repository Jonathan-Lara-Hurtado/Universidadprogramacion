#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct nodo{


int dato;

struct nodo *sig;

}struct_nodo;//nombre de la estructura 



//funcion para crear un nod


struct_nodo *crea_nodo(int n){



}
















void main()
{

//se declaran variables del tipo struct

struct_nodo *reg,*lista,*ptr;
int k,N=100;

//crea listas de numeros aleatorios

for(k=0;k<N;k++){



reg= (struct_nodo *)malloc(sizeof(struct_nodo));
reg->dato=rand()%50;




if(k==0){


lista = reg;

}else{

reg->sig= lista;

lista = reg;

}


}





//recorre la lista completa
for(ptr=lista;ptr !=NULL ;ptr=ptr->sig)
{

	printf("Campo dato:%d\n",ptr->dato);
}

//recorre la lista pero el ultimo no
for(ptr=lista;ptr->sig !=NULL ;ptr=ptr->sig)
{

	printf("Campo dato:%d\n",ptr->dato);
}



      




}
