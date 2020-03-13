//CHECK WHETHER STRING IS PALINDROME OR NOT
//PALINDROME IS a word, phrase, or sequence that reads the same backwards as forwards
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   char str1[100],flag;
    int i,j;
    printf("enter the string : ");
    gets(str1);
    flag='y';
    printf("\n\nentered string is :\n");
    for(i=0;str1[i]!='\0';i++)
        printf("%c",str1[i]);
    for(j=0;i-=1,i>j;j++,i--)
    {
if(str1[i]!=str1[j])
{flag='n';
    break;
}
}
if(flag=='n')
    printf("\n\tis not a palindorm");
else
    printf("\n\tstring is palindrome");
getch();
}
