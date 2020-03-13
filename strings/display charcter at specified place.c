//print character at specified value in string
/* C Program to Print Characters in a String */
#include <stdio.h>
int main()
{
    char str[100];
    int i = 0;
    char str1[200];
    printf("\n Please Enter any String  :  ");
    scanf("%s", str);

   // while (str[i] != '\0')
   for(i=3; str[i]!='\0';i++)
    {
       //printf("The Character at %d Index Position = %c \n", i, str[i]); //it will print words after 3rd index
      str1[i] =str[i];
    }
    printf("value is %s",str1);
    return 0;
}
