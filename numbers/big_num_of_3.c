/*
	Program to find biggest number from three given numbers
*/

#include<stdio.h>
int main()
{
	int num1, num2,num3, big;
	printf("Enter num1: ");
	scanf("%d",&num1);
	printf("Enter num2: ");
	scanf("%d",&num2);
	printf("Enter num3: ");
	scanf("%d",&num3);
	if(num1 > num2)
		if(num1 > num3)
			big = num1;
		else
			big = num3;
	else
		if(num2 > num3)
			big = num2;
		else
			big = num3;
	printf("Biggest of three numbers is %d\n",big);
	return 0;
}
