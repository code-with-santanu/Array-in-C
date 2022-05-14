void InsertIn2DArray(int array[20][20], int row, int col)
{
    int i, j;
    printf("\nEnter the elements: ");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
}