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



void imprimirMatriz(int **A,int n, int m){

for (int i=0; i<n;i++)
{
	for(int j=0;j<m;j++){
printf("%d\t",A[i][j]);
	}
printf("\n");
}

}



int LiberarMatriz(int **m,int n){


for (int i = 0; i < count; ++i)
{
	free(m[k]);

free(m);
}
}



int SumaMatrizpares(int **A,int **B, int n, int m){


for (int i = 0; i < count; ++i)
{
	/* code */
	for (int i = 0; i < count; ++i)
	{
	

printf("%s\n", );
		/* code */
	}
}







}



