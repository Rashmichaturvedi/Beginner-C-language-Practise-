//this is the program showing two Single Dimension arrays  & showing them
#include<stdio.h>
#include<conio.h>
void main()
{

    int n,m,p,q,c;
    int a[100],b[100],d[200];
    printf("enter number of elements in array first:");
    scanf("%d",&n);
    printf("enter elements");
    for(p=0;p<n;p++)
    {
        scanf("%d",&a[p]);
    }
    printf("\n\n\nenter number of elements in second array");
    scanf("%d",&m);
    printf("\n\nenter elements into array");
    for(q=0;q<m;q++){
        scanf("%d",&b[q]);
    }
    c=0;p=0;q=0;
     while((p<n)&&(q<m))
     {

         if(a[p]<=b[q])
            d[c]=a[p++];
         else
            d[c]=b[q++];
         c++;

     }
     while(p<n)
     {
         d[c]=a[p]; //if you make mistake here then you get error: subscripted value is neither array nor pointer nor vector|
         c++;
         p++;

     }
     while(q<m)
     {

         d[c]=b[q];
         c++;
         q++;

     }
     printf("\n\n merged array is");
     for(m=0;m<=c-1;m++)
        printf("\n%d",d[m]);
}
