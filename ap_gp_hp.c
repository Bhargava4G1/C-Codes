#include<stdio.h>
int main()
{
    int a,r,ap,gp,t,i,p,n;           //Initializing integer variables
    float hp;						 //Initializing float variables
    printf("Enter the First Number 'A': ");    
    scanf("%d",&a); 						//Reading first input from user
    printf("Enter the Common Difference / Ratio 'R': ");
    scanf("%d",&r);							//Reading common difference from user
    printf("Enter the number of terms 'N': ");
    scanf("%d",&n);							//Reading numberof terms
    if(n>0)									//Condition to check number entered is positive or not
    {
        printf("AP = ");
        p=a;
        for(i=1;i<=n;i++)					//Iterating loop by n number of times to calculate AP
        {
            ap=a+((i-1)*r);					//calculating arithemetic progression
            printf("%d",ap);				//Printing values of AP
            if(i<n)							//condition for printing ","
                printf(", ");
        }
        printf("\n");
        printf("GP = ");
        for(i=1;i<=n;i++)					//Iterating loop by n number of times to calculate GP
        {
            printf("%d",p);					//Printing values of GP
            if(i<n)							//condition for printing ","
                printf(", ");
            p=p*r;							//calculating GP
        }
        printf("\n");
        printf("HP = ");
        t=a;
        for(i=1;i<=n;i++)					//Iterating loop by n number of times to calculate HP
        {
            hp = 1.0/t;
            t +=r;
            printf("%f",hp);				//Printing values of HP
            if(i<n)							//condition for printing ","
                printf(", ");
        }
        printf("\n");
    }
    else
    {
        printf("Invalid input\n");			//If entered number is negative then it is invalid
    }


    return 0;
}
