//program to read a string and find out its length
#include<stdio.h>
void main()
{

    char str[10];
    int i,c=0;
    printf("enter a string :");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
         c++;
    }
    printf("length of string is %d",c);
}
