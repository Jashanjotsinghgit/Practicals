#include<stdio.h>
int main()
{
    int end,i,j,a,prime;
    printf("Enter the limit: ");
    scanf("%d",&end);
    printf("Prime numbers from 2 to %d is:\n",end);
    for(i=2;i<=end;i++)
    {
        prime=1;
     for(j=2;j<i;j++)
    {
        a=i%j;
     if(a==0)
     prime=0;
    }
    if(prime==1)
    printf("%d ",i);
    }
    return 0;
}