#include<stdio.h>
#include<string.h>
int main()
{
    char a[20]="Jashanjot";
    char b[20]="jashan";
    char c[30];
    int len1,len2,check=0;
    //USING STRLEN
        len1=strlen(a);
        len2=strlen(b);
        printf("Lenth of Array 1 is %d and Array 2 is %d",len1,len2);
    // //USING STRCAT
    //  printf("\n%s",strcat(a,b));
    //  // USING CPY
    //  strcpy(a,b);
    //  printf("\n%s ",a);
     //USING CMP
     check= strcmp(a,b);
     printf("\n%d ",check);
    return 0;
}