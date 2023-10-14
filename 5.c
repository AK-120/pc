#include<stdio.h>
int swap(int *a,int *b)
{
    int c=0;
    printf("a and b before swap:%d , %d\n",*a,*b);
    c=*a;
    *a=*b;
    *b=c;
    

}
int main()
{
    int a,b;
    printf("enter two no as a and b:");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a and b after swap:%d , %d\n",a,b);
}