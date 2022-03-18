void Swap(int arr[], int left, int right)
{
    int i;
    i = arr[left];
    arr[left] = arr[right];
    arr[right] = i;
}