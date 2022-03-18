int SearchAndDelete(int arr[], int s, int length, int oc)
{
    int count, NewPos;

    switch (oc)
    {
    case 1:
    {
        NewPos = SearchFirstOccurrence(arr, s, length);
        length = DeleteElementAtPosition(arr, NewPos, length);
    }
    break;
    case 2:
    {
        count = 0;
        while (count < 2)
        {
            NewPos = SearchFirstOccurrence(arr, s, length);
            length = DeleteElementAtPosition(arr, NewPos, length);
            count++;
        }
    }
    break;

    case 3:
    {
        while (SearchFirstOccurrence(arr, s, length) != -1)
        {
            NewPos = SearchFirstOccurrence(arr, s, length);
            length = DeleteElementAtPosition(arr, NewPos, length);
        }
    }
    break;
    default:
        printf("\nInvalid option");
        break;
    }
}