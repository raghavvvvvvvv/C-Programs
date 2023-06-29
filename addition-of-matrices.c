#include<stdio.h>
void main()
{
    int i,j,mat1[3][4],mat2[3][4],mat3[3][4];
    printf("enter matrix mat1[3][4]:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("enter matrix mat2 [3][4]:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            mat3[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d",mat3[i][j]);
            printf("\n");
        }
    }
}

