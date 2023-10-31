//Using recursion concept
// #include<stdio.h>
// int main()
// {
//     int n,i;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(i=0;i<=n;i++)
//     printf("%d ",fib(i));
//     return 0;
// }
// int fib(int n)
// {
//     if(n<=1)
//     return n;
//     else
//     return fib(n-2)+fib(n-1);
// }
//Using normal method
#include<stdio.h>
int main()
{
    int a=0,b=1,sum=0,n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    while(sum<=n)
    {
         printf("%d ",sum);
        sum=a+b;
        b=a;
        a=sum;
    }
    return 0;
}