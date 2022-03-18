void Print(int arr[], int length)
{
    int k;
    for (k = 0; k < length; k++)
    {
        printf("\t%d", arr[k]);
    }
    printf("\b");
}