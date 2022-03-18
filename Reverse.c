void Reverse(int arr[], int length)
{
    int k, s;
    for (k = 0; k < length / 2; k++)
    {
        s = arr[k];
        arr[k] = arr[length - 1 - k];
        arr[length - 1 - k] = s;
    }
}