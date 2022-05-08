int DeleteElementAtPosition(int arr[], int NewPos, int length)
{
    while (NewPos < length)
    {
        arr[NewPos] = arr[NewPos + 1];
        NewPos++;
    }
    length--;
    return length;
}