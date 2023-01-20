#include <stdio.h>
#include<stdlib.h>
#include "ArrayLibrary.h"

void IncreaseValue(int *arr, int);

int main()
{
    int *arr, length;

    printf("\nEnter the length the array: ");
    scanf("%d", &length);

    arr = (int *)malloc(sizeof(int) * length);
    InsertIn1DArray(arr,length);
    Print1DArray(arr, length);

    IncreaseValue(arr, length);
    Print1DArray(arr, length);

    return 0;
}

void IncreaseValue(int *arr, int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        arr[i]++;
    }
}