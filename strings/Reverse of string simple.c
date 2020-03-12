//print reverse of a string
#include<stdio.h>
int main()
{
char str[19];
int i,c=0;
printf("\n Enter the string");
gets(str);
for(i=0;str[i]!='\0'; i++){
c++;
}
printf("\n string reverse  ..\n");
for(i=c-1;i>=0;i--)
printf("%c",str[i]);
return 0;
}
