#include<stdio.h>
int main()
{
    int a[50],i,sum=0,num;
    float avg;
    printf("Enter the number of elemnets of array: ");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("Enter the %d element of first array: ",i+1);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/num;
    printf("Averge of element of the array is %5.2f",avg);
    return 0;
}