/*static storage class which make use of static keyword . its scope can be local as well as global*/
#include<stdio.h>
#include<conio.h>
void example(); /*function declaration*/
void main()
{
int i;


for(i=0;i<=3;i++)
{
example(); //function call

}
getch();

}
void example()
{

    static int x=10; /*without static keyword output is 20 20 20 20 in case of using keyword auto and reg for register variable
                 with static keyword output is 20 30 40 50 */
    x=x+10;
    printf("%d\t",x);

}
