//TO READ A PARTICULAR FILE
// #include<stdio.h>
// int main()
// {
//     FILE *file;
//     char a; //a is used to print the whole file
//     file=fopen("armstrong.c","r");
//     if(file==NULL)
//     {
//         printf("\nError! file not exist");
//         goto DONE;
//     }
//     a=fgetc(file);
//     while(a!=EOF)
//     {
//         printf("%c",a);
//         a=fgetc(file);
//     }
//     DONE:
//     return 1;
// }
//TO WRITE ON A PARTICULAR FILE
#include<stdio.h>
int main()
{
    FILE *file;
    file=fopen("output.txt","w");
    if(file==NULL)
   {
        printf("\nError! file not exist");
        goto DONE;
    }
    fprintf(file,"Hello! I am Jashanjot Singh");
    DONE:
    return 1;
}
