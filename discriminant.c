#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float root1,root2,d;
    float relpart,imgpart;
    printf("Enter the value of a,b,c repectively: ");
    scanf("%d %d %d ",&a,&b,&c);
    if(a==0)
    {
    printf("A not equals to Zero");
    goto done;
    }
    d=b*b - 4*a*c;
    if(d==0)
    {
        root1= -b/(2*a);
        root2=root1;
        printf("\nRoots are Real and Equal,\n Roots=%5.2f",root1);
    }
    else if(d<0)
    {
        printf("\nRoots are Complex");
        root1=-b/(2*a) + sqrt(d)/(2*a);
        root2=-b/(2*a) - sqrt(d)/(2*a);
        printf("Roots are Complex and distint, Roots= %5.2f,%5.2f",root1,root2);
    }
    else
    {
       relpart= -b/(2*a);
        imgpart= sqrt(-d)/(2*a); 
         printf("Roots are Real and different, Root1 = %5.2f + %5.2f ,%5.2f - %5.2f ",relpart,imgpart,relpart,imgpart);
    }
    done:
    return 0;
}