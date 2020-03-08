#include<stdio.h>
#include<conio.h>
main()
{
int num[]={10,20,30,40,50},i;
i=0;
while(i<=5)
{
printf("address = %u",&num[i]);

printf("\telement = %d",num[i]);
i++;


}
getch();
}
