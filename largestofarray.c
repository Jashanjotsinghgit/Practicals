#include<stdio.h>
int main()
{
    int largest,a[5],i;
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
      largest=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]>largest)
        largest=a[i];
    }
    printf("Largest element of array is %d",largest);
    return 0;
}