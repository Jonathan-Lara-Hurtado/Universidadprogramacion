#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int * ReservaVector(int n)
{

int *a;

a=(int *)malloc(sizeof(int)*n);

return a;
}



int **ReservaMatriz(int n,int m)
{

int **a;
a= (int **)malloc(sizeof(int * ) * n);

for(int k=0; k<n;k++){
a[k]=(int *)malloc(sizeof(int)*m);

}

return a;



}


void main(){




// suma y diferencias de matricez




int **A,**B;
int n=3,m=4;

A=ReservaMatriz(n,m);
B=ReservaMatriz(n,m);



}


/*    

algoritmo de suma y diferencia de matrices 

declarar una matriz C=nxm


C=A+B
C=A-B

vizualizar A,B y C
llenar las matrices A y B
con numero aleatorios




*/
