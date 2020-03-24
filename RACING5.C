/*
	Racing 5 Changelog : 
	
	New : 
	Car choice option
	
	Bug Fixes :
	Automatic movement of the car to the right.
	
	
*/

#include<graphics.h>
#include<process.h>
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<dos.h>

void loading();
void car(int);
void track();
void play();
void play1();
void play2();
void play3();
void play4();
void menu();
void h1();
void h2();
int score();
void select_car();
void car_choice();
void car1();
void car2();
void car3();
void car4();
void mycar1(int);
void mycar2(int);
void mycar3(int);
void mycar4(int);

void main()
{
	 loading();
	 menu();
}

void play()
{
int gd=DETECT,gm,i,j,k,l,r,s,ch;
	randomize();
	r=220+rand()%220;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	for(k=0;k<463;k++)
	{
		for(i=220;i<405;i++)
		{
		for(j=0;j<500;j++)
		{
			track();
			car(i);
			score();
			rectangle(r,k,r+50,50+k);

				if(i+60>=r&&i<=(r+50)&&k>=210)
				{
				  cleardevice();
				  outtextxy(getmaxx()/2,getmaxy()/2,"GAME OVER");
				  getch();
				  menu();
				}
				if(k==461)
				{
					k=0;
					randomize();
					r=220+rand()%220;
				}
				else
				{
					k++;
				}

			if(kbhit())
			{
				ch=getch();

				if(ch==75&&i>215)  //move left
				{
					if(i==220)
					{
						i=221;
					}
					i-=3;
				}

				if(ch==77&&i>215) //move right
				{
					if(i==406) //max value of x coordinate of car
					{
						i=405; // to remain on the track
					}
					i+=3;
				}

				if(ch==27) //escape key is pressed
				{
					menu();
				}
			}
		}
		}
	}
	getch();
	closegraph();
}

void play1()
{
int gd=DETECT,gm,i,j,k,r,ch;
	randomize();
	r=220+rand()%220;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	for(k=0;k<463;k++)
	{
		for(i=220;i<405;i++)
		{
	     for(j=0;j<500;j++)
	     {
			mycar1(i);
			track();
			score();
			rectangle(r,k,r+50,50+k);
				if(i+60>=r&&i<=(r+50)&&k>=210)
				{
				  cleardevice();
				  outtextxy(getmaxx()/2,getmaxy()/2,"GAME OVER");
				  getch();
				  menu();
				}

				if(k==461)
				{
					k=0;
					randomize();
					r=220+rand()%220;
				}
				else
				{
					k++;
				}

			if(kbhit())
			{
				ch=getch();
				if(ch==75&&i>215)  //move left
				{
					if(i==220)
					{
						i=221;
					}
					i-=3;
				}

				if(ch==77&&i>215) //move right
				{
					if(i==406) //max value of x coordinate of car
					{
						i=405; // to remain on the track
					}
					i+=3;
				}

				if(ch==27) //escape key is pressed
				{
					menu();
				}
			}
	    }
		}
	 }
	getch();
	closegraph();
}

