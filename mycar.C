#include<graphics.h>
#include<stdio.h>
#include<conio.h>
main()
{
	int gd=DETECT,gm;
	int poly1[]={245,300,285,300,294,320,236,320,245,300};//back mirror
	int poly2[]={236,230,294,230,280,250,250,250,236,230};//wind screen
	clrscr();
	initgraph(&gd,&gm,"C:\\Turboc3\\BGI");

	rectangle(250,250,280,290); //roof
	rectangle(245,290,285,300);
	rectangle(235,230,295,320);      //main outline of car
	arc(265,250,10,170,35);     //side mirror's
	arc(265,190,10,170,15);     //front light

	setfillstyle(LTSLASH_FILL,RED);
	fillpoly(5,poly1); //back mirror
	setfillstyle(LTSLASH_FILL,RED);
	fillpoly(5,poly2); //wind screen

	ellipse(265,320,180,360,30,20);//trunk lid
	ellipse(265,230,0,180,30,55);//bonet

	getch();
	return 0;
}