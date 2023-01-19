void Swap(int *arr, int left, int right)
{
    int temp;
    temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;
}