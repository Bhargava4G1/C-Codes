/*
    Read two numbers and find out quotient of two numbers
*/

#include <stdio.h>
int main()
{
    int num1,num2, q;
    printf("Enter number 1: ");
    scanf("%d",&num1);
    printf("Enter number 2: ");
    scanf("%d",&num2);
    q = num1 / num2;
    printf("Quotient of %d and %d is %d\n",num1,num2, q);
    return 0;
}
