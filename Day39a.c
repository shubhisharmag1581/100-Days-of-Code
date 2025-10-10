//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

int main()
{
    int i, j, a[100][100];
    int row, column;

    printf("Enter the row of matrix: ");
    scanf("%d", &row);
    printf("Enter the column of matrix: ");
    scanf("%d", &column);

    if (row != column) {
        printf("False\n");
        return 0;
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < row - 1; i++) {
        for (j = i + 1; j < row; j++) {
            if (a[i][i] == a[j][j]) {
                printf("False\n");
                return 0;
            }
        }
    }
    printf("True\n");
    return 0;
}







