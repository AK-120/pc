#include<stdio.h>
int search(int *arr,int size,int ele)
{
    for(int i=0;i<size;i++)
    {
        if(*arr == ele)
            return i;
        arr++;
    }
    return -1;
}
int main()
{
    int size,ele,result,i;
    printf("enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements to the array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element to search:");
    scanf("%d",&ele);
    result=search(arr,size,ele);
    if(result == -1)
        printf("%d is not found in array\n",ele);
    else
        printf("%d is found index number is %d\n",ele,result);
}