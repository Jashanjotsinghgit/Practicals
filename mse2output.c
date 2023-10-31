#include<stdio.h>
int main()
{
    int i=1,j=1,a=0,y,b=0;
    int x=11;
    char c='A';
    y=sizeof(x++);
    printf("%i %i %i",y,x,sizeof(c));
    double d=10.5;
    printf(" %lu",sizeof(a+d));
     for(i=1;i<=3;i++)
      {
        for(j=1;j<=3;j++)
        {
            if(++i == 2 || --j==2)
            continue;
        }
        printf(" %d",i);
        printf(" %d",j);
        if(++i==4 || --j==3)
        break;
      }
      printf(" %d",i);
      printf(" %d",j);
    return 0;
}