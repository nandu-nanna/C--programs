#include<stdio.h>
int main()
{
    int i,j,k,arr[10],size;
    printf("enter the size of the array:");
    scanf("%d",&size);
    printf("enter the elements of an array:",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
{
    for(j=i+1;j<size;j++)
    {
        if(arr[i]==arr[j])
        {
            for(k=j;k<size-1;k++)
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
    
