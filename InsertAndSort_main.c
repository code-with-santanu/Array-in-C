/*Choose a no from an array and put all the nos less than that to the left side and
  others to the right side of the choosen no   */

#include <stdio.h>
#include "MyLibrary.h"

void ArrayModification(int arr[], int, int);

int main()
{
    int arr[100000], length, choice, tempPos;
    int L, R;
    length = InsertInArray(arr);
    Print(arr, length);

    printf("\nChoose a no from the array: ");
    scanf("%d", &choice);

    ArrayModification(arr, choice, length);
    Print(arr, length);

    return 0;
}

void ArrayModification(int arr[], int choice, int length)
{
    int left, right;
    left = 0;
    right = length - 1;
    while (left < right)
    {
        while (left < length && arr[left] < choice)
        {
            left++;
        }
        while (right < length && arr[right] > choice)
        {
            right--;
        }
        if (left < right)
        {
            Swap(arr, left, right);
        }
    }
}
