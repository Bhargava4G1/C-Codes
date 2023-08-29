/*
    Read two numbers and perform subtraction
*/

#include <stdio.h>
int main()
{
    int num1,num2, sub=0;
    printf("Enter number 1: ");
    scanf("%d",&num1);
    printf("Enter number 2: ");
    scanf("%d",&num2);
    sub = num1 - num2;
    printf("Difference of %d and %d is %d\n",num1,num2, sub);
    return 0;
}
