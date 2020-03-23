#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int i=120;
car1();
car2();
car3();
car4();
main()
{
	int gd=DETECT,gm;
	clrscr();
	initgraph(&gd,&gm,"C:\\TC\\BGI");

	bar3d(325-i-i,45,325+i+i,45,2,1);
	bar3d(325-i-i,396,325+i+i,396,2,1);

	bar3d(325,45,327,396,2,1);
	bar3d(325-i,45,327-i,396,2,1);
	bar3d(325-i-i,45,327-i-i,396,2,1);
	bar3d(325+i,45,327+i,396,2,1);
	bar3d(325+i+i,45,327+i+i,396,2,1);

	settextstyle(7,0,5);//font_direction_fontsize
	outtextxy(265-i,80,"1");
	outtextxy(265,80,"2");
	outtextxy(265+i,80,"3");
	outtextxy(265+i+i,80,"4");

     /*	setcolor(GREEN);
	settextstyle(7,0,4);
	outtextxy(160,410,"select your car");      */
	car1();
	car2();
	car3();
	car4();

	getch();
	closegraph();
}
car1()
{

	setcolor(RED);
	rectangle(250,250,280,290); //roof
	rectangle(245,290,285,300);
	setcolor(GREEN);
	rectangle(235,230,295,320);      //main outline of car
	arc(265,250,10,170,35);     //side mirror's
	arc(265,190,10,170,15);     //front light

     /*	setfillstyle(LTSLASH_FILL,RED);
	fillpoly(5,poly1); //back mirror
	setfillstyle(LTSLASH_FILL,RED);
	fillpoly(5,poly2); //wind screen
					 */

	line(235,230,250,250); //top_right_corner
	line(295,230,280,250); //top_left_corner
	line(245,300,235,320); //bottom_left_corner
	line(285,300,295,320); //bottom_right_corner

	//design on bonet
	setcolor(RED);
	line(265,185,250,210);
	line(250,210,265,200);
	line(265,185,280,210);
	line(280,210,265,200);

	setcolor(GREEN);
	ellipse(265,320,180,360,30,20);//trunk lid
	ellipse(265,230,0,180,30,55);//bonet
}
car2()
{
//car2
	setcolor(BLUE);
	rectangle(250+i,250,280+i,290); //roof
	rectangle(245+i,290,285+i,300);
	setcolor(YELLOW);
	rectangle(235+i,230,295+i,320);      //main outline of car
	arc(265+i,250,10,170,35);     //side mirror's
	arc(265+i,190,10,170,15);     //front light

     /*	setfillstyle(LTSLASH_FILL,RED);
	fillpoly(5,poly1); //back mirror
	setfillstyle(LTSLASH_FILL,RED);
	fillpoly(5,poly2); //wind screen
	 */


	line(235+i,230,250+i,250); //top_right_corner
	line(295+i,230,280+i,250); //top_left_corner
	line(245+i,300,235+i,320); //bottom_left_corner
	line(285+i,300,295+i,320); //bottom_right_corner

	//design on bonet
	setcolor(BLUE);
   /*	line(265+i,185,250+i,210);
	line(250+i,210,265+i,200);
	line(265+i,185,280+i,210);
	line(280+i,210,265+i,200); */
	ellipse(265+i,215,10,170,20,20);

	setcolor(YELLOW);
	ellipse(265+i,320,180,360,30,20);//trunk lid
	ellipse(265+i,230,0,180,30,55);//bonet
}
car3()
{
//car3

	setcolor(RED);
	rectangle(250-i,250,280-i,290); //roof
      //	rectangle(245-i,290,285-i,300);
	setcolor(RED);
	rectangle(235-i,230,295-i,320);      //main outline of car
	arc(265-i,250,10,170,35);     //side mirror's
	arc(265-i,190,10,170,15);     //front light

     /*	setfillstyle(LTSLASH_FILL,RED);
	fillpoly(5,poly1); //back mirror
	setfillstyle(LTSLASH_FILL,RED);
	fillpoly(5,poly2); //wind screen
					 */

	line(235-i,230,250-i,250); //top_right_corner
	line(295-i,230,280-i,250); //top_left_corner
	line(250-i,290,235-i,320); //bottom_left_corner
	line(280-i,290,295-i,320); //bottom_right_corner

	//design on bonet
	setcolor(RED);
	line(265-i,185,250-i,210);
	line(250-i,210,265-i,200);
	line(265-i,185,280-i,210);
	line(280-i,210,265-i,200);

	setcolor(RED);
	ellipse(265-i,320,180,360,30,20);//trunk lid
	ellipse(265-i,230,0,180,30,55);//bonet
}
car4()
{
//car4
	setcolor(GREEN);
	rectangle(250+i+i,250,280+i+i,290); //roof
	rectangle(245+i+i,290,285+i+i,300);
	setcolor(WHITE);
	rectangle(235+i+i,230,295+i+i,320);      //main outline of car
	arc(265+i+i,250,10,170,35);     //side mirror's
	arc(265+i+i,190,10,170,15);     //front light

     /*	setfillstyle(LTSLASH_FILL,RED);
	fillpoly(5,poly1); //back mirror
	setfillstyle(LTSLASH_FILL,RED);
	fillpoly(5,poly2); //wind screen
	 */


	line(235+i+i,230,250+i+i,250); //top_right_corner
	line(295+i+i,230,280+i+i,250); //top_left_corner
	line(245+i+i,300,235+i+i,320); //bottom_left_corner
	line(285+i+i,300,295+i+i,320); //bottom_right_corner

	//design on bonet
	setcolor(GREEN);
	line(265+i+i,185,250+i+i,210);
	line(250+i+i,210,265+i+i,200);
	line(265+i+i,185,280+i+i,210);
	line(280+i+i,210,265+i+i,200);

	setcolor(WHITE);
	ellipse(265+i+i,320,180,360,30,20);//trunk lid
	ellipse(265+i+i,230,0,180,30,55);//bonet


	getch();
}


