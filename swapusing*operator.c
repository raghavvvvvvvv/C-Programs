#include<stdio.h>
int main()
{
    int a=10,b=20;
    printf("value before swap\n a=%d b=%d",a,b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("\nvalues after swap\n a=%d b=%d",a,b);
    return(0);
}

