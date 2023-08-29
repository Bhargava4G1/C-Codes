/*
    Read a number and find positiv or negative
*/

#include <stdio.h>
int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    if(num > 0)
        printf("%d is Positive Number\n",num);
    else if (num < 0)
        printf("%d is Negative Number\n", num);
    else
        printf("%d is Zero\n",num);
    return 0;
}
