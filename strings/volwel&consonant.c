//finding volwel and consonant from string
#include<stdio.h>
int main()
{
char ch;
 printf("enter the words");
 scanf("%c",&ch);
 if(ch=='a'|| ch=='e'|| ch=='i'||ch='o'||ch=='u'||ch=='A'|| ch=='E'|| ch=='I'||ch='O'||ch=='U')
 printf("\nVOLWEL  DETECTED %c",ch);
 else
 printf("\n %c is consonant ",ch);


return 0;


}
