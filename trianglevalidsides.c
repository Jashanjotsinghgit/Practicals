#include<stdio.h>
int main()
{
    int a,b,c,gr;
    printf("Enter side A: ");
    scanf("%d",&a);
    printf("Enter side B: ");
    scanf("%d",&b);
    printf("Enter side C: ");
    scanf("%d",&c);
    if(a>b && a>c)
    gr=a;
    if(b>a && b>c)
    gr=b;
    if(c>a && c>b)
    gr=c;

    if((a==b && a!=c) || (a==c && a!=b) )
    printf("\nTriangle is Isocelus");
    else if(a==b && a==c)
     printf("\nTriangle is Equilateral");
     else if( (gr*gr)==((b*b) + (c*c)))
    printf("\nTriangle is Right-Angled");
    else if(a!=b && a!=c)
     printf("\nTriangle is Scalene");
    
    return 0;
}