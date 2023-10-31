#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter the value: ");
    scanf("%d",&a);
    b=1;
    while(b<=a)
    {
        c=a;
        while(c>=b)
        {
            printf(" ");
            c--;
        }
        c=1;
        while(c<=b)
        {
            printf("%d ",c%10);
            c++;
        }
        printf("\n");
        b++;
    }
    b=a-1;
    while(b>=1)
    {
        c=a;
        while(c>=b)
        {
            printf(" ");
            c--;
        }
        c=1;
        while(c<=b)
        {
            printf("%d ",c%10);
            c++;
        }
        printf("\n");
        b--;
    }
    getch();
}







            
        









