#include<stdio.h>
int main()
{
   int arr[100];
   int i,j,n,count=0;
  scanf("%d",&n);
   printf("enter the elements");
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i++)
   {
   for(j=i+1;j<n;j++)
   {
       if(arr[i]==arr[j])
       {
           count++;
           break;
       }
   }
}
printf("duplicate number in the array=%d",count);
return 0;
}
