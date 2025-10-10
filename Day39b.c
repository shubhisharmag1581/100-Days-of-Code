//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>

int main()
{
    int row, column, a[100][100];
    int i, sum = 0;

    scanf("%d %d", &row, &column);

    if (row != column) {
        printf("0\n");
        return 0;
    }

    for (i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &a[i][j]);
        }
        sum += a[i][i];
    }

    printf("%d\n", sum);
    return 0;
}




