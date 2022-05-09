#include <stdio.h>
#include "MyLibrary.h"

void IncreaseValue(int arr[], int);

int main()
{
    int arr[10], length;
    InsertInArray(arr);
    length = InsertInArray(arr);
    Print(arr, length);

    IncreaseValue(arr, length);
    Print(arr, length);

    return 0;
}

void IncreaseValue(int arr[], int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        arr[i]++;
    }
}