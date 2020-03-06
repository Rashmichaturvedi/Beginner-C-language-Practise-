/*test use of external variable using keyword extern*/
#include<stdio.h>
#include<conio.h>
void externfun();
int num=5;
void main()
{
extern int num;
printf("%d\n",num);
externfun();
getch();


}
void externfun()
{
extern int num;
num=num+50;
printf("the number is %d",num);

}
