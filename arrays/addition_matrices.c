/*
*   Addition of two matrices
*/

#include <stdio.h>

#define ROW 3
#define COL 4

int main()
{
    int i,j,mat1[ROW][COL], mat2[ROW][COL], mat3[ROW][COL];
    printf("Enter mat1 (%dX%d) row-wise : \n", ROW,COL);
    for(i = 0; i < ROW; i++)
        for(j = 0; j < COL; j++)
            scanf("%d",&mat1[i][j]);
    printf("Enter mat2 (%dX%d) row-wise : \n", ROW,COL);
    for(i = 0; i < ROW; i++)
        for(j = 0; j < COL; j++)
            scanf("%d",&mat2[i][j]);
    //addition
    for(i = 0; i < ROW; i++)
        for(j = 0; j < COL; j++)
            mat3[i][j] = mat1[i][j] + mat2[i][j];
    printf("Addition of mat1 and mat2 is \n");
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
            printf("%d   ", mat3[i][j]);
        printf("\n");
    }
    return 0;
}