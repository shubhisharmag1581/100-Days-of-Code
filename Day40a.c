//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main()
{
    int row, column, a[100][100];
    int i, j, k;

    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &column);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal Traversal Output:\n");
    for (k = 0; k <= row + column - 2; k++) {
        if (k % 2 == 0) {
            for (i = (k < row ? k : row - 1); i >= 0; i--) {
                j = k - i;
                if (j >= 0 && j < column)
                    printf("%d ", a[i][j]);
            }
        } else {
            for (i = 0; i <= k; i++) {
                j = k - i;
                if (i < row && j >= 0 && j < column)
                    printf("%d ", a[i][j]);
            }
        }
    }
    printf("\n");
    return 0;
}

