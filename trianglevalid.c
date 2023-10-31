#include<stdio.h>
int main()
{
    //Verification of Triangle through Angles
    int a,b,c;
    printf("Enter the three Angles: ");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b+c) == 180)
    printf("Triangle is Valid as Sum of three angles is equal to 180 ");
    else
    printf("Triangle is InValid as Sum of three angles is not equal 180 ");
    return 0;
}