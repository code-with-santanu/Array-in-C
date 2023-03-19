#include <stdio.h>

void MergSortedArray(int arr[], int low, int mid, int high)
{
    int b[10];
    int i = low, j = mid+1;
    int k = low;

    while(i<=mid && j<=high)
    {
        if(arr[i]< arr[j])
        {
            b[k] = arr[i];
            i++;
            k++;
        }

        else
        {
            b[k] = arr[j];
            j++;
            k++;
        }

    }
     while(i<=mid)
        {
            b[k] = arr[i];
            i++;
            k++;
        }
        while(j<=high)
        {
            b[k] = arr[j];
            j++;
            k++;
        }

    for (i = low; i <= high;i++)
    {
        arr[i] = b[i];
    }
}

void MergeSort(int arr[],int low, int high)
{
    int mid;

    if (low<high)
    {
        mid = (low + high) / 2;
        MergeSort(arr, low, mid);
        MergeSort(arr, mid + 1, high);

        MergSortedArray(arr, low, mid, high);
    }
}

void Insert(int arr[],int length)
{
    int i;

    for (i = 0; i < length;i++)
    {
        printf("\nEnter a no: ");
        scanf("%d", &arr[i]);
    }
}

void Print(int arr[], int length)
{
    int i;

    for (i = 0; i < length;i++)
    {
        printf("%d\t", arr[i]);
    }
}

int Window(int arr[],int length, int key)
{
    int MinDiff, i, j, dif;

    MinDiff = arr[length - 1] - arr[0];
    i = 0;
    while(i+key-1 < length)
    {
        j = i + key - 1;
        
        
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
    int arr[8],length ,Mindifference,key;

    printf("\nEnter the length of the array: ");
    scanf("%d", &length);

    Insert(arr, length);
    printf("\nThe given array .\n");
    Print(arr, length);

    MergeSort(arr, 0, length-1);
    
    printf("\nEnter the value of key: ");
    scanf("%d", &key);

    Mindifference = Window(arr, length, key);

    printf("\nThe minimum diffenrence is: %d", Mindifference);

    return 0;
}

