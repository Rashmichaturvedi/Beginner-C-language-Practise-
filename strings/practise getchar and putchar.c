//program reads  character until a newline
#include<stdio.h>
main()
{
char msg[100],ch;
int i=0;
printf("character string \n");
printf("type characters terminated by  return or enter\n");
while((ch=getchar())!='\n') //getchar() function is used to get/read a character from keyboard input.
msg[i++]=ch;
msg[i]='\0';
i=0;
while(msg[i]!='\0')
putchar(msg[i++]);
printf("\n");//The putchar(int char) method in C is used to write a character, of unsigned char type, to stdout. This character is passed as the parameter to this method.


}
