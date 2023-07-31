#include<stdio.h>
int main()
{
    int n,i,p;                            //Initializing variables
    printf("Enter the value of 'n' : ");
    scanf("%d",&n);                       //Reading input as n from user
    if(n>1)                               //Checking user entered value is Positive integer or not
    {
        int arr[n];                       //Initializing an array with size of n
        for(i=2;i<=n;i++)                 //Iterating loop for size times to store values in an array
        {
            arr[i] = i;                   //Storing values in an Array
        }
        for(i=2;i*i<=n;i++)               //Loop runs till square of individual terms less than given number
        {
            if(arr[i] != 0)               //Checkining for non Zero values in array
            {
                for(int j=2*i;j<=n;j +=i)       //Loop to check multiples of the number
                    arr[j] = 0;                 //If any number has multiples, making them as zero
            }

        }
        printf("The primes less than or equal to %d are : %d",n,arr[2]); //Printimg message & first array element
        for(i=3;i<=n;i++)                       //Loop to print remaining array elements
        {
            if(arr[i] != 0)                     //Condition for checking non zero values
                printf(", %d",arr[i]);           //Printing non zero values in an array
        }
    }
    else
        printf("Please enter a positive number which is > 1");   //Printing Error Message if user entered number is non positive integer
    printf("\n");
    return 0;
}
