/*Important Question for testing Basics of c i.e Prime number */
#include<conio.h>
#include<stdio.h>
int prime(int);
void main()
{
int n,f=0;
printf("enter number");
scanf("%d\n",&n);
if(n==2)
{
printf("The Number is Prime");
}
else if(n<2)
{
printf("the smallest prime is 2");

}
else
{
f =prime(n);
if (f)
{
printf("number is prime");

}
else printf("not prime");

}
getch();
}
int prime(int a)
{
static int d=2,flag=1;
if(d==a)
{
return (0);

}
else{
if(a%d==0){
flag=0;
d++;
}
else
{
d++;
flag=1;
prime(a);  //binary recursion
}
}
return(flag);
}
