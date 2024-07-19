#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of an array:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    j=0;
    for(i=0;i<n;i++)
{
        if(arr[i]<0)
        {
            if(i!=j)
            {
                arr[k]=arr[k+1];
            }
            size--;
            j--;
        }
    }
}
printf("array elements after deletion of duplicate elements:");
for(i=0;i<size;i++)
{
    printf("%d\t",arr[i]);
}
return 0; 
    }
