//find greatest common divisor between two numbers gcd =hcf
#include<stdio.h>
#include<conio.h>
int rec(int,int);
void main()
{
int a,b,gcd;
printf("enter two numbers");
scanf("%d\n%d",&a,&b);
gcd=rec(a,b);
printf("the resullt is %d",gcd);
getch();
}
int rec(int x,int y)
{
int r;
if (y==0)
{ return(x);
}else
{
r=x%y;
return(rec(y,r));
}
}
