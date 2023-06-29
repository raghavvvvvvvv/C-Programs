#include<stdio.h>
struct student
{
    char name[20];
    int age,rollno;
};
void main()
{
    struct student s;
    FILE*p;
    p=fopen("arman.dat","w");
    printf("enter the name,age and roll no.");
    scanf("%s %d %d",&s.name,&s.age,&s.rollno);
    fwrite(&s,1,sizeof(s),p);   
    fclose(p);
    p=fopen("arman.dat","r");
    fread(&s,1,sizeof(s),p);
    printf("%s %d %d",s.name,s.age,s.rollno);
    fclose(p);
}

