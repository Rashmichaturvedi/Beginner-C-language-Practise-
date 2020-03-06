/*Recursion implementation to find power of a number*/
#include<stdio.h>
#include<conio.h>
int power(int,int);
void main()
{

    int n ,p,result;
    printf("Enter the number");
    scanf("%d",&n);
    printf("enter the power to be calculated");
    scanf("%d",&p);
    result=power(n,p);
    printf("result of %d to power %d is %d",n,p,result);
    getch();

}
int power(int n,int p)
{

    static int r=1;
    if (p==0){
        return(1);

    }
    else{
        r=r*n;
        power(n,p-1);

    }
    return(r);
}
