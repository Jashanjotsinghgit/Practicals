#include<stdio.h>
int main()
{
    int x,*pr;
    x=10;
    pr=&x;
    printf("X= %d",x);
    *pr=*pr+10;
    printf("\nX=%d",x);
    return 0;
}
// #include <stdio.h>

// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int *ptr = arr;  

//     for (int i = 0; i < 5; i++) {
//         printf("Value at index %d: %d\n", i, *(ptr + i));  
//     }

//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int num = 42;
//     int *ptr1 = &num;  // Pointer to an integer
//     int **ptr2 = &ptr1;  // Pointer to a pointer to an integer

//     printf("Value of num: %d\n", num);
//     printf("Value via ptr1: %d\n", *ptr1);
//     printf("Value via ptr2: %d\n", **ptr2);

//     return 0;
// }