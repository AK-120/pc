#include<stdio.h>

struct students
{
    int id;
    char name[50];
    float mark_1;
    float mark_2;
    float mark_3;
};
int main()
{
    struct students std[50];
    int i,size;
    printf("enter no of student record stored(upto 50 student):");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("enter student id:");
        scanf("%d",&std[i].id);
        printf("enter the name stdudent:");
        scanf("%s",&std[i].name);
        printf("enter mark_1 of stduent:");
        scanf("%f",&std[i].mark_1);
        printf("enter mark_2 of stduent:");
        scanf("%f",&std[i].mark_2);
        printf("enter mark_3 of stduent:");
        scanf("%f",&std[i].mark_3);
    }
    printf("student record\n");
    for(i=0;i<size;i++)
    {
        printf("student_%d id : %d\n",std[i].id);
        printf("name of student : %s\n",std[i].name);
        printf("percentage of mark of student : %.2f\n",(((std[i].mark_1+std[i].mark_2+std[i].mark_3)/300.00)*100.00));
    }
}