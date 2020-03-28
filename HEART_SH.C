#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	int gd=DETECT,gm;
	int h[]={57,75,46,60,50,50,55,51,57,60,60,51,65,50,69,60,57,75};
	clrscr();
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	setcolor(RED);
	setfillstyle(SOLID_FILL,RED);   //try EMPTY_FILL to draw just red outline.
	fillpoly(9,h);

	getch();
	closegraph();
}