#include<stdio.h>
int main()
{
    int arr[100];
    int i,n,max,min;
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("maximum elements:%d\n",max);
    printf("minimum elements:%d\n",min);
    return 0;
    
        }