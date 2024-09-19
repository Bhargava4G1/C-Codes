/*
 * Name : bhargavasai
 * Date : 19-09-2024
 * Program : WAP toi check number is positive or negative
 * Sample_Input : -1
 * Sample_Output : 
 *   Enter number : -1
 *   -1 is a negative number
 */

#include <stdio.h>

int main()
{
	int num;
	printf("Enter number : ");
	scanf("%d",&num);
	if(num < 0)
		printf("%d is negative number\n",num);
	else if(num == 0)
		printf("%d is Zero\n",num);
	else
		printf("%d is positive number\n",num);
	return 0;
}

