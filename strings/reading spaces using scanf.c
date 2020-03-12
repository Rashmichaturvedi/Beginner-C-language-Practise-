//read spaces in string using scanf
#include<stdio.h>
int main()
{ //you cannot read space in scanf suppose input is A B so output will be A
char str[20];
printf("enter string");
scanf("%[^\n]",str); //since space is also a special character so
printf("\n you have entered =%s",str);
return 0;


}
