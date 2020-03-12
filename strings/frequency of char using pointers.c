//frequency of character using pointer &functions
#include<stdio.h>
int count(char*,char);
int main()
{
char str[100],ch;
int c;
printf("\n enter string =");
gets(str);
printf("\n Enter character you want to count =");
scanf("%c",&ch);

c=count(str,ch); //function calling
printf("\n count = %d",c);
return 0;
}
int count(char*p,char ch)
{ int c=0;
while(*p!='\0')
{
if(*p==ch)
{
c++;

}
p++;
}
return c;


}
