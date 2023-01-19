/*=== Searching algorithm is used to search if the data is present in array or not.If found , return it's position, else -1 ===*/

// Best case- O(1)     worst case- O(n)
int LinearSearch(int *arr,int size,int targetNo)
{
    int i;

    for (i = 0; i < size; i++)
    {
        if(arr[i]==targetNo)
        {
            return i;
        }
    }

    return -1;
}


//Only for sorted array and can't be used in linked list
// Best case- O(1)     worst case- O(log(n))
int BinarySearch(int *arr,int size,int targetNo)
{
    int low,mid,high;
    low=0;
    high=size-1;

    //keep searching until low and high converges
    while(low<=high)
    {
        mid = (low + high) / 2;
        if(arr[mid]==targetNo)
        {
            return mid;
        }
        // If no is larger, no is in upper part
        else if(arr[mid] < targetNo)
        {
            low = mid + 1;
        }
        //If no is smaller, no is in the lower part
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}


//Applicable for sorted array and data should be uniformly distributed
// Best case- O(1)     worst case- O(log(log n))
int InterpolationSearch(int *arr,int size, int targetNo)
{
    int low, pos, high;
    low=0;
    high = size - 1;

    //for 1 ele present in array(to avoid zero devision error)
    if(size==1)
    {
        if(arr[0]==targetNo)
            return 0;
        else
            return -1;
    }

    while (low<=high)
    {
        pos = low + (((targetNo-arr[low]) / (arr[high]-arr[low])) * (high-low));
        if(arr[pos]==targetNo)
        {
            return pos;
        }
        // If no is larger, no is in upper part
        else if(arr[pos]<targetNo)
        {
            low = pos+1;
        }
        //If no is smaller, no is in the lower part
        else
        {
            high = pos-1;
        }
    }
    
    return -1;
}