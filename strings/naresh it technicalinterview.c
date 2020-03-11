#include<stdio.h>
void main()
{
//char  sport[]="cricket"; // 0=c, 1=r 2=i 3=c 4=k 5=e 6=t 7=\0
//int x=1,y;
//y=x++ + ++x;  //first of all x=++x =2  then x++ =3  and 3 plus 2 is 5
//printf("%c",sport[++y]);
char veg[]="cauliflower";
int x=2,y,r;
//y=x++ + ++x; in this case output is 0 i.e at 7 position  i.e  first of all   x++=2 then ++x =4 their sum is 6 lastly preincrement is 7
y=++x + x++; //in this case output is w i.e at 8 position; first of all ++x is 3 then x++ is 4 then plus and increment
printf("%c",veg[++y]); //in case of y++ we get error
}
