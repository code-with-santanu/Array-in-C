#include<stdio.h>

//Function to insert elements into a 1D array
void InsertIn1DArray(int *arr,int length)
{
    int i;

    for (i = 0; i < length; i++)
    {
        printf("\nEnter a no: ");
        scanf("%d", &arr[i]);
    }
}


//Function to print the elements of a 1D array
void Print1DArray(int *arr, int length)
{
    int k;
    for (k = 0; k < length; k++)
    {
        printf("\t%d", arr[k]);
    }
    printf("\n");
}


//Function to insert elements into a 2D array
void InsertIn2DArray(int **array, int row, int col)
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


//Function to print the elements of a 2D array
void Print2DArray(int **array, int row, int col)
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