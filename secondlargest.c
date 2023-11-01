#include<stdio.h>
int main()
{
    int a[5],largest,sublargest,i;
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    largest=a[0];
    sublargest=a[1];
    for(i=0;i<5;i++)
    {
        if(a[i]>largest)
        {
         sublargest=largest;
         largest=a[i];
        }
    }
    printf("Largest is %d and Second Largest is %d",largest,sublargest);
    return 0;
}