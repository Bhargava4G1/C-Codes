/*
    Read two numbers and perform subtraction
*/

#include <stdio.h>
int main()
{
    int num1,num2, sum=0;
    printf("Enter number 1: ");
    scanf("%d",&num1);
    printf("Enter number 2: ");
    scanf("%d",&num2);
    sum = num1 - num2;
    printf("Difference of %d and %d is %d\n",num1,num2, sum);
    return 0;
}
