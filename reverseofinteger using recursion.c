/*Reverse of any integer using remainder formula with recursion concept*/
#include<stdio.h>
#include<conio.h>
int rev(int);
void main()
{

    int n,result ;
    printf("enter the number");
    scanf("%d",&n);
    result = rev(n);
    printf("the reverse of number %d is %d",n,result);
    getch();
    }
int rev (int p)
{
    int d ;
    static int r=0;
    if (p==0)
    {

    return(p);
    }
    else{
        d=p%10;
        r=r*10+d;
        rev(p/10);

    }
    return(r);
}
