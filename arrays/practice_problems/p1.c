/*
*   Program to convert decimal number to Binary, Octal or Hexadecimal
*/

#include <stdio.h>

void func(int num, int n);

int main()
{
    int num, ch;
    printf("Enter a decimal number : ");
    scanf("%d", &num);
    while(1)
    {
        printf("------------------------------\n");
        printf("1. Binary\n2. Octal\n3. Hexadecimal\n4. Enter decimal num\n5. Exit\n");
        printf("------------------------------\n");
        printf("Enter choice : ");
        scanf("%d",&ch);
        printf("------------------------------\n");
        switch(ch)
        {
            case 1:
                printf("Binary Equivalent is : ");
                func(num, 2);
                break;
            case 2:
                printf("Octal Equivalent is : ");
                func(num, 8);
                break;
            case 3:
                printf("Hexadecimal Equivalent is : ");
                func(num, 16);
                break;
            case 4:
                printf("Enter a Decimal number : ");
                scanf("%d",&num);
                break;
            case 5:
                return 0;
        }

        printf("\n");


    }
    
    return 0;
}

void func(int num, int n)
{
    int i = 0, j, rem;
    char arr[20];
    while(num > 0)
    {
        rem = num % n;
        num /= n;
        if(rem > 9 && rem < 16)
            arr[i++] = rem - 10 + 'A';
        else
            arr[i++] = rem + '0';
    }
    for(j = i - 1; j >= 0; j--)
        printf("%c",arr[j]);
}
