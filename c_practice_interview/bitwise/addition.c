/*
*   BITWISE ADDITION
*/

#include<stdio.h>

int bitWiseAddition(int n1, int n2)
{
    int carry = 0;
    while (n2 != 0)
    {
        carry = n1 & n2;
        n1 = n1 ^ n2;
        n2 = carry << 1;
    }
    return n1;
    
}

int main()
{
    int num1, num2;
    printf("Enter num1 : ");
    scanf("%d",&num1);
    printf("Enter num2 : ");
    scanf("%d",&num2);
    printf("Sum of %d and %d is %d\n",num1, num2, bitWiseAddition(num1, num2));
}