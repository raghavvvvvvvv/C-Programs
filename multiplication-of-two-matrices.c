#include<stdio.h>    
int main(){  
int a[10][10],b[10][10],mul[10][10],r,c,i,j,k,d,e;    
printf("enter the number of row in array1=");    
scanf("%d",&r);    
printf("enter the number of column in array1=");    
scanf("%d",&c);
printf("enter the number of row in array2=");    
scanf("%d",&d);
printf("enter the number of column in array2=");    
scanf("%d",&e);
printf("enter the first matrix element=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&a[i][j]);    
}    
}    
printf("enter the second matrix element=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&b[i][j]);    
}    
}    
if(d==c){  
printf("multiply of the matrix=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
mul[i][j]=0;    
for(k=0;k<c;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    
}    
}    
}    
//for printing result    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
printf("%d\t",mul[i][j]);    
}    
printf("\n");    
}}   
return 0;  
}
