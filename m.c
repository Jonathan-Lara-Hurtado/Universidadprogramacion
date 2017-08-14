#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include'lara.h'


/*
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

*/




void main()
{
int n,m,p;
int **A,**B,**C;

int i,j,k,s;

n=5 ;
m=10;
p=5;

A=ReservaMatriz(n,m);
B=ReservaMatriz(m,p);
C=ReservaMatriz(n,p);

srand(time(0));

for (int i = 0; i < n; ++i)
{
	for (int j = 0; i < m; ++j)
	{

		A[i][j]=rand()%100;
	}
}


for (int i = 0; i < m; ++i)
{
	for (int j = 0; i < p; ++j)
	{
		
		B[i][j]=rand()%100;
		
	}
}








for (int i = 0; i < n; i++)
{
	for (int j = 0; j < p; j++)
	{
		int cnt=0;

		for(k=0;k<m;k++){

cnt +=A[i][k]*B[k][j];

C[i][j]=cnt;

		}


	}
}



imprimirMatriz(C,n,p);




}
