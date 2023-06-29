#include<stdio.h>
#include<string.h>
int main()
{
    int a;
    char str[30], revstr[30];
    printf("enter a string  al");
    scanf("%s",&str);
    strcpy(revstr,str);
    strrev(revstr);
    a=strcmp(revstr,str);
    if(a==0)
    {
    printf("the string is pallindrome");
    }
    else
    {
    printf("the string is not pallindrome");
    }
    return(0);
}
