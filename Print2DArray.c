void Print2DArray(int array[20][20], int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}