int Sort(int arr[], int length)
{
    int i, j, min;
    min = arr[0];
    for (i = 0; i < length; i++)
    {
        for (j = i + 1; j < length; j++)
        {
            if (arr[i] > arr[j])
            {
                Swap(arr[1000], i, j);
            }
        }
    }
}