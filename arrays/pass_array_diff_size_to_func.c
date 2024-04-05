/*
*   Program that uses a general function which works on arrays of different sizes
*/

#include<stdio.h>

int add(int val[], int n);

int main()
{
    int a[3] = {1,2,3};
    int b[5] = {1,2,3,4,5};
    int c[6] = {1,2,3,4,5,6};

    printf("Sum of elements of array a : %d\n",add(a,3));
    printf("Sum of elements of array b : %d\n",add(b,5));
    printf("Sum of elements of array c : %d\n",add(c,6));
    return 0;
}

int add(int val[], int n)
{
    int i, sum = 0;
    for(i = 0; i < n; i++)
    {
        sum += val[i];
    }
    return sum;
}