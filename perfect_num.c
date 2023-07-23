/*
C Program to check the entered number is perfect number or not
*/  
#include<stdio.h>

int main()
{
        int num, i, rem, sum = 0;
        printf("Enter a number : ");
        scanf("%d",&num);
        if(num > 0)                  /*Checking number is positive or not*/
        {
                for(i = 1; i < num; i++)     /*Loop runs num times*/
                {
                        if(num%i == 0)      /*Condition for getting factors of num*/
                        {
                                sum = sum + i;    /*Adding all factors and storing in sum*/
                        }
                }
                if(num == sum)    /*Checking sum is equal to number*/
                {
                        printf("%d is prefect number\n",num);
                }
                else
                {
                        printf("%d is not a perfect number\n",num);
                }
        }
        else
        {
                printf("Error : Invalid Input, Enter only positive number\n");
        }

        return 0;
}
