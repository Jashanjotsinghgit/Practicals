#include<stdio.h>
int main()
{
    int hour[3],i;
    for(i=0;i<3;i++)
    {
    printf("\nEnter your Overtime work Hours of %d Employee: ",i+1);
    scanf("%d",&hour[i]);
    if(hour[i]>40)
    {
    hour[i]=12*hour[i];
    printf("\nYour Overtime pay is %d",hour[i]);
    }
    else
    printf("\nYour Overtime is 0");
    }
    return 0;
}