#include<stdio.h>

struct company
{
    char name[50];
    char address[100];
    int phone;
    int no_of_employee;
}c1;
void main()
{
    printf("enter the company's name:");
    scanf("%s",&c1.name);
    printf("enter the address:");
    scanf("%s",&c1.address);
    printf("enter the phone number:");
    scanf("%d",&c1.phone);
    printf("enter no of employee:");
    scanf("%d",&c1.no_of_employee);
    printf("\n");
    printf("company's name:%s\n",c1.name);
    printf("address:%s\n",c1.address);
    printf("phone number:%d\n",c1.phone);
    printf("no of employee:%d\n",c1.no_of_employee);
}
