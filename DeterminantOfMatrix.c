#include <stdio.h>
#include "ArrayLibrary.h"

int main()
{
    int a[20][20];
    long int det;

    InsertIn2DArray(a, 3, 3);
    Print2DArray(a, 3, 3);

    det = a[0][0] * ((a[1][1] * a[2][2]) - (a[2][1] * a[1][2])) + a[0][1] * ((a[2][0] * a[1][2]) - (a[1][0] * a[2][2])) + a[0][2] * ((a[1][0] * a[2][1]) - (a[2][0] * a[1][1]));
    printf("\nThe determinant of the matrix is: %ld", det);

    return 0;
}