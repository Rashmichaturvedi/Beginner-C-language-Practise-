//copy content of one string into another string using array concept
#include<stdio.h>
void main()
{
char s1[20],s2[30];
int i;
printf("enter a string");
gets(s1);
for(i=0;s1[i]!='\0';i++)
{
s2[i]=s1[i];

} //explicitly assign null character to make it string
s2[i]='\0'; //to make character a string null is added to it
printf("\n copied string is %s",s2);
}
