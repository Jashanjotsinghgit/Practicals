#include<stdio.h>
int main()
{
    int sum,n,i,p;
    printf("Enter the Number: ");
    scanf("%d",&n);
    sum=0;
    for(i=0;i<n;i++)
    {
        printf("Enter the %d number: ",i+1);
        scanf("%d",&p);
        sum=sum+p;
        p=0;
    }
    printf("\nThe count of your entered number is %d",sum);
    return 0;
}