#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int gd=DETECT, gm;
    initgraph(&gd,&gm,"")
    line(10,10,50,10)
    outtext(10,50,hello)
    getch();
    closegraph();
}