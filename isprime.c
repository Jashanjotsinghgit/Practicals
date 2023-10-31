#include<stdio.h>
int main()
{
    int i=1,p,a=0,prime=1;
    printf("Enter Your Number: ");
    scanf("%d",&p);
    i=p-1;
    while(i>1)
    {
        a=p%i;
       if(a == 0)
       {
        prime=0;
        break;
       }
        i--;
    }
    if(prime==0)
    printf("\nNumber is  not prime");
    else
    printf("\nNumber is prime");

    return 0;
}