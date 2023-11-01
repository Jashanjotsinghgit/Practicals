// #include <stdio.h>
// struct book {
//     char tittle[20];
//     char author[20];
//     float price;
// };

// int main() {
//     struct book book1;
//     strcpy(book1.tittle, "C language");
//     strcpy(book1.author, "Jagjit singh");
//     book1.price = 200.00;

//     printf("BookDetails:\n");
//     printf("Tittle: %s\n", book1.tittle);
//     printf("Author: %s\n", book1.author);
//     printf("Price: $%.2f\n", book1.price);
//     return 0;
// }

//  STRUCTURE WITH ARRAYS
#include<stdio.h>
struct student{
    char name[20];
    int id;
};
int main()
{
    struct student students[3];
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter the name of %d student: ",i+1);
        gets(students[i].name);
        printf("Enter the age: ");
        scanf("%d",&students[i].id);
    }
    printf("\nStudent Details ");
    for(i=0;i<3;i++)
    {
        printf("\n %d Student Name: ",i+1);
        puts(students[i].name);
        printf("\nAge:%d ",students[i].id);
    }
    return 0;
}