void play2()
{
int gd=DETECT,gm,i,j,k,r,ch;
	randomize();
	r=220+rand()%220;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	for(k=0;k<463;k++)
	{
		for(i=220;i<405;i++)
		{
	     for(j=0;j<500;j++)
	     {
			mycar2(i);
			track();
			score();
			rectangle(r,k,r+50,50+k);
				if(i+60>=r&&i<=(r+50)&&k>=210)
				{
				  cleardevice();
				  outtextxy(getmaxx()/2,getmaxy()/2,"GAME OVER");
				  getch();
				  menu();
				}

				if(k==461)
				{
					k=0;
					randomize();
					r=220+rand()%220;
				}
				else
				{
					k++;
				}
			if(kbhit())
			{
				ch=getch();
				if(ch==75&&i>215)  //move left
				{
					if(i==220)
					{
						i=221;
					}
					i-=3;
				}

				if(ch==77&&i>215) //move right
				{
					if(i==406) //max value of x coordinate of car
					{
						i=405; // to remain on the track
					}
					i+=3;
				}

				if(ch==27) //escape key is pressed
				{
					menu();
				}
			}
	     }
		}
	 }
	getch();
	closegraph();
}
void play3()
{
int gd=DETECT,gm,i,j,k,r,ch;
	randomize();
	r=220+rand()%220;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	for(k=0;k<463;k++)
	{
		for(i=220;i<405;i++)
		{
	     for(j=0;j<500;j++)
	     {
			mycar3(i);
			track();
			score();
			rectangle(r,k,r+50,50+k);
				if(i+60>=r&&i<=(r+50)&&k>=210)
				{
				  outtextxy(getmaxx()/2,getmaxy()/2,"GAME OVER");
				  getch();
				  menu();
				}

				if(k==461)
				{
					k=0;
					randomize();
					r=220+rand()%220;
				}
				else
				{
					k++;
				}
			if(kbhit())
			{
				ch=getch();
				if(ch==75&&i>215)  //move left
				{
					if(i==220)
					{
						i=221;
					}
					i-=3;
				}

				if(ch==77&&i>215) //move right
				{
					if(i==406) //max value of x coordinate of car
					{
						i=405; // to remain on the track
					}
					i+=3;
				}

				if(ch==27) //escape key is pressed
				{
					menu();
				}
			}
	     }
		}
	 }
	getch();
	closegraph();
}
void play4()
{
int gd=DETECT,gm,i,j,k,r,ch;
	randomize();
	r=220+rand()%220;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	for(k=0;k<463;k++)
	{
		for(i=220;i<405;i++)
		{
	     for(j=0;j<500;j++)
	     {
			mycar4(i);
			track();
			score();
			rectangle(r,k,r+50,50+k);
				if(i+60>=r&&i<=(r+50)&&k>=210)
				{
				  cleardevice();
				  outtextxy(getmaxx()/2,getmaxy()/2,"GAME OVER");
				  getch();
				  menu();
				}

				if(k==461)
				{
					k=0;
					randomize();
					r=220+rand()%220;
				}
				else
				{
					k++;
				}
			if(kbhit())
			{
				ch=getch();
				if(ch==75&&i>215)  //move left
				{
					if(i==220)
					{
						i=221;
					}
					i-=3;
				}

				if(ch==77&&i>215) //move right
				{
					if(i==406) //max value of x coordinate of car
					{
						i=405; // to remain on the track
					}
					i+=3;
				}

				if(ch==27) //escape key is pressed
				{
					menu();
				}
			}
	     }
		}
	 }
	getch();
	closegraph();
}

int score()
{       int a=10;
	outtextxy(500,200,"SCORE:\n");
}

void select_car()
{
	int gd=DETECT,gm,x1=95,y1=50,x2=195,y2=391,z=120,c=0;
	initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
	while(1)
	{
       //	cleardevice();
	car_choice();
	car1();
	car2();
	car3();
	car4();
	rectangle(x1,y1,x2,y2);

	if(kbhit())
	{
		c=getch();
		if(c==27)
		{
			exit(0);
		}
		else if(c==75)
			{
				cleardevice();
				car_choice();
				car1();
				car2();
				car3();
				car4();
				x1=x1-z;
				x2=x2-z;
				rectangle(x1,y1,x2,y2);
			}
		else if(c==77)
			{
				cleardevice();
				car_choice();
				car1();
				car2();
				car3();
				car4();
				x1=x1+z;
				x2=x2+z;
				rectangle(x1,y1,x2,y2);
			}
		else if(c==13)
			{
				if(x1==95)
				{
				       //	cleardevice();
					play3();
				}
				else if(x1==215)
				{
					//cleardevice();
					play1();
				}
				else if(x1==335)
				{
					//cleardevice();
					play2();
				}
				else if(x1==455)
				{
					//cleardevice();
					play4();
				}
				else
				{
				       //	cleardevice();
					play();
				}
			}
	}
}
}

void car_choice()
{
	int i=120;
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

    setcolor(GREEN);
	settextstyle(7,0,4);
	outtextxy(200,410,"select your car");
	settextstyle(1,0,2);
	outtextxy(180,450,"Use arrow keys to navigate.");
}

