#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,n;
    a=4;
    n=7;
    while(a>=1)
{
        b=1;
        while(b<=a)
        {
    printf("%d ",n%10);
    b++;
    n++;
        }
printf("\n");
a--;
}
getch();
}






