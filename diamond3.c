#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y,z;
    printf("Enter the value;");
    scanf("%d",&x);
    y=1;
    while(y<=x)
    {
        z=x;
        while(z>=y)
        {
            printf(" ");
            z--;
        }
        z=1;
        while(z<=y)
        {   
        printf("%d ",y%10);
         y++;
        }
        printf("\n");
        y++;
}
y=x-1;
while(y>=1)
{
    z=x;
    while(z>=y)
    {
    printf(" ");
    z--;
    }
    z=1;
    while(z<=y)
    {
        printf("%d ",y);
        z++;
    }
    printf("\n");
    y--;
}
getch();
}





            
        









