#include <stdio.h>
#include <stdlib.h>

int max, min,max1,min1;
int a[100];
void maxmin(int i, int j)
{
    int  mid;
    if(i==j)
        min=max=a[i];
    else if (i==j-1)
    {
        if(a[i] <a[j])
        {
            min=a[i];
            max=a[j];
        }
        else
        {
            min=a[j];
            max=a[i];
        }
    }
    else
    {
        mid = (i+j)/2;
        maxmin (0,mid);
        if(max>max1)
            max1=max;
        if(min<min1)
            min1 = min;
        
        
        maxmin(mid+1,j);
        if(max>max1)
            max1=max;
        if(min<min1)
            min1 = min;
    }
}
void main()
{
    int i,n;
    printf("Enter the no. of elements: ");
    scanf("%d", &n);
    printf("\nThe array is: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
      
    }
    for(i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
    min1 = max1 = a[0];

    maxmin(0, n-1);
    
    printf("\n\nThe maximum value is: %d", max1);
    printf("\nThe minmium value is: %d\n", min1);
}