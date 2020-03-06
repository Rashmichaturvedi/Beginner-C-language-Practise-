/*print series of multiplier of 10*/


#include<stdio.h>
#include<conio.h>
void multi();
void main(){
int i;

multi(10);
getch();

}
void multi(int n)
{
if(n<=10000)
{
multi(n*10);
printf("%d\n",n);
}

//printf("%d",n);    //output is 10  10010 1000100
}
