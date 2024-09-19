/*
 * Name : bhargavasai
 * Date : 19-09-2024
 * program : WAP to read 2 numbers and print the biggest of two numbers 
 * Sample_Input :  10 15
 * Sample_Output :  
 *      Enter 2 numbers : 10 15
 *      15 is the biggest of given numbers
 */

#include <stdio.h>

int main()
{
	int num1, num2;
	printf("Enter 2 numbers : ");
	scanf("%d %d",&num1, &num2);
	if(num1 > num2)
	{
		printf("%d is biggest of given numbers\n",num1);
	}
	else
	{
		printf("%d is biggest of given numbers\n",num2);
	}
	return 0;
}

