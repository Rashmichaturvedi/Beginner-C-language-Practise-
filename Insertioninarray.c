//program practise array & array is collection of homogeneous data type
/*this is program showing array insertion of a new element*/

#include<stdio.h>
#include<conio.h>

int i,len,pos,num;
void insert(int a[],int pos , int len, int num);
main()
{
int a[100];
printf("Enter number of elements");
scanf("%d",&len);
printf("\n\tEnter num of integers");
for (i=0;i<=len-1;i++)
{
scanf("%d",&a[i]);

}
printf("\nenter element to be inserted");
scanf("%d",&num);
printf("\nenter position of insertion ");
scanf("%d",&pos);
--pos;
insert(a,len,pos,num);


}
void insert(int a[],int len,int pos,int num)
{

    for(int i=len;i>=pos;i--)
    {

        a[i+1]=a[i]; //a[j]=a[j+1];
    }
        a[pos]=num; //for deletion num=a[pos]

    if(pos>len)
    {

        printf("insertion outside in array");
    }
    len++;//reverse steps upto here for deletion program
    printf("\nnew array"); //displaying new array
    for(i=0;i<len;i++)
    {

        printf("%d\n",a[i]);
    }
}
