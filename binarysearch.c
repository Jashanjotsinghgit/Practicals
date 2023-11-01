#include<stdio.h>
int main()
{
    int start,end,mid,a[5],i,key,check=0;
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    printf("Enter the key: ");
    scanf("%d",&key);
    start=0;
    end=4;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(key==a[mid])
        {
            printf("Element %d found at %d index",key,mid);
            check++;
            break;
        }
        else if(key>a[mid])
        start=mid+1;
        else if(key<a[mid])
        end=mid-1;
    }
    if(check==0)
    printf("Element Not Found!");
    return 0;
}