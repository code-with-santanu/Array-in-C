#include<stdlib.h>
#include "ArrayLibrary.h"

void BubbleSort(int *arr, int length)
{
    int i, j;

    for (i = 0; i < length-1; i++)
    {
        for (j = i + 1; j < length; j++)
        {
            if (arr[i] > arr[j])
            {
                Swap(arr, i, j);
            }
        }
    }
}

void SelectionSort(int *arr, int length)
{
    int i,j,indexOfMin;

    for (i = 0; i < length - 1; i++)
    {
        indexOfMin=i;

        for (j = i + 1; j < length; j++)
        {
            if(arr[j] < arr[indexOfMin])
            {
                indexOfMin=j;            
            }
        }
        Swap(arr,i,indexOfMin);        
    }
}

void InsertionSort(int *arr,int length)
{
    int i, j, key;
    //loop for passes
    for (i = 1; i < length;i++)
    {
        key = arr[i];
        j = i - 1;
        //loop for each passes
        while(j>=0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}


//This function will merge two sorted portion of a single array
void MergeSortedArray(int *arr, int low, int mid, int high)
{
    int i, j, k=0;
    int size = low + high + 1;
    int *b = malloc(sizeof(int) * size);

    i = low;
    j = mid + 1;
    k = low;

    while (i<=mid && j<=high)
    {
        if(arr[i] < arr[j])
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
    while (j<=high)
    {
        b[k] = arr[j];
        j++;
        k++;
    }
    
    //copy the sorted data to the original array
    for (i = low; i <= high;i++)
    {
        arr[i] = b[i];
    }
}

void MergeSort(int *arr, int low, int high)
{
    int mid;
    if(low < high)
    {
        mid = (low + high) / 2;

        MergeSort(arr, low, mid);
        MergeSort(arr, mid + 1, high);

        MergeSortedArray(arr, low, mid, high);
    }
}


// This func is for Quick sort algo
int Partition(int *arr, int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    do
    {
        while(arr[i] <= pivot)
        {
            i++;
        }

        while(arr[j] > pivot)
        {
            j--;
        }

        if(i < j)
        {
            Swap(arr, i, j);
        }
    } while (i < j);

    Swap(arr, low, j);

    // The new index will be j after swapping
    return j;
}

void QuickSort(int *arr, int low, int high)
{
    int partitionIndex;

    if(low < high)
    {
        partitionIndex = Partition(arr, low, high);   //Index of pivot after partition

        QuickSort(arr, low, partitionIndex);        //Sort left subArray
        QuickSort(arr, partitionIndex + 1, high);   //sort right subArray
    }
}

int main()
{
    int *a = malloc(sizeof(int) * 7);
    InsertIn1DArray(a, 7);
    Print1DArray(a,7);
    QuickSort(a,0,6);
    Print1DArray(a,7);

    return 0;
}