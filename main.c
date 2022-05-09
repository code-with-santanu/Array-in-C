#include <stdio.h>
#include "MyLibrary.h"
#include "SearchAndDelete.c"

int main()
{
    int arr[10000], length, s, oc, NewPos, rev, del;
    length = InsertInArray(arr);
    Print(arr, length);

    // Reverse the array
    printf("\nPress 1 to reverse the array or to avoid this press any other key :");
    scanf("%d", &rev);
    if (rev == 1)
    {
        Reverse(arr, length);
        Print(arr, length);
    }

    // Searching and Deleting element from the array
    printf("\nPress 1 to delete any element or to avoid this press any other key :");
    scanf("%d", &del);
    if (del == 1)
    {
        printf("\nEnter a no to search: ");
        scanf("%d", &s);

        printf("\nEnter choice:- \npress 1 for 1st ocurrence \npress 2 for 2nd ocurrence \npress 3 for all ocurrence\n: ");
        scanf("\t\t\t\t\t%d", &oc);

        SearchAndDelete(arr, s, length, oc);

        length = DeleteElementAtPosition(arr, NewPos, length);
        Print(arr, length);
    }

    return 0;
}