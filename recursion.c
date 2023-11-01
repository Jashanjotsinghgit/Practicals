// #include<stdio.h>
// int fibbo(int);
// int main()
// {
//     int n,i;
//     printf("Enter the Value: ");
//     scanf("%d",&n);
//     for(i=1;i<=25;i++)
//     {
//          printf("%d ",fibbo(i);
//     }
//     return 0;
// }
// int fibbo(int n)
// {
//     if(n<=1)
//     return 1;
//     else
//     return fibbo(n-2) + fibbo(n-1);
// }
// #include<stdio.h>
// int fac(int);
// int main()
// {
//     int n;
//     printf("Enter the nuber to see factorial: ");
//     scanf("%d",&n);
//     printf("Factorial of %d is %d",n,fac(n));
// }
// int fac(int a)
// {
//     if(a==1)
//     return 1;
//     else
//     return a*fac(a-1);
// }
#include<stdio.h>
int sum(int);
int main()
{
    int n=25;
    printf("Sum of first 25 Natural number is %d",sum(n));
    return 0;
}
int sum(int n)
{
    if(n==1)
    return 1;
    else
    return n+sum(n-1);
}