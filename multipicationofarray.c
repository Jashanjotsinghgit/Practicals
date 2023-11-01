#include<stdio.h>
int main()
{
    int a[5],b[5],c[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter the %d element of first array: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("Enter the %d element of second array: ",i+1);
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++)
    {
        c[i]=a[i]*b[i];
    }
    printf("\n");
    for(i=0;i<5;i++)
    printf("%d ",c[i]);
    return 0;
}