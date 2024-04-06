/*
*   Program to input and display a matrix
*/

#include <stdio.h>

#define ROW 3
#define COL 4

int main()
{
    int i, j, mat[ROW][COL];
    printf("Enter the elements of (%d X %d) row-wise : \n",ROW,COL);
    for(i = 0; i < ROW; i++)
        for(j = 0; j < COL; j++)
            scanf("%d", &mat[i][j]);
    printf("The matrix entered is : \n");
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
    return 0;
}