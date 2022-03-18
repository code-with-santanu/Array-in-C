int InsertInArray(int arr[])
{
    int i, n;
    printf("\nhow many no want to input: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter a no: ");
        scanf("%d", &arr[i]);
    }
    return n;
}