#include<stdio.h>
int main()
{
    //ist metod without using askii key concepts
    char a;
    printf("Enter a character or number or special character: ");
    scanf("%c",&a);
    if(a>='A' && a<='Z')
    printf("You entered a character of uppercase");
    else if(a>='a' && a<='z')
    printf("You entered a lowercase charcter");
    else if(a>='0' && a<='9')
    printf("You entered a number");
    else
    printf("You entered a Special character");
    //2nd method using askii keys
   
return 0;
}