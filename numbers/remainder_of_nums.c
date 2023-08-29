/*
    Read two numbers and find remainder of two numbers
*/

#include <stdio.h>
int main()
{
    int num1,num2, rem;
    printf("Enter number 1: ");
    scanf("%d",&num1);
    printf("Enter number 2: ");
    scanf("%d",&num2);
    rem = num1 % num2;
    printf("Remainder of %d and %d is %d\n",num1,num2, rem);
    return 0;
}
