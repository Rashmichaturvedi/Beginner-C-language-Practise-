//sum of odd and even elements in an array
#include<stdio.h>
#include<conio.h>
#define max 100
void main()
{

    int a[max],i,sumo,sume,n; sumo=0; sume=0; //initalising sumo&sume as 0 is important else it will print wrong ans
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<=n-1;i++)
    {

        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i++)
    {

        if(a[i]%2==0)
            sume= sume+a[i]; //sum of even
        else
            sumo=sumo+a[i];//sum of odd
    }

    printf("sum of even  numbers is %d",sume);
     printf("\nsum of odd   numbers is %d",sumo);
     getch();

}
