#include<stdio.h>
int main()
{
    float cp,sp;
    printf("You are Requested to Enter the Amount in INR or Rs.\n");
    printf("Enter the Cost price : ");
    scanf("%f",&cp);
    printf("Enter the selling price: ");
    scanf("%f",&sp);
    if(sp>cp)
    printf("Seller made profit of %5.2f",sp-cp);
    else if(cp==sp)
    printf("Neither profit nor loss");
    else
  printf("Seller incured loss of %5.2f",cp-sp);
  return 0;
}