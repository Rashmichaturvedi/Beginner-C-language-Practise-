//this is program to find minimum and maximum element in an array
#include<stdio.h>
#include<conio.h>
void main()
{

int a[100],i,n,max,min,pos;
printf("enter total element in an array");
scanf("%d",&n);
printf("enter the elements :\n");
for(i=0;i<=n-1;i++)
{
scanf("%d",&a[i]);


}
max=a[0];  min=a[0];
pos=0;
for(i=0;i<=n-1;i++)
{
if (max<a[i]) //comparison for maximum
 max=a[i];
 if(min>a[i])
 {//comparison for minimum element
 min=a[i];
 pos=i;//to find position of the minimum element in array
 }

}
printf("the maximum is %d",max);
printf("\nposition of min is %d",pos);
printf("\n\nthe minimum is %d",min);
getch();
}
