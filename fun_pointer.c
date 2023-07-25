#include<stdio.h>
int add(int,int);
int sub(int ,int);
int main()
{
        int a,b,res;
        printf("Enter a ");
        scanf("%d",&a);
        printf("Enter b ");
        scanf("%d",&b);
        int (*fun)(int,int);
        fun=add;
        res = fun(a,b);
        printf("Sum of %d and %d is %d\n",a,b,res);
        fun = sub;
        res = fun(a,b);
        printf("Diff of %d and %d is %d\n",a,b,res);
        return 0;
}

int add(int a, int b)
{
        return a+b;
}
int sub(int a, int b)
{
        return a-b;
}
