#include<stdio.h>
int get_nbits(int, int);  			//Function Declaration
  
int main()
{
    int num, n, res = 0;			//Initializating variables

    printf("Enter num and n:");
    scanf("%d%d", &num, &n);		//Taking number & no. of bits from user

    res = get_nbits(num, n);		//Storing return value from function call

    printf("Result = %d\n", res);	//Printing return value
}

int get_nbits(int num, int n)		//Function Definition
{
    return (((1<<n)-1) & num);		//Returning value
}
