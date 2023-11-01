#include<stdio.h>
int main()
{
    int i,j,a[5],temp;
    for(i=0;i<5;i++)
    {
        printf("Enter the %d element of array: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
     for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}