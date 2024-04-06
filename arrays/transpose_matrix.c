/*
*   Transpose of matrix
*/

#include <stdio.h>

#define ROW 3
#define COL 4


int main()
{
    int i,j,mat1[ROW][COL], mat2[COL][ROW];
    printf("Enter mat1 (%dX%d) row-wise : \n", ROW,COL);
    for(i = 0; i < ROW; i++)
        for(j = 0; j < COL; j++)
            scanf("%d",&mat1[i][j]);
    //Transpose
    printf("Transpose of mat is \n");
    for(i = 0; i < COL; i++)
        for(j = 0; j < ROW; j++)
            mat2[i][j] = mat1[j][i];

    for(i = 0; i < COL; i++)
    {
        for(j = 0; j < ROW; j++)
            printf("%d\t",mat2[i][j]);
        printf("\n");
    }
    
    return 0;
}