/*The most Important question asked & one of the best example of Recursion(Factorial of a number :suppose factorial of 4 =4*3*2*1)
Impotant about Recursion is that it should always have a base condition to terminate it */
#include<stdio.h>
#include<conio.h>
int fact(int); //function declaration  //using void fact will generate error  void value not ignored
void main()
{
int n,r; //this is single line comment in c ,here r is used to store result
printf("Enter the number to get factorial");
scanf("%d",&n);
r = fact(n);
printf("\n factorial of %d is %d",n,r);
getch();
}
int fact(int x)
{
if (x==1)//here this is the base condition
{
 return(x);
 }
 else{

 return(x*fact(x-1)); // recursion is a function calling itself


 }}
