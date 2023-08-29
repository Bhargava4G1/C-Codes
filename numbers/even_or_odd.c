/*
    Read a number and find even or odd
*/

#include <stdio.h>
int main()
{
    int num1;
    printf("Enter number 1: ");
    scanf("%d",&num1);
    if(num1 % 2 == 0)
        printf("%d is Even Number\n",num1);
    else
        printf("%d is Odd Number\n", num1);
    return 0;
}
