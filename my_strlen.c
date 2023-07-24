#include<stdio.h>
int my_strlen(const char *str);

int main()
{
        char str[50];
        int len = 0;

        char *str1 = str;
        printf("Enter the string : ");
        scanf("%[^\n]",str);
        len = my_strlen(str);
        printf("length of the string %s is %d\n",str,len);
        return 0;
}
int my_strlen(const char *str)
{
        int len = 0;
        while(str[len] != '\0')
                len++;
        return len;
}
