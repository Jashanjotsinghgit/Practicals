#include<stdio.h>
int main()
{
    int a[25],i,odd=0,even=0,pos=0,neg=0;
    for(i=0;i<25;i++)
    {
        printf("Enter the %d number: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<25;i++)
    {
        if(a[i]>0)
        {
            pos++;
            if(a[i]%2==0)
            even++;
            else
            odd++;
        }
        else if(a[i]<0)
        neg++;
    }
    printf("Positive numbers: %d",pos);
    printf("\nNegative Numbers : %d",neg);
    printf("\nOdd Numbers: %d",odd);
    printf("\nEven Numbers: %d",even);
    return 0;
}