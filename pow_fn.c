/******************************************************************************

calculating power of x^n pow(x,n)

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, p, i=1;
    long int result = 1;
    printf("Enter number ");
    scanf("%d",&num);
    printf("Enter power ");
    scanf("%d",&p);
    while(i++ <= p)
    {
        result = result * num;
        //i++;
    }
    printf("Pow(%d, %d) = %ld",num,p,result);

    return 0;
}
