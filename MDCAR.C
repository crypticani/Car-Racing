#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	int gd=DETECT,gm;
	clrscr();
	initgraph(&gd,&gm,"C:\\TC\\BGI");

	rectangle(250,250,270,280); //roof
	rectangle(246,280,274,285);
	rectangle(240,240,280,295); //main outline

	line(240,240,250,250);         //top_left
	line(270,250,280,240);         //top_right
	line(274,285,280,295);         //bottom_left
	line(246,285,240,295);         //bottom_right

	ellipse(260,240,0,180,20,30);     //bonet
	ellipse(260,295,180,360,20,10);   //trunk_lid

	arc(260,255,10,170,24);           //side_mirror
	arc(250,213,250,360,5);      //left_front_light
	arc(270,213,180,300,5);     //right_front_light
	getch();
	closegraph();
}