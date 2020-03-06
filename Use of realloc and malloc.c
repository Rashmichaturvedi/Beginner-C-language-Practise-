/*use of realloc and malloc which is used for dynamic memory allocation , Realloc is used to resize the block in case of usage of more or less memory,
 after using realloc , memory should be allocated by using malloc(no of elements * size of data type)  Realloc(ptr ,new_size) */

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
 char *msg;
 msg =(char*)malloc(30 * sizeof(char));
 strcpy(msg,"able was I "); /*strcpy instead of strcopy */
 printf("The message is now %s\n",msg);
 msg=(char*)realloc(msg,50);
 strcpy(msg,"Era I was root");
 printf("\nthe message is now %s",msg);
 free(msg);
 getch();



}
