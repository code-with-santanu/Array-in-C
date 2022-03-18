#include <stdio.h>

int Swap(int array[])
{
    int i;
    i = array[0];
    array[0] = array[1];
    array[1] = i;
}
int main()
{
    int arr[2];
    printf("\nEnter two numbers: ");
    scanf("%d %d", &arr[0], &arr[1]);
    Swap(arr);
    printf("%d\t%d", arr[0], arr[1]);

    return 0;
}
