#include<stdio.h>
#include<stdlib.h>
#include "ArrayLibrary.h"

//compile with InsertAndPrintArray.c , SortingAlgo.c , Swap.c

int Window(int arr[],int length, int key)
{
    int MinDiff, i, j, dif;

    MinDiff = arr[length - 1] - arr[0];
    i = 0;
    while(i+key-1 < length)
    {
        dif = arr[i+key-1] - arr[i];

        if (dif < MinDiff)
        {
            MinDiff = dif;
        }
        i++;
    }
    


    return MinDiff;
}

int main()
{
    int *arr,length ,Mindifference,key;

    printf("\nEnter the length of the array: ");
    scanf("%d", &length);

    arr = (int *)malloc(sizeof(int) * length);
    InsertIn1DArray(arr, length);
    printf("\nThe given array .\n");
    Print1DArray(arr, length);

    MergeSort(arr, 0, length-1);
    
    printf("\nEnter the value of key: ");
    scanf("%d", &key);

    Mindifference = Window(arr, length, key);

    printf("\nThe minimum diffenrence is: %d", Mindifference);

    return 0;
}