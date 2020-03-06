/*Important question under c (Fibonacci series :to calculate nth bumber of series)fibonacci series is the sum of two and result is third value and so on*/
#include<stdio.h>
#include<conio.h>
int fib(int);
void main()
{
int p,num;
printf("enter position of element you want from fibanacci series");
scanf("%d",&p);
num=fib(p);
printf("required fibonacci number is %d",num);
getch();
}
int fib(int p)
{
if (p==1||p==0)
{
return(p);
}
else
{
return(fib(p-1)+fib(p-2));
}

}
