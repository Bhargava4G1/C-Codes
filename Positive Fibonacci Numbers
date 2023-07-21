/*
DESCRIPTION:- Program to generate positive Fibonacci numbers
SAMPLE INPUT:- 8
SAMPLE OUTPUT:- Enter a number: 8
				        0 1 1 2 3 5 8
 */

#include<stdio.h>
int main()
{
    int num, prev=0, curr=1,nxt_tr=0;		//Initializing required variables
    printf("Enter a number: ");			//Asking user to enter input
    scanf("%d", &num);					//Reading input from user
    if (num >= 0)						//Checking Entered number is positive number or not
    {
        while (nxt_tr<=num)				//Loop for generating series 
        {
            printf("%d ", nxt_tr);		//Printing next term
            prev=curr; 					//Swapping values in variables prev, curr
            curr=nxt_tr;
            nxt_tr=prev+curr;
        }
    }
    else								//print error if entered input is negative
    {
        printf("Invalid input");
    }
    printf("\n");
    return 0;
}
