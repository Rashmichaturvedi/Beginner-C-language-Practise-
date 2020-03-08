//program to show content of pointers using array of pointers

#include<stdio.h>
#include<conio.h>
main()
{
  char *ptr[13];

  ptr[0]="Hello";
  ptr[1]="\nhow are";
  ptr[2]="\nyou";
  printf("%s%s%s",ptr[0],ptr[1],ptr[2]);
  getch();
}
