/**************************************************************************************************

Swap two numbers
->Swapping of numbers can be done by using temp variable and without using temp variable
->Swapping without using temp variable can be done by Arithmetic operators / Bit-wise operators

****************************************************************************************************/

//Swapping using temp variable 

#if 1

#include <stdio.h>
int main()
{
    int num1,num2,temp;
    printf("Numbers Swapping using Temp Variable\n\n");
    
    printf("Enter first number ");
    scanf("%d",&num1);
    
    printf("Enter second number ");
    scanf("%d",&num2);
    
    printf("\nBefore Swapping\t");
    printf("Num1 - %d Num2 - %d\n",num1,num2);
    
    temp = num1;
    num1 = num2;
    num2 = temp;
    
    printf("After Swapping\t");
    printf("Num1 - %d Num2 - %d\n",num1,num2);
    
    return 0;
}

#endif

//Swapping without using Arithmetic operators

#if 0

#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Numbers Swapping using Arithmetic operators\n\n");
    printf("Enter first number ");
    scanf("%d",&num1);
    
    printf("Enter second number ");
    scanf("%d",&num2);
    
    printf("\nBefore Swapping\t");
    printf("Num1 - %d Num2 - %d\n",num1,num2);
    num1 = num1+num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After Swapping\t");
    printf("Num1 - %d Num2 - %d\n",num1,num2);
    
    return 0;
}
#endif

//Swapping without using Bit-wise Operator (^)

#if 0

#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Numbers Swapping using (^)\n\n");
    
    printf("Enter first number ");
    scanf("%d",&num1);
    
    printf("Enter second number ");
    scanf("%d",&num2);
    
    printf("\nBefore Swapping\t");
    printf("Num1 - %d Num2 - %d\n",num1,num2);
    
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
    
    printf("After Swapping\t");
    printf("Num1 - %d Num2 - %d\n",num1,num2);
    
    return 0;
}
#endif
