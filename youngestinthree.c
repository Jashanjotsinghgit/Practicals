#include<stdio.h>
int main()
{
    //Finding the youngest between three peoples
    //inputing values
    float ram,shy,ajay;
    printf("Enter the Age of Ram: ");
    scanf("%f",&ram);
     printf("Enter the Age of Shyam: ");
    scanf("%f",&shy);
     printf("Enter the Age of Ajay: ");
    scanf("%f",&ajay);
    //Applying logic

    //Method 1
    //  if(ram<shy)
    //  if(ram<ajay)
    //   printf("Ram is the Youngest Between These Three");
    //   else if(ajay<shy)
    //   printf("Ajay is the Youngest Between These Three ");
    //   else
    //   printf("Shyam is the Youngest Between These Three");
    // else if(shy<ajay)
    // printf("Shyam is the Youngest Between These Three");
    // else if(ajay<shy)
    // printf("Ajay is the Youngest Between These Three");
    // else
    // printf("All are same");
    //Method 2
    if(ram<shy && ram<ajay)
    printf("Ram is the Youngest Between These Three");
    if(shy<ram && shy<ajay)
    printf("Shyam is the Youngest Between These Three");
    if(ajay<ram && ajay<shy)
    printf("Ajay is the Youngest Between These Three");
    if(ram=shy && ram==ajay)
    printf("All are Same");
    return 0;
}