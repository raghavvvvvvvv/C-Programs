#include<stdio.h>
int main()
{
    int a[5],i,x,n;
    printf("Enter number of elements in an array: ");
    scanf("%d",&n);
    printf("\nEnter elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&a[i]);
    printf("\nEnter item to search: ");
    scanf("%d",&x);
    for (i=0;i<n;i++)  
         { if (x == a[i])
        {
            printf("\nItem found at location %d", i+1);
            break;
        }
      }
    if (i == n)
        printf("\nItem does not exist.");
    return 0;
}
