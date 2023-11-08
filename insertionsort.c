#include<stdio.h>
int main()
{
    int arr[50],num,i,j,min;
    printf("Enter the number of elements of array: ");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    //Sorting
    for(i=0;i<num;i++)
    {
        min=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>min)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=min;
    }
    printf("Sorted array \n");
    for(i=0;i<num;i++)
    printf("%d ",arr[i]);
    return 0;
}