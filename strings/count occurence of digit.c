//program to find aand count occurence of digits 0-9
#include <stdio.h>
int main()
{
    char s[1000];
    int c=0,j;
    printf("Enter string: ");
    gets(s);
    for(j = 0; s[j] != '\0'; j++)
    {
        if(s[j]=='0' || s[j]=='1'|| s[j]=='2'||
        s[j]=='3'|| s[j]=='4'|| s[j]=='5'||
        s[j]=='6'|| s[j]=='7'|| s[j]=='8'|| s[j]=='9')
        c++;
    }
    printf("\nNumber of digits in string = %d", c);
    return 0;
}
