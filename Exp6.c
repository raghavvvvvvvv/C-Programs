#include<stdio.h>
int main()
{
    int arr[10]={2,5,6,7,8,4,3,1,0,9};
    int i,small,large;
    small=large=arr[0];
    for(i=0;i<10;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
        }
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }
    printf("smallest=%d and largest=%d",small,large);
    return(0);
}
