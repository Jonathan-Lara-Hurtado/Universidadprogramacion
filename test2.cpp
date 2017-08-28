#include<stdio.h>
#include<stdlib.h>
#include<time.h>



typedef struct nodo
{


int dato;
struct nodo *sig;


}struct_nodo;



class Lista_Ligada
{


public:

Lista_Ligada();
virtual ~Lista_Ligada();

int inserta_ini(int info);
void ImprimeLista();


private:
struct_nodo *lista,*fin;


struct_nodo *crea_nodo(int dato);





};




Lista_Ligada::Lista_Ligada(){


	lista=NULL;
	fin=NULL;

	//printf("\nEntre al constructor chango" );
}

Lista_Ligada::~Lista_Ligada()
{


//printf("\nEntre al destructor chango" );
}


struct_nodo *Lista_Ligada::crea_nodo(int dato) {
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


int Lista_Ligada::inserta_ini(int info) {
    struct_nodo *nuevo;
    nuevo = crea_nodo(info);
    if (lista==NULL)
        lista = nuevo;
    else {
        nuevo->sig = lista;
        lista = nuevo;
}
return 1; }



void Lista_Ligada::ImprimeLista()
{



struct_nodo *ptr;
for (ptr=lista; ptr->sig != NULL; ptr=ptr->sig)
    printf("%d\n",ptr->dato);

}



int main(){

Lista_Ligada *lista;


lista = new Lista_Ligada();


for (int i = 0; i < 10; ++i)
{
	lista->inserta_ini(i);
}


lista->ImprimeLista();



delete lista;




return 0;

}