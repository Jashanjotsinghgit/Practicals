#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter the value to see factorial: ");
    scanf("%d",&n);
    printf("\nFactorial of %d is: ",n);
    while(n>=1)
    {
        i=i*n;
        n--;
    }
    printf("%d",i);
    return 0;
}