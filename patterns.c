// question 38
// 1
// 12
// 123
// ...
// n
// #include<stdio.h>
// int main()
// {
//     int i,j,n;
//     printf("Enter the size of Pattern : ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=i;j++)
//         printf("* ");
//         printf("\n");
//     }
//  return 0;
// }

//Question 39
// #include<stdio.h>
// int main()
// {
//     int i,j,k,n;
//     printf("Enter the size of Pattern: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         for(k=(n-i)*2;k>=1;k--)
//         printf(" ");
//         for(j=1;j<=i;j++)
//         printf("* ");
//         printf("\n");
//     }
//  return 0;
// }
//Question 40
// #include<stdio.h>
// int main()
// {
//     int i,k,j,m=1,n;
//     printf("Enter the size of Pattern: ");
//     scanf("%d",&n);
//     for(i=1;i<n;i++)
//      { 
//         for(j=(n-i)*2;j>=1;j--)
//         printf(" ");
//         for(k=1;k<=m;k++)
//         {
//             printf("* ");
//         }
//          printf("\n");
//          m=m+2;
//      }
//     return 0;
// }
//Question 41
// #include<stdio.h>
// int main()
// {
//      int i,k,j,m,n;
//     printf("Enter the size of Pattern: ");
//     scanf("%d",&n);
//     m=(n*2)-1;
//     for(i=n;i>=1;i--)
//      { 
//         for(j=(n-i)*2;j>=1;j--)
//         printf(" ");
//         for(k=1;k<=m;k++)
//         {
//             printf("* ");
//         }
//          printf("\n");
//          m=m-2;
//      }
//     return  0;
// }
//Question 42
#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the size of Pattern: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=n-i;k>=1;k--)
        printf("*");
        for(j=1;j<=i;j++)
        printf("%d",j);
        printf("\n");
    }
 return 0;
}