//print count of uppercase , special characters and lower case
#include<stdio.h>
void main()
{
char str[100];
int i,c1=0,c2=0,c3=0,c4=0;
printf("enter a string");
gets(str);
for (i=0;str[i]!='\0';i++)
{
if(str[i]>=65 && str[i]<=90) //you can also use 'A' instead of 65

c1++;
 else
 if(str[i]>=97 && str[i]<=122)
  c2++;
  else
  if(str[i]>=48 && str[i]<=57)
  c3++;
else
c4++;
}
printf("upper case is %d \n lower case is %d \n special symbol is %d else %d  ",c1,c2,c3,c4);


}




