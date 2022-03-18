void ArrayModification(int arr[], int choice, int length)
{
    int left, right;
    left = 0;
    right = length - 1;
    while (left < right)
    {
        while (left < length && arr[left] < choice)
        {
            left++;
        }
        while (right < length && arr[right] > choice)
        {
            right--;
        }
        if (left < right)
        {
            Swap(arr, left, right);
        }
    }
}