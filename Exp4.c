#include<stdio.h>
void main()
{
int arr[4],i;
printf("Enter the element in an array:\n");
for(i=0;i<4;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<4;i++)
{
    printf("entered element at %d location is:%d\n",i,arr[i]);
}
}
 
