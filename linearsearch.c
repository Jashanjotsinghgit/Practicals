#include<stdio.h>
int main()
{
    int a[10],key,i,check=0;
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    printf("Enter the key: ");
    scanf("%d",&key);
    for(i=0;i<10;i++)
    {
        if(a[i]==key)
       {
         printf("Element %d found at index %d ",key,i);
         check++;
       }
    }
    if(check==0)
    printf("Element Not Found!");
    return 0;
}