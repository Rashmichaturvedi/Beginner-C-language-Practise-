/*Use of string functions
strcat : to join two strings
strcmp: to compare two strings
strlen : to find length of string
strcpy : to copy one string to another
strlwr : to convert into lower case
strrev : to reverse a string
strupr : to convert into upper case
strtok :	Tokenizing given string using delimiter
strrstr :	Returns pointer to last occurrence of str2 in str1
strdup :	Duplicates the string
memmove :It is used to copy a specified number of bytes from one memory to another or to overlap on same memory*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{

    char str1[15],str2[15];
    printf("enter the string1");
    gets(str1);
    int l=strlen(str1); //finding length of string & storing it into l
    printf("\nthe length of string is %d",l);
    printf("\n\nenter the string2");
    gets(str2);
    char *a=strcat(str1,str2); //joining two strings
   //strcat(str1,str2);
   //printf("required string is %s ",str1);
    printf("\n\nrequired string is %s ",a); //output is same in both cases
     int value=strcmp(str1,str2); //comparing two strings
     printf("\n\nthe result of comaprison is %d",value);
     char *r =strrev(str1);//reversing a string
     char *lw=strlwr(str1);
     printf("\n\n string in lower case is %s",lw);
     printf("\nthe reverse of string is %s",r);

    getch();
}
