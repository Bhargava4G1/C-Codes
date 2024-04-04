#include <stdio.h>

#define size  5

int main()
{
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array is \n");
    for(int i = 0; i < size; i++)
        printf("%d ",arr[i]);
    printf("\n");
}