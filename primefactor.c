#include<stdio.h>
int main()
{
    int i=2,factor=1,n,fix;
    printf("Enter the number: ");
    scanf("%d",&n);
    fix=n;
    printf("Prime Factors of %d is ",n);
    while(factor!=fix)
    {
        while(n%i==0)
        {
            factor=factor*i;
            if(factor==fix)
            printf("%d ",i);
            else
            printf("%d x ",i);
            n=n/i;
        }
        if(i<fix)
        i++;
    }
    return 0;
}