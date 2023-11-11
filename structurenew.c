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
//QUESTION IN MSE-2
#include<stdio.h>
void display(int);
void input(int);
void highest(int);
struct student{
    char name[20];
    int age;
    float marks;
    int Id;
}p[100];
int main()
{
    int n;
    printf("Enter the number of Student: ");
    scanf("%d",&n);
    input(n);
    display(n);
    highest(n);
    return 0;
}
void input( int n)
{
    int i;
    for(i=0;i<n;i++)
    {
    printf("Enter the %d Student name: ",i+1);
    scanf("%s",&p[i].name);
    printf("Enter I'D: ");
    scanf("%d",&p[i].Id);
    printf("Enter age: ");
    scanf("%d",&p[i].age);
    printf("Enter the Grade: ");
    scanf("%f",&p[i].marks);
    }
}
void display(int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\nName: %s",p[i].name);
        printf("\nI'D : %d",p[i].Id);
        printf("\nAge: %d",p[i].age);
        printf("\nGrade: %5.2f",p[i].marks);
    }
}
void highest(int n)
{
    int i,high=1;
    for(i=0;i<n;i++)
    {
        if(p[i].marks > p[high].marks)
        {
          high=i;
        }
    }
    printf("\nHighest Marks obtained by %s : %5.2f ",p[high].name,p[high].marks);
}
