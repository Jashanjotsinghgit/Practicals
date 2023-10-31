#include<stdio.h>
int main()
{
    int n;
    float fine=0;
    printf("Enter the number of days you late: ");
    scanf("%d",&n);
    if(n<=5)
    fine= 0.5*n;
    else if(n<=10)
    fine= 1*n;
    else
        fine= 5*n;
        printf("You are %d days Late, So Pay fine=%2.2f\n",n,fine);
        if (n>30)
        printf(" You are Late More than 30 days. Hence your Library Membership is Cancelled ");
    return 0;
}