void car1()
{
	int i=120;
	setcolor(RED);
	rectangle(250,250,280,290); //roof
	rectangle(245,290,285,300);
	setcolor(GREEN);
	rectangle(235,230,295,320);      //main outline of car
	arc(265,250,10,170,35);     //side mirror's
	arc(265,190,10,170,15);     //front light

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

void mycar1(int i)
{
	setcolor(RED);
	rectangle(15+i,350,45+i,390); //roof
	rectangle(10+i,390,50+i,400);
	setcolor(GREEN);
	rectangle(0+i,330,60+i,420);      //main outline of car
	arc(30+i,350,10,170,35);     //side mirror's
	arc(30+i,290,10,170,15);     //front light

	line(0+i,330,15+i,350); //top_right_corner
	line(60+i,330,45+i,350); //top_left_corner
	line(10+i,400,0+i,420); //bottom_left_corner
	line(50+i,400,60+i,420); //bottom_right_corner

	//design on bonet
	setcolor(RED);
	line(30+i,285,15+i,310);
	line(15+i,310,30+i,300);
	line(30+i,285,45+i,310);
	line(45+i,310,30+i,300);

	setcolor(GREEN);
	ellipse(30+i,420,180,360,30,20);//trunk lid
	ellipse(30+i,330,0,180,30,55);//bonet
	delay(10);
	cleardevice();
}

void car2()
{
	int i=120;
	setcolor(BLUE);
	rectangle(250+i,250,280+i,290); //roof
	rectangle(245+i,290,285+i,300);
	setcolor(YELLOW);
	rectangle(235+i,230,295+i,320);      //main outline of car
	arc(265+i,250,10,170,35);     //side mirror's
	arc(265+i,190,10,170,15);     //front light

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

void mycar2(int i)
{
	setcolor(BLUE);
	rectangle(15+i,350,45+i,390); //roof
	rectangle(10+i,390,50+i,400);
	setcolor(YELLOW);
	rectangle(0+i,330,60+i,420);      //main outline of car
	arc(30+i,350,10,170,35);     //side mirror's
	arc(30+i,290,10,170,15);     //front light

	line(0+i,330,15+i,350); //top_right_corner
	line(60+i,330,45+i,350); //top_left_corner
	line(10+i,400,0+i,420); //bottom_left_corner
	line(50+i,400,60+i,420); //bottom_right_corner

	//design on bonet
	setcolor(BLUE);
   /*	line(265+i,185,250+i,210);
	line(250+i,210,265+i,200);
	line(265+i,185,280+i,210);
	line(280+i,210,265+i,200); */
	ellipse(30+i,315,10,170,20,20);

	setcolor(YELLOW);
	ellipse(30+i,420,180,360,30,20);//trunk lid
	ellipse(30+i,330,0,180,30,55);//bonet
	delay(10);
	cleardevice();
}

void car3()
{
//car3
	int i=120;
	setcolor(RED);
	rectangle(250-i,250,280-i,290); //roof
      //	rectangle(245-i,290,285-i,300);
	setcolor(RED);
	rectangle(235-i,230,295-i,320);      //main outline of car
	arc(265-i,250,10,170,35);     //side mirror's
	arc(265-i,190,10,170,15);     //front light

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
void mycar3(int i)
{
//car3
	setcolor(RED);
	rectangle(15+i,350,45+i,390); //roof
      //	rectangle(10+i,290,50+i,300);
	setcolor(RED);
	rectangle(0+i,330,60+i,420);      //main outline of car
	arc(30+i,350,10,170,35);     //side mirror's
	arc(30+i,290,10,170,15);     //front light

	line(0+i,330,15+i,350); //top_right_corner
	line(60+i,330,45+i,350); //top_left_corner
	line(15+i,390,0+i,420); //bottom_left_corner
	line(45+i,390,60+i,420); //bottom_right_corner

	//design on bonet
	setcolor(RED);
	line(30+i,285,15+i,310);
	line(15+i,310,30+i,300);
	line(30+i,285,45+i,310);
	line(45+i,310,30+i,300);

	setcolor(RED);
	ellipse(30+i,420,180,360,30,20);//trunk lid
	ellipse(30+i,330,0,180,30,55);//bonnet
	delay(10);
	cleardevice();
}

void car4()
{
	int i=120;
	setcolor(GREEN);
	rectangle(250+i+i,250,280+i+i,290); //roof
	rectangle(245+i+i,290,285+i+i,300);
	setcolor(WHITE);
	rectangle(235+i+i,230,295+i+i,320);      //main outline of car
	arc(265+i+i,250,10,170,35);     //side mirror's
	arc(265+i+i,190,10,170,15);     //front light

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
	ellipse(265+i+i,230,0,180,30,55);//bonnet
}
void mycar4(int i)
{
	setcolor(GREEN);
	rectangle(15+i,350,45+i,390); //roof
	rectangle(10+i,390,50+i,400);
	setcolor(WHITE);
	rectangle(0+i,330,60+i,420);      //main outline of car
	arc(30+i,350,10,170,35);     //side mirror's
	arc(30+i,290,10,170,15);     //front light

	line(0+i,330,15+i,350); //top_right_corner
	line(60+i,330,45+i,350); //top_left_corner
	line(10+i,400,0+i,420); //bottom_left_corner
	line(50+i,400,60+i,420); //bottom_right_corner

	//design on bonet
	setcolor(GREEN);
	line(30+i,285,15+i,310);
	line(15+i,310,30+i,300);
	line(30+i,285,45+i,310);
	line(45+i,310,30+i,400);

	setcolor(WHITE);
	ellipse(30+i,420,180,360,30,20);//trunk lid
	ellipse(30+i,330,0,180,30,55);//bonnet
	delay(10);
	cleardevice();
}

void car(int i)
{
	rectangle(15+i,350,45+i,390); //roof
	rectangle(10+i,390,50+i,400);
	rectangle(0+i,330,60+i,420);      //main outline of car
	arc(30+i,350,10,170,35);     //side mirrors
	arc(30+i,290,10,170,15);     //front light
	ellipse(30+i,420,180,360,30,20);//trunk lid
	ellipse(30+i,330,0,180,30,55);//bonnet
	delay(10);
	cleardevice();
}

void track()
{
		setcolor(WHITE);
		bar3d(215,0,215,getmaxy(),5,3);//left boundary
		bar3d(470,0,470,getmaxy(),5,3);//right boundary
		line(280,0,280,getmaxy());  //lanes
		line(340,0,340,getmaxy());
		line(400,0,400,getmaxy());
}

void loading() //loading screen
{
	int gd=DETECT,gm,i;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	settextstyle(8,0,7);
	outtextxy(130,100,"Car Racing");
       //	settextstyle(0,0,5);
       //	outtextxy((getmaxx()/2)-500,getmaxy()-125,"LOADING");
	for(i=0;i<200;i++)
	{
		setcolor(RED);
		rectangle((getmaxx()/2)-100+i,getmaxy()-100,(getmaxx()/2)+100,getmaxy()-80);
		delay(10);
	}
}
void menu()
{

int gd=DETECT,gm,i,k,x1=215,y1=198,x2=425,y2=245,a;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	while(1)
	{
		h1();
		h2();
		rectangle(x1,y1,x2,y2);

	if(kbhit()) // detects the pressing of key
	{
	   k=getch();
	   {
		if(k==72&&y1==198) //cursor at the top
		{
			cleardevice();
			h1();
			h2();
			rectangle(x1,y1,x2,y2);
		}
		else if(k==80&&y2==405) //cursor at the bottom and moves to the top
		{
			x1=215;
			y1=198;
			x2=425;
			y2=245;
			cleardevice();
			h1();
			h2();
			rectangle(x1,y1,x2,y2);
		}
		else if(k==80) //cursor moves downward
		{
			cleardevice();
			h1();
			h2();
			y1=y1+40;
			y2=y2+40;
			rectangle(x1,y1,x2,y2);
		}
		else if(k==72) //cursor moves upward
		{
			cleardevice();
			h1();
			h2();
			y1=y1-40;
			y2=y2-40;
			rectangle(x1,y1,x2,y2);
		}

		else if(k==13) //Enter key is pressed
		{
			if(y1==198)  // cursor on the first option
			{
			   cleardevice();
			   select_car(); // opens the game
			}
			else
			{
				exit(0);
			}
		}

		else if(k==27)
		{
			exit(0);
		}
	   }
	}
	}
	//getch();
	closegraph();
}

void h1() //prints the "MENU"
{
	settextstyle(7,0,7);
	setcolor(GREEN);
	outtextxy(215,50,"MENU");
	setcolor(RED);
	bar3d(20,145,620,150,5,2);
}

void h2()  // prints options
{
	settextstyle(8,0,4);
	setcolor(GREEN);
	outtextxy(220,200,"PLAY GAME");
	outtextxy(220,240,"HIGH SCORE");
	outtextxy(220,280,"HELP");
	outtextxy(220,320,"ABOUT");
	outtextxy(220,360,"EXIT");
}