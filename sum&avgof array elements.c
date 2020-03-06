/*sum and average of elements of an array*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define NULL 0
void main()
{
int *ptr;
int i,n,sum=0;
float avg;
printf("enter the number you want to store in array");
scanf("%d",&n);
ptr=(int*)malloc(sizeof(int));
if(ptr==NULL)
{
printf("THE REQUIRED AMOUNT OF MEMORY UNAVAILABLE");
getch();
exit(0);
}
else
{
printf("enter no of elements\n\t");
for(i=0;i<n;i++)
scanf("%d",ptr+i);
for(i=0;i<n;i++)
{
sum=sum+(*(ptr +i)); /*finding sum of array elements*/

}
printf("\nsum of %d elements is =%d",n,sum);
avg=sum/n;
printf("\naverage of %d number of array is %f",n,avg);

}
getch();
}
