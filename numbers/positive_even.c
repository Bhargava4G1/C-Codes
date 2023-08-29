/*
    Read a number and find whether positive or negative, if number 
    is positive then find even or odd.
*/

#include <stdio.h>
int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    if(num > 0)
    {
        if(num % 2 == 0)
        {
            printf("%d is Positive and Even Number\n",num);
        }
        else
        {
            printf("%d is Positive and Odd Number\n",num);
        }
    }
    else if (num < 0)
        printf("%d is Negative Number\n", num);
    else
        printf("%d is neither Positive nor Negative\n",num);
    return 0;
}
