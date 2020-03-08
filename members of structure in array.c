#include<stdio.h>
#include<conio.h>
main()
{
int i;
struct student
{
    int rollno;
    char sex;
    float height ;
    float weight;


};
struct student data[3] = {
                             {121,'m',5.7,59.8},
                             {122,'f',6.0,65.2},
                             {123,'m',6.2,75.5},

                          };
printf("the initalized contents are :\n");
for(i=0;i<=2;++i)
{
   printf("\n ** Record No.  %d ** \n",i+1);
   printf("%d\n",data[i].rollno);
   printf("%c\n",data[i].sex);
   printf("%f\n",data[i].height);
   printf("%f\n",data[i].weight);

}
getch();

}
