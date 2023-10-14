#include<stdio.h>
void main()
{
    int arr[]={1,2,3,4,5};
    int arr_2[5];
    int i;
    int *p=arr;
    int *q=arr_2;
    printf("array 1\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        *q=*p;
        p++;
        q++;
    }
    printf("copyed elements from array 1 to array 2\n");
    for (i=0;i<5;i++)
    {
        printf("%d\t",arr_2[i]);
    }
    
}