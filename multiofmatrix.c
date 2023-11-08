#include<stdio.h>
int main()
{
    int a[3][3]={
    {2,2,2},
    {3,3,3},
    {5,5,5}
    };
    int b[3][3]={
        {4,4,4},
        {5,5,5},
        {6,6,6}
    };
    int c[3][3];
    int i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]*b[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
      printf("%d ",c[i][j]);
     }
     printf("\n");
    }
    return 0;
}