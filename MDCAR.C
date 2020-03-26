#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	int gd=DETECT,gm;
	clrscr();
	initgraph(&gd,&gm,"C:\\TC\\BGI");

	rectangle(250,350,270,380); //roof
	rectangle(246,380,274,385);
	rectangle(240,340,280,395); //main outline

	line(240,340,250,350);         //top_left
	line(270,350,280,340);         //top_right
	line(274,385,280,395);         //bottom_left
	line(246,385,240,395);         //bottom_right

	ellipse(260,340,0,180,20,30);     //bonet
	ellipse(260,395,180,360,20,10);   //trunk_lid

	arc(260,355,10,170,24);           //side_mirror
	arc(250,313,250,360,5);      //left_front_light
	arc(270,313,180,300,5);     //right_front_light
	getch();
	closegraph();
}
