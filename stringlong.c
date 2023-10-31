#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char line[80];
    char longest[20];
    int c=0,i,j,index=0,l=0,max=0;
    printf("Enter the line: ");
    gets(line);
    l=strlen(line);
    for(i=0;i<l;i++)
    {
        if(line[i] != ' ')
        c++;
        else 
        {
            if(c>max)
            {
           max=c;
           index=i-max;
            } 
            c=0;
        }
    }
    //for checking last word is long or not
    if(c>max)
    {
        max=c;
        index=l-max;
    }
    //coping last word in longest
    j=0;
    for(i=index;i<index+max;index++)
    {
        longest[j]=line[index];
        j++;
    }
    longest[j]='\0';
    printf("Longest word in the line is %s",longest);
    return 0;
}