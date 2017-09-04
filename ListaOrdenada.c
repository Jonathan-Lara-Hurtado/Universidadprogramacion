//https://www.dropbox.com/sh/3s2x6zck1tyv5ds/AABPONX6kpCpg0RNWSKXNrHja?dl=0

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
typedef struct nodo {
    int dato;
    struct nodo *sig;
} struct_nodo;
 
 
/* Funcion para crear un nodo */
struct_nodo *crea_nodo(int dato) {
    struct_nodo *nuevo;
    nuevo = (struct_nodo *)malloc(sizeof(struct_nodo));
    if (nuevo==NULL) {
        printf("No hay memoria.\n");
        return NULL;
    }
    nuevo->dato=dato;
    nuevo->sig=NULL;
    return nuevo;
}
 
 
/* inserta al inicio de una lista */
int inserta_ini(struct_nodo **lista, int info) {
    struct_nodo *nuevo;
    nuevo = crea_nodo(info);
    if (*lista==NULL)
        *lista = nuevo;
    else {
        nuevo->sig = *lista;
        *lista = nuevo;
    }
    return 1;
}
 
/* inserta un nodo al final de la lista */
int inserta_fin(struct_nodo **lista, struct_nodo **fin, int info) {
    struct_nodo *nuevo, *tmp;
    nuevo = crea_nodo(info);
     
    if (*lista==NULL)
    {
        *lista = nuevo;
        *fin = nuevo;
    }
    else {
        (*fin)->sig=nuevo;
        *fin = nuevo;
    }
    return 1;
}
 
void PrintLista(struct_nodo *lista)
{
    struct_nodo *ptr;
     
    // recorre la lista ligada
    printf("\n\n");
    for (ptr=lista; ptr!=NULL; ptr=ptr->sig)
    {   printf("%d ", ptr->dato);

}

printf("\n");
}
 
 
/* inserta un nodo al final de la lista */
int inserta_ordenado(struct_nodo **lista, int info)
{

struct_nodo *nuevo;
struct_nodo *ptr;
struct_nodo *ant;
nuevo = crea_nodo(info);
if(*lista == NULL){
*lista=nuevo;
}
else{
if(info <= (*lista)->dato)//inserta inicio
    {

        nuevo->sig= *lista;
        *lista= nuevo;

    }
    else{
           ant = *lista;
           ptr = *lista;

           while(ptr->dato <= info && ptr->sig!=NULL){

            ant=ptr;
            ptr=ptr->sig;

           }


           ant->sig = nuevo;
           nuevo->sig=ptr;



        }  

}
     
    return 0;
}
 
int main()
{
    struct_nodo *lista=NULL, *fin=NULL;
    int k, N=10, rnd;
     
    // crea lista de N numeros aleatorios
 
    for (k=0; k<N; k++)
    {
        rnd = rand()%100;
        inserta_fin(&lista, &fin, rnd);
       
    }
     
    PrintLista(lista);


    inserta_ordenado(&lista,10);


     PrintLista(lista);
     
    return 0;
}