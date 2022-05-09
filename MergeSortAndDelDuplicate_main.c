#include <stdio.h>
#include "MyLibrary.h"

int i, j;

int Merge(int a[], int, int b[], int, int arr[]);
int EliminateDuplicate(int, int, int);

int main()
{
    int a[1000], b[1000], arr[1000], length1, length2, length, d[1000];
    length1 = InsertInArray(a);
    length2 = InsertInArray(b);
    Print(a, length1);
    Print(b, length2);

    // merging....
    length = Merge(a, length1, b, length2, arr);
    Print(arr, length);

    // Sorting...
    Sort(arr, length);
    Print(arr, length);

    // Deleting Duplicate Elements...
    length = EliminateDuplicate(arr, length, d);
    Print(d, length);

    return 0;
}

int Merge(int a[], int length1, int b[], int length2, int arr[])
{
    for (i = 0; i < length1; i++)
    {
        arr[i] = a[i];
    }
    j = 0;
    for (i = length1; i < (length1 + length2); i++)
    {
        arr[i] = b[j++];
    }
    return (length1 + length2);
}

int EliminateDuplicate(int arr[], int length, int d[])
{
    int t = 0, count = 0;
    for (i = 0; i < length; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            d[t++] = arr[i];
        }
        else
        {
            d[t] = arr[i];
        }
    }
    return (t + 1);
}