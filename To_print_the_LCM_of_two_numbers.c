#include<stdio.h>
int main()
{
    int i,n1,n2,max,lcm;
    printf("enter the values of n1 and n2:");
    scanf("%d %d",&n1,&n2);
    max=((n1>n2)? n1:n2);
    for(i=1;i<max;i++)
    {
        if((max%n1==0) && (max%n2==0));
        {
            printf("the lcm of %dand %d is %d",n1,n2,max,lcm);
            break;
        }
        max++;
    }
}
