#include<stdio.h>
int main()
{
    int n,a,sum=0,tmp;
    printf("Enter the number: ");
    scanf("%d",&n);
    tmp=n;
    while(n>0)
    {
        a=n%10;
        sum= sum + a*a*a;
        n=n/10;
    }
    if(sum==tmp)
    printf("\nYes, Number is Armstrong");
    else
    printf("\nNumber is not in Armstrong series");
    return 0;
}