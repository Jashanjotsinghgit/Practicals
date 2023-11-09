#include<stdio.h>
int main()
{
    int n,p;
    printf("Enter the Number: ");
    scanf("%d",&n);
    value=n;
    printf("Enter the power: ");
    scanf("%d",&p);
    printf("Value is %d",power(n,p));
    return 0;
}
int power(int n,int p)
{
    int value=1;
    while(p>=1)
    {
      value=value*n;
       p--;
    }
    return value;
}
    
