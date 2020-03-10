//this is program to reverse an array and putting it inside another array
#include<stdio.h>
#include<conio.h>
#define max 100
int main()
{

    int a[max],b[max],i,n,j;
    printf("enter value of n \n");
    scanf("%d",&n);
    printf("enter elements inside array\n");
    for(i=0;i<n-1;i++)
    {

        scanf("%d\n",&a[i]);

    }

   printf("\nArray in reverse order: ");
    for(i = n-1;i>=0; i--)
    {
        printf("%d\t", a[i]);
    }
     return 0;
}
