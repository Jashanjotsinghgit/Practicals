#include<stdio.h>
int main()
{
    int end,i,a=0,sum=0,n;
    int m,n,x,y;
    printf("Enter the limit: ");
    scanf("%d",&end);
    printf("Armstrong number from 1 to %d is\n",end);
    for(i=1;i<end;i++)
  {
    
    n=i;
    while(i>0)
    {
    a=i%10;
    sum= sum + a*a*a;
    i/=10;
    }
    if(n<=9)
    sum=n;
    if(sum==n)
    {
    printf("%d ",sum);
    }
    i=n;
    sum=0;
  }
 return 0;
}

