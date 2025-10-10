//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>

int main()
{
    int i, j, k;
    int row1, row2, column1, column2;
    int matrix1[10][10], matrix2[10][10], product[10][10];

    printf("Enter the row and column of matrix1: ");
    scanf("%d%d", &row1, &column1);
    printf("Enter the elements of matrix1:\n");
    for(i = 0; i < row1; i++)
    {
        for(j = 0; j < column1; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the row and column of matrix2: ");
    scanf("%d%d", &row2, &column2);
    printf("Enter the elements of matrix2:\n");
    for(i = 0; i < row2; i++)
    {
        for(j = 0; j < column2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    if (column1 != row2) {
        printf("Matrix multiplication not possible due to incompatible dimensions.\n");
        return 0;
    }

    // Initialize product matrix to zero
    for(i = 0; i < row1; i++)
    {
        for(j = 0; j < column2; j++)
        {
            product[i][j] = 0;
        }
    }

    // Multiply matrices
    for(i = 0; i < row1; i++)
    {
        for(j = 0; j < column2; j++)
        {
            for(k = 0; k < column1; k++)
            {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("The Product:\n");
    for(i = 0; i < row1; i++)
    {
        for(j = 0; j < column2; j++)
        {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}










