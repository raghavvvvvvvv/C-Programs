#include<stdio.h>
int sum(int x, int y);//function declaration 
int sub(int x,int y);//function declaration
int mul(int x, int y);//function declaration
int Div(int x, int y);//function declaration
void main()
{
    int a=10,b=20,k;
    char op;
    printf("enter operator  ");
    scanf("%c",&op);
    switch(op)
    {
        case '+':
        {
            k=sum(a,b);//calling function
            printf("addition values is:%d",k);
            break;
        }
        case '-':
        {
            k=sub(a,b);//calling function
            printf("substraction values is:%d",k);
            break;
        }
        case '*':
        {
            k=mul(a,b);//calling function
            printf("multiplication values is:%d",k);
            break;
        }
        case '/':
        {
            k=Div(a,b);//calling function
            printf("Division values is:%d",k);
            break;
        }
    }
}
int sum(int x, int y)//function definition 
{
    int a;
    a=x+y;
    return a;
}
int sub(int x, int y)// function definition 
{
    int a;
    a=x-y;
    return a;
}
int mul(int x, int y)//function definition 
{
    int a;
    a=x*y;
    return a;
}
int Div(int x, int y)//function definition
{
    int a;
    a=x/y;
    return a;
}

