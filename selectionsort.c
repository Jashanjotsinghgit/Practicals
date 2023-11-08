#include<stdio.h>
int main()
{
    int arr[50],num,i,j,min;
    int temp;
     printf("Enter the number of elements of array: ");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    //Sorting
    for(i=0;i<num-1;i++)
    {
        min=i;
        for(j=i+1 ;j<num ;j++)
            if(arr[j] < arr[min])
            min=j;

        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
    for(i=0;i<num;i++)
    printf("%d ",arr[i]);
    return 0;
}