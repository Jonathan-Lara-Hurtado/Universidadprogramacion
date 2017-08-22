#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include"lara.h"



void deallocateMatrix(int ***a, int n)
{
	int k;

	for (k=0; k<n; k++)
		free((*a)[k]);
	free(*a);
}



int **RecortarM(int **A,int b,int fila){
int i1,j1;
   int **B = (int **)malloc(sizeof(int)*(b-1));

  for(int h=0; h<(b-1); h++){

   B[h] = (int *)malloc(sizeof(int)*(b-1));
	}

i1=0;
for(int i=0;i<b;i++)
{


	j1=0;

for(int j=0;j<b;j++){

	if (i!=fila && j!=0)
	{

		B[i1][j1]=A[i][j];
		j1++;
	}
	if (i!=fila){

		i1++;
	}

}

}

return B;

}









int determinante(int **A, int n){

int R=0; int **B;

if(n=2){
	return A[0][0]*A[1][1]-A[1][0]*A[0][1];
}

else{
R=0;

	for(int i=0;i<n;i++){
		B=RecortarM(A,n,i);
		R +=(int)pow(-1,i)*A[i][0]*determinante(B,n-1);
	//	 LiberarMatriz(&B,n-1);
		deallocateMatrix(&B, n-1);
	}
}


return R;
}













void main()
{

int n;
n=3 ;

int **A;



A=ReservaMatriz(n,n);

A=MatrizAleatoria(n,n);


imprimirMatriz(A,n,n);




printf("la determinante de A es:%d\n",determinante(A,n));


deallocateMatrix(&A, n);

}
