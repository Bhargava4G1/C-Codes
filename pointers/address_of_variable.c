/*
*   Program to print address of variables using address operator
*/

#include <stdio.h>
int main()
{
    int age = 20;
    float salary = 1029.40;
    printf("Address of age = %p\n",&age);
    printf("Address of salary = %p\n",&salary);
    return 0;
}