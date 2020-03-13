//print string in alphabetical order
#include<stdio.h>
#include<conio.h>
void main()
{
char a[90];
int i ,j,k;

printf("enter the string :");
gets(a);

printf("\n the string in alphabetical order is :");
for(i=0;a[i]!='\0';i++)
{
j=i;
for(k=i+1;a[k]!='\0';k++)
{
if (a[k]<a[j])
j=k;

}
k=a[i];
a[i]=a[j];
a[j]=(char)k;
printf("%c",a[i]);

}
}
