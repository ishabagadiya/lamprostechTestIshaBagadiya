#include<stdio.h>

void main()
{
    int n, arr[50];
    printf("\nHow many elements are there?\n");
    scanf("%d", &n);
    printf("\nEnter array elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
// logic- take 1st element save it as maximum sub array now add one by one value if you get higher value then make it max.
    
    int max=arr[0];
//1st element as maximum
    for (int j = 0; j < n; j++)
    {
        //this loop is for taking one by one value in sequence i.e. starting sub loop from 1st 2nd 3rd or as like this manner
        if(arr[j]>=max)
        {
            //compare is another is maximum or not
            max=arr[j];
        }
        int sum=arr[j];
        for (int k = j+1; k < n; k++)
        {
            //this loop is for adding consecutive elements and check whethere it is more or not.
            sum=sum+arr[k];
            if(sum>=max)
            {
                max=sum;
            }
        }  
    }
    printf("maximum subarray=%d", &max);
    
}