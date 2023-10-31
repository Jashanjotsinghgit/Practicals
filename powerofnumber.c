#include<stdio.h>
int main()
{
    int n,p,value=1;
    printf("Enter the Number: ");
    scanf("%d",&n);
    value=n;
    printf("Enter the power: ");
    scanf("%d",&p);
    while(p>1)
    {
     value=value*n;
     p--;
    }
    printf("Value is %d",value);
    return 0;
}