#include <stdio.h>
#include "MyLibrary.h"

int MatrixMultiplication(int a[20][20], int, int, int b[20][20], int, int, int c[20][20]);

int main()
{
    int a[20][20], b[20][20], row1, row2, col1, col2, c[20][20], returnvalue;
    printf("\nEnter the rows and columns of 1st matrix: ");
    scanf("%d%d", &row1, &col1);
    Insert(a, row1, col1);

    printf("\nEnter the rows and columns of 2nd matrix: ");
    scanf("%d%d", &row2, &col2);
    Insert(b, row2, col2);

    Print2DArray(a, row1, col1);
    Print2DArray(b, row2, col2);

    returnvalue = MatrixMultiplication(a, row1, col1, b, row2, col2, c);
    if (returnvalue == 0)
    {
        Print2DArray(c, row1, col2);
    }
    else
    {
        printf("\nInvalid matrices!This multiplication can't be performed!");
    }

    return 0;
}

int MatrixMultiplication(int a[20][20], int row1, int col1, int b[20][20], int row2, int col2, int c[20][20])
{
    int i, j, k;
    if (col1 == row2)
    {
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col2; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < col1; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        return 0;
    }
    else
    {
        return -1;
    }
}