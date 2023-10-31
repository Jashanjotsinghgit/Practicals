#include<stdio.h>
int main()
{
    char a;
    printf("Enter the Character: ");
    scanf("%c",&a);
    if((a>='A' && a<='Z')  || (a>='a' && a<='z'))
    {
    if(a=='a' || a=='e'|| a=='o' || a=='u' || a=='i')
    printf("You entered a vowel");
    else if (a=='A' || a=='E'|| a=='O' || a=='U' || a=='I')
        printf("You entered a vowel");
        else
        printf("You Entered a Consonant");
    }
    else
    printf("You entered a Non-Alphabet");
      return 0;
}