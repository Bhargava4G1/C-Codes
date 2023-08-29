/*
    Read two numbers and perform Multiplication
*/

#include <stdio.h>
int main()
{
    int num1,num2, mul;
    printf("Enter number 1: ");
    scanf("%d",&num1);
    printf("Enter number 2: ");
    scanf("%d",&num2);
    mul = num1 * num2;
    printf("Product of %d and %d is %d\n",num1,num2, mul);
    return 0;
}
