#include<stdio.h>


//funcion de Fibonacci recursiva
//0,1,1,2,3,5,8,13....
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




void main()
{
int k=0;
int r;
printf("Ingrese el valor de k:");
scanf("%d",&k);
r=Fibonacci(k);
printf("el resuldo es:%d\n",r);
}
