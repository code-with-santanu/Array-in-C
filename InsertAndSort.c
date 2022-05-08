/*Choose a no from an array and put all the nos less than that to the left side and
  others to the right side of the choosen no   */

#include <stdio.h>
#include "InsertInArray.c"
#include "Print.c"
#include "SearchFirstOccurrence.c"
#include "Swap.c"

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
