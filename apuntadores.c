#include<stdio.h>
#include<stdlib.h>

void main()
{

int k;
int *a;
int N=1000000;

a=(int *)malloc(sizeof(int)*N);

for(k=0;k<N;k++){
	a[k]=k+1;
	printf("%d",a[k]);

//	printf("\n");
}

free(a);



}
