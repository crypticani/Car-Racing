#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	int gd=DETECT,gm;
	int h1[]={517,75,506,60,510,50,515,51,517,60,520,51,525,50,529,60,517,75};
	int h2[]={557,75,546,60,550,50,555,51,557,60,560,51,565,50,569,60,557,75};
	int h3[]={597,75,586,60,590,50,595,51,597,60,600,51,605,50,609,60,597,75};
	
	initgraph(&gd,&gm,"C:\\Tc\\BGI");
	setcolor(RED);
	setfillstyle(SOLID_FILL,RED);   //try EMPTY_FILL to draw just red outline.
	fillpoly(9,h1);
	fillpoly(9,h2);
	fillpoly(9,h3);

	getch();
	closegraph();
}
