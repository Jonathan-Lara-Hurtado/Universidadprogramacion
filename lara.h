#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*

Estudiante :Jonathan Abimael Lara Hurtado

*/

int Fibonacci(int k)//si k valdriedra 2 pasaria del if al else ya que es el mismo numero
{

if(k < 2)//si k tiene valor  0 y 1  su resultado es igual a  si mismo
{
return(k);
}
else
{
return Fibonacci(k-1)+Fibonacci(k-2);
//fibonacio(2-1=1)+fibonacci(2-2=0);
//y como vale 1  y este vale cero entran en la condicion del if que dice que tomaran el valor del numero ingresado
//en este caso seria return 1+0 dando como resultado = 1 cuando k vale = 2 
}

}


int *ReservaVector(int n)//funcion que reserva un vector
{

int *a;

a=(int *)malloc(sizeof(int)*n);

return a;
}//fin



int **ReservaMatriz(int n,int m)//funcion que Reserva espacio para una matriz
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

printf("\n");

}



int LiberarMatriz(int **m,int n){


for (int i = 0; i < n; ++i)
{
	free(m[i]);

free(m);
}
}



int **SumaMatrizpares(int **A,int **B, int n, int m){

int **C;

C=ReservaMatriz(n,m);

for(int i=0; i<n ; i++)
{
	for(int j=0; j<m;j++)
	{
	
	C[i][j]=A[i][j]+B[i][j];
	

	}
}

return C;

}



int **RestaMatrizpares(int **A,int **B, int n, int m){

int **C;

C=ReservaMatriz(n,m);

for(int i=0; i<n ; i++)
{
	for(int j=0; j<m;j++)
	{
	
	C[i][j]=A[i][j]-B[i][j];
	

	}
}

return C;

}











int **MatrizAleatoria(int n,int m)//matriz aleatoria
{


int **A;

A=ReservaMatriz(n,m);


for(int i=0; i<n; i++)
{
	for(int j=0; j<m; j++)
	{
		
	A[i][j]=rand()%100;
	}
}


return A;


}









