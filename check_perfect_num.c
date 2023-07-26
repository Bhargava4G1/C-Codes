#include<stdio.h>
int main()
{
    int num, i, rem, sum=0;         //Initializing variables
    printf("Enter a number: ");     //Printing a message to provide required input from user
    scanf("%d",&num); 				//Reading input from user
    if (num > 0)					//Checking the user entered number is positve or not
    {
        for (i=1; i<num; i++)  		//Iterating till num times
        {
            if (num%i==0)			//condition for getting factors of number
            {
                sum=sum+i;			//Adding all factors and storing it in sum
            }
        }
        if (num == sum)				//Checking if given number is equal to sum or not 
        {
            printf("Yes, entered number is perfect number\n");
        }
        else
        {
            printf("No, entered number is not a perfect number\n");
        }
    }
    else							//Prints errors if given number is negative
    {
        printf("Error : Invalid Input, Enter only positive number\n");
    }
        return 0;
}
