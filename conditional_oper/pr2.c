/*
 * Name : bhargavasai
 * Date : 19-09-2024
 * Program : WAP to find given number is odd or even
 * Sample_Input :   15
 * Sample_Output :
 *    enter a number : 15
 *    15 is odd number
 *
 */

#include <stdio.h>

int main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	if(num % 2 == 0)
	{
		printf("%d is Even number\n",num);
	}
	else
	{
		printf("%d is Odd number\n",num);
	}
	return 0;
}

