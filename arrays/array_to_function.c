/*
*Program to pass array elements to a function
*/

#include<stdio.h>
#define SIZE 5
void check_num(int num);

int main()
{
    int i, arr[SIZE];
    printf("Enter the array elements : ");
    for(i = 0; i < SIZE; i++)
    {
        scanf("%d",&arr[i]);
        check_num(arr[i]);
    }
    return 0;
}

void check_num(int num)
{
    if((num % 2) == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);
}