#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number to see table: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    printf("\n %dx%d=%d",n,i,n*i);
    return 0;
}