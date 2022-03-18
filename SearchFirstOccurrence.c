int SearchFirstOccurrence(int arr[], int s, int length)
{
    int Newpos;

       for (Newpos = 0; Newpos < length; Newpos++)
    {
        if (s == arr[Newpos])
        {
            return Newpos;
        }
    }
    return -1;
}