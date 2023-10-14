#include<stdio.h>
int sum(int[],int);
int main()
{
    int size=0,i;
    printf("enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements in array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    sum(arr,size);
}
int sum(int arr[],int size)
{
    int i,Sum=0;
    for (i = 0; i<size; i++)
    {
        Sum=Sum+i;
    }
    printf("sum of the array:%d\n",Sum);
}
