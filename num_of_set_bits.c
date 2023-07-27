#include<stdio.h>

int my_pow(int, int );              //Function prototype for finding power

int main()
{
        int num, rem, bin=0, i = 0, cn = 0;        //Variables declaration
        printf("Enter the number: ");
        scanf("%d",&num);                          //Reading number from user
        int n = num;
        while(num != 0)                            //loop runs till number is '0'
        {
                rem = num % 2;                    //Finding remainder
                bin += rem * my_pow(10,i);        
                if(rem)
                        cn++;                     //Condition for counting number of set bits
                num = num / 2;            
                i++;
        }
        printf("Number of set bits= %d\n",cn);
        if(cn % 2 == 0)                              //Condition for checking bit parity
                printf("Bit parity is Even\n");
        else
                printf("Bit parity is Odd\n");
//      printf("Binary form of %d is %d\n",n,bin);

        return 0;
}
//Function definition for power
int my_pow(int num, int p)
{
        int res = 1;
        while(p)
        {
                res = res * num;
                p--;
        }
        return res;
}
