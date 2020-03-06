//sum of number using recursion
#include<stdio.h>
#include<conio.h>
int sum(int a);
void main()
{
int x,y;
printf("Enter any positive int number");
scanf("%d",&y);
printf("sum of first %d integer is  %d",y,sum(y));

}
int sum(int y)
{

    if(y==0)
        return 0;
    else
        return (y+sum(y-1));

}
