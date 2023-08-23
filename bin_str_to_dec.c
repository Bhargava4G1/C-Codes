#include<stdio.h>

int bin_dec(char *);
int mystrlen(char *);
int main()
{
    char binstr[100];
    printf("Enter a binary number : ");
    scanf("%s",binstr);
    
    int decval = bin_dec(binstr);
    printf("Binary Equivalent of %s is %d\n",binstr,decval);
    return 0;
}

int bin_dec(char *binstr)
{
    int dec = 0;
    int len = mystrlen(binstr);
    
    for(int i = len - 1, pos = 0; i >= 0; i--, pos++)
    {
        if(binstr[i] == '1')
        {
            dec += (1 << pos);
        }
    }
    return dec;
}

int mystrlen(char *str)
{
    int len =0;
    while(*str++ != '\0')
        len++;
    return len;
}
