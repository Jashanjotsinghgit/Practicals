#include<stdio.h>
int main()
{
    int n,o;
    printf("Enter the Number: \n");
    scanf("%d",&n);
    o=n%2;
    if(o==0)
    printf("Number is Even");
    else
    printf("Number is Odd");
    return 0;
}