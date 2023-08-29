/*
    Read a number and find even or odd
*/

#include <stdio.h>
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    if(num % 2 == 0)
        printf("%d is Even Number\n",num);
    else
        printf("%d is Odd Number\n", num);
    return 0;
}
