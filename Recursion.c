#include<stdio.h>

void loop(int);
int arr[3];

void Recursion(int i,int j,int k)
{
    if(k==0)
    {
        return;
    }
    else
    {
        k = k - 1;
        if(j==0)
        {
            return;
        }
        else
        {
            j = j - 1;
            if(i==0)
            {
                return;
            }
            else
            {
                i = i - 1;
                Recursion(i,j,k);
                printf("\n%d%d%d",i,j,k);
                return;
            }
        }
    }
    return;
}

int main()
{
    int n = 999;
    //Recursion(n);

    // for (int i = 0; i < 10;i++)
    // {
    //     for (int j = 0; j < 10;j++)
    //     {
    //         for (int k = 0; k < 10;k++)
    //         {
    //             printf("\n%d%d%d\t", i, j, k);
    //         }
    //     }
    // }

    loop(3);

    return 0;
}

void loop(int n)
{
    if(n==0)
    {
        printf("%d%d%d\t",arr[0],arr[1],arr[2]);
        return;
    }
        for (int i = 0; i < 10;i++)
        {
            arr[n-1] = i;
            //printf("%d", i);
            loop(n - 1);
        }
}

