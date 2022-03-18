#include <stdio.h>
#include "InsertInArray.c"
#include "Print.c"
#include "SearchFirstOccurrence.c"
#include "Swap.c"
#include "ArrayModification.c"

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